/* EXERCISE 18 */

/* SET A */

create table dept18(
    d_no int primary key,
    d_name varchar(10)
);
\d dept18

                      Table "public.dept18"
 Column |         Type          | Collation | Nullable | Default
--------+-----------------------+-----------+----------+---------
 d_no   | integer               |           | not null |
 d_name | character varying(10) |           |          |
Indexes:
    "dept18_pkey" PRIMARY KEY, btree (d_no)


create table emp18(
    e_no int primary key,
    e_name varchar(35) not null,
    d_no int references dept18(d_no),
    e_salary float,
    e_address varchar(20),
    e_gender varchar(1)
);
\d emp18

                        Table "public.emp18"
  Column   |         Type          | Collation | Nullable | Default
-----------+-----------------------+-----------+----------+---------
 e_no      | integer               |           | not null |
 e_name    | character varying(35) |           | not null |
 d_no      | integer               |           |          |
 e_salary  | double precision      |           |          |
 e_address | character varying(20) |           |          |
 e_gender  | character varying(1)  |           |          |
Indexes:
    "emp18_pkey" PRIMARY KEY, btree (e_no)
Foreign-key constraints:
    "emp18_d_no_fkey" FOREIGN KEY (d_no) REFERENCES dept18(d_no)



create table project18(
    p_no int primary key,
    p_name varchar(20),
    control_dno int references dept18(d_no),
    p_budget float
);
\d project18

                       Table "public.project18"
   Column    |         Type          | Collation | Nullable | Default
-------------+-----------------------+-----------+----------+---------
 p_no        | integer               |           | not null |
 p_name      | character varying(20) |           |          |
 control_dno | integer               |           |          |
 p_budget    | double precision      |           |          |
Indexes:
    "project18_pkey" PRIMARY KEY, btree (p_no)
Foreign-key constraints:
    "project18_control_dno_fkey" FOREIGN KEY (control_dno) REFERENCES dept18(d_no)



create table emp_project18(
    e_no int references emp18(e_no),
    p_no int references project18(p_no),
    hrs float
);
\d emp_project18

                Table "public.emp_project18"
 Column |       Type       | Collation | Nullable | Default
--------+------------------+-----------+----------+---------
 e_no   | integer          |           |          |
 p_no   | integer          |           |          |
 hrs    | double precision |           |          |
Foreign-key constraints:
    "emp_project18_e_no_fkey" FOREIGN KEY (e_no) REFERENCES emp18(e_no)
    "emp_project18_p_no_fkey" FOREIGN KEY (p_no) REFERENCES project18(p_no)

budgets: 20,23,30,35,40
depts: 1-art, 2-it, 3-finance
projects 2 art 2 it 1 finance
1-first 3, 2- first 2,3-first 1,4-last 3, 5-last 2, 6-last
addresses : ohio, wa, oregon

2 m 4 f

insert into dept18 values
    (1, 'art'),
    (2, 'it'),
    (3, 'finance');

insert into emp18 values
    (101, 'Rob Beckett', 1, '200000', 'ohio', 'm'),
    (102, 'Aisling Bea', 1, '230000', 'washington', 'f'),
    (103, 'Sally Phillips', 2, '230030', 'ohio', 'f'),
    (104, 'Roisin Conaty', 2, '234300', 'oregon', 'f'),
    (105, 'Mark Watson', 3, '520000', 'oregon', 'm'),
    (106, 'Greg Davies', 3, '690000', 'oregon', 'm');

insert into project18 values
    (201, 'Project1', 1, 20000),
    (202, 'Project2', 1, 30000),
    (203, 'Project3', 2, 25000),
    (204, 'Project4', 2, 35000),
    (205, 'Project5', 3, 40000);

insert into emp_project18 values
    (101,201,8),
    (101,202,12),
    (101,203,13),
    (102,201,13),
    (102,202,11),
    (103,201,20),
    (104,203,8),
    (104,204,5),
    (104,205,15),
    (105,204,15),
    (105,205,11),
    (106,205,50);

/* 1 */ select d_name from dept18 where d_no in (select control_dno from project18 where p_budget>30000);

    d_name
    ---------
    it
    finance
    (2 rows)

/* 2 */ select p_name from project18 where control_dno=1 and p_budget>(select min(p_budget) from project18 where control_dno=2);

    p_name
    ----------
    Project2
    (1 row)

/* 3 */ 

/* 4 */

/* 5 */ select e_name from emp18 where e_no in (select e_no from emp_project18 where p_no in(select p_no from emp_project18 where e_no=101));

        e_name
    ----------------
    Rob Beckett
    Aisling Bea
    Sally Phillips
    Roisin Conaty
    (4 rows)

/* 6 */ select e_name from emp18 where e_no not in (select e_no from emp_project18 where p_no in(select p_no from emp_project18 where e_no=101));

    e_name
    -------------
    Mark Watson
    Greg Davies
    (2 rows)

/* 7 */ select e_name from emp18 where e_no not in (select e_no from emp_project18 where p_no in(select p_no from project18 where control_dno in(select d_no from dept18 where d_name='art')));

        e_name
    ---------------
    Roisin Conaty
    Mark Watson
    Greg Davies
    (3 rows)

/* 8 */ select p_name, d_name from project18,dept18 where project18.p_no

select count(e_no) from emp_project18 where p_no in(select p_no from project18 where control_dno=2);

/* 9 */ select e_name from emp18 where e_no in (select e_no from emp_project18 where hrs>10 and p_no in (select p_no from project18 where control_dno in (select d_no from dept18 where d_name='it')));

    e_name
    -------------
    Mark Watson
    Rob Beckett
    (2 rows)

/* 10 */ select e_name from emp18 group by d_no;



/* EXERCISE 19 */

/* SET A */

/* 1 */ select e_name from emp18 where e_no in (select e_no from emp_project18 where e_no in (select e_no from emp18 where e_name='Greg Davies'));