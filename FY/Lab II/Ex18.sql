--relation emp already exists
alter table
    project
add
    column control_dno int references dept,
add
    column budget money;

alter table
    project
alter column
    project_name type varchar(50);

alter table emp add column city varchar(15);

create table emp_proj(
    eno int references emp,
    pno int references project on delete cascade,
    no_of_hours int,
    unique(eno, pno)
);

insert into
    project(project_id, project_name, control_dno, budget)
values
    (101, 'Analysis of Hinglish Content', 5, '500000'),
    (102, 'Taxation Management', 1, '200000'),
    (
        103,
        'Impact of covid-19 on production',
        4,
        '150000'
    ),
    (104, 'Modern methods of marketing', 3, '400000'),
    (105, 'Customer Sentiment Analysis', 5, '800000');

insert into
    emp_proj
values
    (6, 101, 100),
    (5, 102, 25),
    (7, 103, 80),
    (2, 104, 70),
    (1, 105, 110),
    (6, 105, 80),
    (4, 103, 50),
    (9, 101, 50);

--1. list the names of departments that controls projects whose budget is greater than 300000
select
    dname
from
    dept
where
    dno in(
        select
            control_dno
        from
            project
        where
            budget > '300000'
    );

--2. list the names of projects, controlled by department No 3, whose budget is greater than
--atleast one project controlled by department No 1.
select
    project_name
from
    project
where
    control_dno = 3
    and budget > some(
        select
            budget
        from
            project
        where
            control_dno = 1
    );

--3.list the details of the projects with second maximum budget
select
    *
from
    project
where
    budget < (
        select
            max(budget)
        from
            project
    )
order by
    budget desc
limit
    1;

--4.list the details of the projects with third maximum budget.
select
    *
from
    project
where
    project_id in(
        select
            project_id
        from
            project
        where
            budget < (
                select
                    max(budget)
                from
                    project
            )
        order by
            budget desc
        limit
            2
    )
order by
    budget
limit
    1;

--5.list the names of employees, working on some projects that employee number _6 is working.
select
    ename
from
    emp
where
    eno in(
        select
            distinct eno
        from
            emp_proj
        where
            pno in(
                select
                    pno
                from
                    emp_proj
                where
                    eno = 6
            )
            and eno <> 6
    );

--6.list the names of employees who do not work on any project that employee number 6 works on
select
    ename
from
    emp
where
    eno in(
        select
            distinct eno
        from
            emp_proj
        where
            pno not in(
                select
                    pno
                from
                    emp_proj
                where
                    eno = 6
            )
    );

--7.list the names of employees who do not work on any project controlled by ‘ R&D ’ department
select
    ename
from
    emp,
    emp_proj
where
    emp.eno = emp_proj.eno
    and pno not in (
        select
            project_id
        from
            project,
            dept
        where
            project.control_dno = dept.dno
            and dname = 'R&D'
    );

--8.list the names of projects along with the controlling department name,
--for those projects which has atleast 2 employees working on it.
select
    project_name,
    dname
from
    project,
    dept
where
    control_dno = dno
    and project_id in (
        select
            pno
        from
            emp_proj
        group by
            pno
        having
            count(eno) >= 2
    );

--9.list the names of employees who is worked for more than 10 hrs on atleast one project 
--controlled by ‘accounting’ dept.
select
    ename
from
    emp,
    emp_proj,
    dept,
    project
where
    emp.eno = emp_proj.eno
    and no_of_hours > 10
    and dept.dno = emp.dno
    and dname = 'Accounting'
    and project.control_dno = emp.dno;

--10.list the names of employees,who are males,and earning the maximum salary in their department.
select
    dname,ename,sal
from
    emp e1,
    dept
where
    e1.dno = dept.dno
    and 1 > (
        select
            count(distinct sal)
        from
            emp e2
        where
            e2.sal > e1.sal
            and e1.dno = e2.dno
    )
order by
    dept asc,
    sal desc;

--11.list the names of employees who work in the same department as ‘ Shubham ’.
select ename from emp where dno=(select dno from emp where ename='Shubham') and ename<>'Shubham';


--12.list the names of employees who do not live in Pune or Mumbai.
select ename,city from emp where city<>'Pune' and city<>'Mumbai';