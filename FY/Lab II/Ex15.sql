insert into
    Owner
values
    ('Shubham', 'Pune', 45598998),
    ('Yash', 'Pune', 87774274),
    ('Mr.Nene', 'Mumbai', 95593323),
    ('Mr.Joshi', 'Mumbai', 98855855);

insert into
    Property
values
    (
        1,
        'Nice property with scenic views around',
        'Pune',
        'Shubham'
    ),
    (2, 'Luxurious Apartments', 'Mumbai', 'Shubham'),
    (3, 'Affordable home', 'Rajasthan', 'Yash'),
    (4, 'Historic Mansion', 'Jaipur', 'Yash'),
    (5, 'Farmland', 'Nagpur', 'Mr.Joshi'),
    (6, '3 bhk apartment', 'Pune', 'Mr.Joshi'),
    (7, 'Bunglow', 'Pune', 'Mr.Joshi');

update
    owner
set
    phone_no = 9890278008
where
    name = 'Mr.Nene';

delete from
    property
where
    owner_name = 'Mr.Joshi'
    and area = 'Pune';

create table dept(
    dno serial primary key,
    dname varchar(50) not null unique,
    dloc varchar(20)
);

create table emp(
    eno serial primary key,
    ename varchar(50) not null,
    designation varchar(50) not null,
    sal money,
    dno int references dept on delete cascade
);

insert into
    dept(dname, dloc)
values
    ('Accounting', 'Pune'),
    ('HR', 'Mumbai'),
    ('Marketing', 'Pune'),
    ('Production', 'Nashik'),
    ('R&D', 'Nashik');

insert into
    emp(ename, designation, sal, dno)
values
    ('Shubham', 'CEO', '99999999999', 5),
    ('Yash', 'Manager', '42555555', 3),
    ('Saurabh', 'HR', '5256262', 2),
    ('Wallabh', 'Manager', '55555555', 4),
    ('Mahadev', 'Accountant', '9999900', 1),
    ('Shruti', 'CTO', '99999999', 5),
    ('Yashoda', 'Executive', '42555555', 3),
    ('Surabhi', 'HR', '5256262', 2),
    ('Wallabhi', 'Staff', '55555', 4),
    ('Mahadevi', 'Clerk', '99999', 1);

update
    emp
set
    sal = sal + (0.15 * sal)
where
    designation = 'Manager';

delete from
    emp
where
    dno = 30;

delete from
    emp
where
    designation = 'Clerk';

update
    dept
set
    dloc = 'Kolkata'
where
    dno = 20;

create table client(
    client_no varchar(10) primary key,
    name text,
    address text
);

create table sales_order(
    s_order_no int primary key,
    s_order_date date,
    client_no varchar(10) references client on delete cascade on update cascade
);

insert into
    client
values
    ('C004', 'Joshi', 'pune'),
    ('C005', 'Mr.Stark', 'pune');

insert into
    sales_order
values
    (101, '7-8-2020', 'C004'),
    (102, '4-5-2006', 'C005'),
    (103, '6-6-2021', 'C004'),
    (104, '8-12-2007', 'C005'),
    (105, '2-2-2021', 'C004'),
    (106, '2-2-1017', 'C005');

update
    sales_order
set
    s_order_date = '12/4/8'
where
    client_no = 'C004';

/*delete from
    sales_order
where
    s_order_date <'2-10-2008';
*/
delete from
    client
where
    name = 'Joshi';