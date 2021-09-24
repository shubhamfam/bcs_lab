create table emp(
    emp_id int primary key,
    emp_name varchar(20) not null,
    address text,
    bdate date
);

create table investor (
    inv_no int primary key,
    inv_name varchar(30) not null,
    inv_date date,
    inv_amt money,
    emp_id int references emp on delete cascade
);

/*insert into
    emp
values
    (1, 'Yash', 'Pune', '02-02-2000'),
    (2, 'Saurabh', 'Mumbai', '01-09-1994'),
    (3, 'Wallabh', 'Nashik', '6-6-1996'),
    (4, 'Kunal', 'Satara', '06-5-1993');
*/
insert into
    investor
values
    (101, 'Yash', '02-01-2019', '500000', 1),
    (103, 'Wallabh', '2-5-2020', '400000', 3);

insert into
    investor
values
    (102, 'Mahadev', '04-11-2020', '310000'),
    (104, 'Shubham', '2-5-2020', '9000000');

--1. List the distinct names of customers who are either employees, or investors or both.
select emp_name from emp union select inv_name from investor;

--2. List the names of customers who are either employees , or investors or both.
select emp_name from emp union all select inv_name from investor;

--3. List the names of emloyees who are also investors.
select emp_name from emp intersect select inv_name from investor where emp_id is not null;

--4. List the names of employees who are not investors.
select emp_name from emp except select inv_name from investor;