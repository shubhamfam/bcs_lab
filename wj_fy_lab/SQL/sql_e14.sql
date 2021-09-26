/* SQL Exercise 14 */

/* SET A */

/* Q1 */

drop table Employee;
create table Employee (
    e_no int primary key,
    e_name varchar(40),
    e_sal float
);
\d Employee

                     Table "public.employee"
 Column |         Type          | Collation | Nullable | Default
--------+-----------------------+-----------+----------+---------
 e_no   | integer               |           | not null |
 e_name | character varying(40) |           |          |
 e_sal  | double precision      |           |          |
Indexes:
    "employee_pkey" PRIMARY KEY, btree (e_no)


alter table Employee add column desg varchar(10) check(desg in('Manager','Support','Worker'));
\d Employee

                     Table "public.employee"
 Column |         Type          | Collation | Nullable | Default
--------+-----------------------+-----------+----------+---------
 e_no   | integer               |           | not null |
 e_name | character varying(40) |           |          |
 e_sal  | double precision      |           |          |
 desg   | character varying(10) |           |          |
Indexes:
    "employee_pkey" PRIMARY KEY, btree (e_no)
Check constraints:
    "employee_desg_check" CHECK (desg::text = ANY (ARRAY['Manager'::character varying, 'Support'::character varying, 'Worker'::character varying]::text[]))

/* Q2 */

drop table Student;
create table Student(
    student_no int primary key,
    student_name varchar(40),
    date_of_birth date
);
\d Student

                         Table "public.student"
    Column     |         Type          | Collation | Nullable | Default
---------------+-----------------------+-----------+----------+---------
 student_no    | integer               |           | not null |
 student_name  | character varying(40) |           |          |
 date_of_birth | date                  |           |          |
Indexes:
    "student_pkey" PRIMARY KEY, btree (student_no)


alter table Student
    add column address text not null,
    add column phone int;  
\d Student

                         Table "public.student"
    Column     |         Type          | Collation | Nullable | Default
---------------+-----------------------+-----------+----------+---------
 student_no    | integer               |           | not null |
 student_name  | character varying(40) |           |          |
 date_of_birth | date                  |           |          |
 address       | text                  |           | not null |
 phone         | integer               |           |          |
Indexes:
    "student_pkey" PRIMARY KEY, btree (student_no)


/* Q3 */

alter table Project add constraint name_constraint check (project_name like 'R%');

                            Table "public.project"
       Column        |         Type          | Collation | Nullable | Default
---------------------+-----------------------+-----------+----------+---------
 project_id          | integer               |           | not null |
 project_name        | character varying(20) |           |          |
 project_description | text                  |           |          |
 status              | boolean               |           |          |
Indexes:
    "project_pkey" PRIMARY KEY, btree (project_id)
Check constraints:
    "name_constraint" CHECK (project_name::text ~~ 'R%'::text)


/* Q4 */

alter table Hospital12a2 add column h_budget int check(h_budget>50000);

                    Table "public.hospital12a2"
  Column  |         Type          | Collation | Nullable | Default
----------+-----------------------+-----------+----------+---------
 h_no     | integer               |           | not null |
 name     | character varying(50) |           |          |
 city     | character(10)         |           |          |
 h_budget | integer               |           |          |
Indexes:
    "hospital12a2_pkey" PRIMARY KEY, btree (h_no)
Check constraints:
    "hospital12a2_h_budget_check" CHECK (h_budget > 50000)
Referenced by:
    TABLE "hospital12a2_doctor12a2" CONSTRAINT "hospital12a2_doctor12a2_h_no_fkey" FOREIGN KEY (h_no) REFERENCES hospital12a2(h_no)
