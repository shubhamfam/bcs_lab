/* EXERCISE 15 */
/* SET A */

/* Q1 */

create table owner15(
    o_name varchar(30) primary key,
    o_address varchar(20),
    o_phone varchar(10)
);
\d owner15

                       Table "public.owner15"
  Column   |         Type          | Collation | Nullable | Default
-----------+-----------------------+-----------+----------+---------
 o_name    | character varying(30) |           | not null |
 o_address | character varying(20) |           |          |
 o_phone   | character varying(10) |           |          |
Indexes:
    "owner15_pkey" PRIMARY KEY, btree (o_name)
Referenced by:
    TABLE "property15" CONSTRAINT "property15_o_name_fkey" FOREIGN KEY (o_name) REFERENCES owner15(o_name)



create table property15(
    p_no int primary key,
    p_description text,
    p_area varchar(20),
    o_name varchar(30) references owner15(o_name)
);
\d property15

                       Table "public.property15"
    Column     |         Type          | Collation | Nullable | Default
---------------+-----------------------+-----------+----------+---------
 p_no          | integer               |           | not null |
 p_description | text                  |           |          |
 p_area        | character varying(20) |           |          |
 o_name        | character varying(30) |           |          |
Indexes:
    "property15_pkey" PRIMARY KEY, btree (p_no)
Foreign-key constraints:
    "property15_o_name_fkey" FOREIGN KEY (o_name) REFERENCES owner15(o_name)

insert into owner15 values
    ('Mr Joshi', 'Pune', '9423536598'),
    ('Mr Nene', 'Sangli', '8565471264');

insert into property15 values
    (1, 'Spacious', 'Pune', 'Mr Joshi'),
    (2, 'Grassy Field', 'Kolhapur', 'Mr Joshi'),
    (3, 'Near City Center', 'Satara', 'Mr Nene'),
    (4, 'Spacious', 'Pune', 'Mr Nene');

update owner15 set o_phone='9890278008' where o_name='Mr Nene';

delete from property15 where p_area='Pune' and o_name='Mr Joshi';

postgres=# select * from owner15;
  o_name  | o_address |  o_phone
----------+-----------+------------
 Mr Joshi | Pune      | 9423536598
 Mr Nene  | Sangli    | 9890278008
(2 rows)

postgres=# select * from property15;
 p_no |  p_description   |  p_area  |  o_name
------+------------------+----------+----------
    2 | Grassy Field     | Kolhapur | Mr Joshi
    3 | Near City Center | Satara   | Mr Nene
    4 | Spacious         | Pune     | Mr Nene
(3 rows)

/* Q2 */

create table dept15(
    dept_no int primary key,
    dept_name varchar(30),
    dept_loc varchar(20)
);
\d dept15

                       Table "public.dept15"
  Column   |         Type          | Collation | Nullable | Default
-----------+-----------------------+-----------+----------+---------
 dept_no   | integer               |           | not null |
 dept_name | character varying(30) |           |          |
 dept_loc  | character varying(20) |           |          |
Indexes:
    "dept15_pkey" PRIMARY KEY, btree (dept_no)


create table employee15(
    e_no int primary key,
    e_name varchar(30),
    e_desg varchar(30),
    e_sal float,
    dept_no int references dept15(dept_no)
);
\d employee15

                    Table "public.employee15"
 Column  |         Type          | Collation | Nullable | Default
---------+-----------------------+-----------+----------+---------
 e_no    | integer               |           | not null |
 e_name  | character varying(30) |           |          |
 e_desg  | character varying(30) |           |          |
 e_sal   | double precision      |           |          |
 dept_no | integer               |           |          |
Indexes:
    "employee15_pkey" PRIMARY KEY, btree (e_no)
Foreign-key constraints:
    "employee15_dept_no_fkey" FOREIGN KEY (dept_no) REFERENCES dept15(dept_no)

insert into dept15 values 
    (10, 'Dept1', 'Delhi'),
    (20, 'Dept2', 'Pune'),
    (30, 'Dept3', 'Goa'),
    (40, 'Dept4', 'Chennai'),
    (50, 'Dept5', 'Mumbai');

insert into employee15 values
    (1, 'Emp1', 'Manager', '500000', '10'),
    (2, 'Emp2', 'Clerk', '250000', '10'),
    (3, 'Emp3', 'Manager', '400000', '20'),
    (4, 'Emp4', 'Clerk', '250000', '20'),
    (5, 'Emp5', 'Manager', '640000', '30'),
    (6, 'Emp6', 'Clerk', '250000', '30'),
    (7, 'Emp7', 'Manager', '670000', '30'),
    (8, 'Emp8', 'Clerk', '250000', '40'),
    (9, 'Emp9', 'Clerk', '200000', '50'),
    (10, 'Emp10', 'Clerk', '250000', '50');

update employee15 set e_sal=(e_sal+(0.15*e_sal)) where e_desg='Manager';

delete from employee15 where dept_no=30;
delete from employee15 where e_desg='Clerk';

update dept15 set dept_loc='Kolkata' where dept_no=20;

postgres=# select * from dept15;
 dept_no | dept_name | dept_loc
---------+-----------+----------
      10 | Dept1     | Delhi
      30 | Dept3     | Goa
      40 | Dept4     | Chennai
      50 | Dept5     | Mumbai
      20 | Dept2     | Kolkata
(5 rows)


postgres=# select * from employee15;
 e_no | e_name | e_desg  | e_sal  | dept_no
------+--------+---------+--------+---------
    1 | Emp1   | Manager | 575000 |      10
    3 | Emp3   | Manager | 460000 |      20
(2 rows)

/* Q3 */

create table client15(
    client_no varchar(4) primary key,
    client_name varchar(20),
    client_address varchar(20)
);
\d client15

                         Table "public.client15"
     Column     |         Type          | Collation | Nullable | Default
----------------+-----------------------+-----------+----------+---------
 client_no      | character varying(4)  |           | not null |
 client_name    | character varying(20) |           |          |
 client_address | character varying(20) |           |          |
Indexes:
    "client15_pkey" PRIMARY KEY, btree (client_no)


create table sales_order15(
    s_order_no int primary key,
    s_order_date date,
    client_no varchar(4) references client15(client_no) on delete cascade
);
\d sales_order15

                     Table "public.sales_order15"
    Column    |         Type         | Collation | Nullable | Default
--------------+----------------------+-----------+----------+---------
 s_order_no   | integer              |           | not null |
 s_order_date | date                 |           |          |
 client_no    | character varying(4) |           |          |
Indexes:
    "sales_order15_pkey" PRIMARY KEY, btree (s_order_no)
Foreign-key constraints:
    "sales_order15_client_no_fkey" FOREIGN KEY (client_no) REFERENCES client15(client_no) ON DELETE CASCADE


insert into client15 values 
    ('C001','Joshi','Pune'),
    ('C004','Dave','Mumbai');

insert into sales_order15 values
    (1, '2007-10-10', 'C001'),
    (2, '2009-10-10', 'C001'),
    (3, '2009-10-10', 'C001'),
    (4, '2007-10-10', 'C004'),
    (5, '2010-10-10', 'C004'),
    (6, '2010-10-10', 'C004');

update sales_order15 set s_order_date ='2008-04-12' where client_no='C004';

delete from sales_order15 where s_order_date < '2008-02-10';

delete from client15 where client_name='Joshi';

postgres=# select * from client15;
 client_no | client_name | client_address
-----------+-------------+----------------
 C004      | Dave        | Mumbai
(1 row)


postgres=# select * from sales_order15;
 s_order_no | s_order_date | client_no
------------+--------------+-----------
          4 | 2008-04-12   | C004
          5 | 2008-04-12   | C004
          6 | 2008-04-12   | C004
(3 rows)
