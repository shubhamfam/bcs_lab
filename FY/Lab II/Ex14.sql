drop table Employee;

create table Employee (
    eno int primary key,
    ename varchar(50) not null,
    sal float not null
);

alter table
    Employee
add
    column designaion varchar(10) check(designaion in('manager', 'staff', 'worker'));

drop table Student;

create table Student (
    student_no int primary key,
    sname varchar(50) not null,
    date_of_birth date
);

alter table
    Student
add
    column address text not null,
add
    column phone int;


alter table Project add constraint proj_name_chk check(project_name like 'R%');

alter table Hospital add column hbudget int check(hbudget > 50000);