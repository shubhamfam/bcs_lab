/* EXERCISE 17 */

/*SET A*/

create table emp17(
    emp_id int primary key,
    emp_name varchar(30) not null,
    emp_address varchar(30),
    emp_bdate date not null
);
    \d emp17

                            Table "public.emp17"
    Column    |         Type          | Collation | Nullable | Default
    -------------+-----------------------+-----------+----------+---------
    emp_id      | integer               |           | not null |
    emp_name    | character varying(30) |           | not null |
    emp_address | character varying(30) |           |          |
    emp_bdate   | date                  |           | not null |
    Indexes:
        "emp17_pkey" PRIMARY KEY, btree (emp_id)


create table investor17(
    inv_no int primary key,
    inv_name varchar(30) not null,
    inv_date date not null,
    inv_amt float not null 
);
    \d investor17

                        Table "public.investor17"
    Column  |         Type          | Collation | Nullable | Default
    ----------+-----------------------+-----------+----------+---------
    inv_no   | integer               |           | not null |
    inv_name | character varying(30) |           | not null |
    inv_date | date                  |           | not null |
    inv_amt  | double precision      |           | not null |
    Indexes:
        "investor17_pkey" PRIMARY KEY, btree (inv_no)



create table emp_inv17(
    emp_id int references emp17(emp_id),
    inv_no int references investor17(inv_no)
);
    \d emp_inv17

                Table "public.emp_inv17"
    Column |  Type   | Collation | Nullable | Default
    --------+---------+-----------+----------+---------
    emp_id | integer |           |          |
    inv_no | integer |           |          |
    Foreign-key constraints:
        "emp_inv17_emp_id_fkey" FOREIGN KEY (emp_id) REFERENCES emp17(emp_id)
        "emp_inv17_inv_no_fkey" FOREIGN KEY (inv_no) REFERENCES investor17(inv_no)



insert into emp17 values
    (1, 'Alex', 'Columbus Ohio', '1984-01-01'),
    (2, 'Art', 'Columbus Ohio', '1984-01-01'),
    (3, 'Andy', 'Columbus Ohio', '1984-01-01'),
    (4, 'Allison', 'Columbus Ohio', '1984-01-01'),
    (5, 'Amy', 'Columbus Ohio', '1984-01-01'),
    (6, 'Andy', 'Columbus Ohio', '1984-01-01');

insert into investor17 values
    (101, 'Alex', '2014-01-01', '250000'),
    (102, 'Andy', '2014-01-01', '250000'),
    (103, 'Allison', '2014-02-01', '250000'),
    (104, 'Greg', '2014-01-01', '250000'),
    (105, 'Nish', '2014-01-01', '250000'),
    (106, 'Bob', '2014-01-01', '250000');

insert into emp_inv17 values 
    (1,101),
    (3,102),
    (4,103);



/* 1 */ select emp_name from emp17 union select inv_name from investor17;

    emp_name
    ----------
    Alex
    Greg
    Amy
    Andy
    Art
    Bob
    Nish
    Allison
    (8 rows)

/* 2 */ select emp_name from emp17 union all select inv_name from investor17;
    emp_name
    ----------
    Alex
    Art
    Andy
    Allison
    Amy
    Andy
    Alex
    Andy
    Allison
    Greg
    Nish
    Bob
    (12 rows)

/* 3 */ select emp_name from emp17 intersect select inv_name from investor17;
    emp_name
    ----------
    Allison
    Andy
    Alex
    (3 rows)

/* 4 */ select emp_name from emp17 except select inv_name from investor17;

    emp_name
    ----------
    Amy
    Art
    (2 rows)
