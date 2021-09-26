--SET A
create table Area(
    aname varchar(50) primary key,
    area_type char(5) not null check(area_type in('rural', 'urban'))
);

create table Person(
    pnumber serial primary key,
    pname varchar(50) not null,
    birthdate date not null,
    income money,
    area varchar(50) references Area on delete cascade
);

/*insert into
 area
 values
 ('Pune', 'urban'),
 ('Mumbai', 'urban'),
 ('Ahmednagar', 'rural'),
 ('Ratnagiri', 'rural');
 
 insert into
 person(pname, birthdate, income, area)
 values
 ('Shubham', '13-11-1998', '10000000', 'Pune'),
 ('Yash', '02-11-2000', '500000', 'Mumbai'),
 ('Wallabh', '11-11-1999', '900000', 'Ratnagiri'),
 ('Saurabh', '30-01-1998', '700000', 'Ahmednagar'),
 ('Yash', '01-03-1999', '800000', 'Mumbai'),
 (
 'Donald Drum',
 '01-03-1965',
 '999999999',
 'Ahmednagar'
 ),
 (
 'Kim Jong Yenpure',
 '02-09-1945',
 '700000000',
 'Ratnagiri'
 ),
 ('Jeff Bendre', '7-7-1977', '777777', 'Mumbai'),
 ('Elon Mhaske', '3-07-1978', '1000000000', 'Pune');
 insert into person(pname, birthdate, income, area) values('Shrutika','2-08-1995','80000','Ahmednagar');
 insert into person(pname, birthdate, income, area) values('Sanas','2-08-1995','80000','Ahmednagar');
 */
--1. List the names of all people living in ‘Pune’ area.
select
    pname
from
    person
where
    area = 'Pune';

--2. List details of all people whose names start with the alphabet ‘S’ & contains maximum 7
--alphabets in it.
select
    *
from
    person
where
    pname like 'S%'
    and length(pname) <= 7;

--3. List the names of all people whose birthday falls in the month of July.
select
    pname,
    birthdate
from
    person
where
    extract (
        Month
        from
            birthdate
    ) = 7;

--4.Give the count of people who are born on ‘ 2-08-1995 ’ 
Select
    count(*)
from
    person
where
    birthdate = '2-08-1995';

--5.Give the count of people whose income is below 800000.
select
    count(*)
from
    person
where
    income < '800000';

--6.List names of all people whose income is between 700000 and 1000000;
select
    pname
from
    person
where
    '700000' < income
    and income < '1000000';

--7. List the names of people with average income
Select pname,avg(income::numeric) from person group by pname;

--8. List the sum of incomes of people living in ‘Pune’
select sum(income::numeric) from person where area='Pune';

--9. List the names of the areas having people with maximum income (duplicate areas must be
--omitted in the result)
select area,max(income) from person group by area;

--10. Give the count of people in each area
select area, count(*) from person group by area;

--11. List the details of people living in ‘Ahmednagar’ and having income greater than 100000;
select * from person where area='Ahmednagar' and income>'100000';

--12. List the details pf people, sorted by person number
select * from person order by pnumber;

--13. List the details of people, sorted by area, person name
select * from person order by area,pname;

--14. List the minimum income of people.
select min(income) from person;

--15. Transfer all people living in ‘pune’ to ‘mumbai’.
update person set area='Mumbai' where area='Pune';

--16. delete information of all people staying in ‘urban’ area
