--1. List the names of employees who work in all the projects that 'Shubham' works on.
select
    ename
from
    emp e
where
    exists(
        select
            *
        from
            emp_proj
        where
            emp_proj.eno = e.eno
            and pno in(
                select
                    pno
                from
                    emp,
                    emp_proj
                where
                    emp.eno = emp_proj.eno
                    and ename = 'Shruti'
            )
    );

--2. List the names of employees who work on only some projects that “______” works on


--3. List the names of the departments that have atleast one project under them .( write using
--‘exists ‘ clause
select
    dname
from
    dept d
where
    exists(
        select
            *
        from
            project
        where
            d.dno = project.control_dno
    );

--4. List the names of employees who do not work on “sales” project (write using ‘not exists’)
select
    ename
from
    emp e
where
    not exists(
        select
            *
        from
            emp_proj,
            project
        where
            project_name = 'Sales'
            and emp_proj.pno = project.project_id
            and e.eno = emp_proj.eno
    );

--5. List the names of employees who work only on those projects that are controlled by their
--department .
select
    ename
from
    emp e
where
    exists(
        select
            *
        from
            project p,
            emp_proj ep
        where
            e.dno = p.control_dno
            and ep.eno = e.eno
            and ep.pno = p.project_id
    );


--6. List the names of employees who do not work on any projects that are controlled by their
--department
select
    ename
from
    emp e
where
    not exists(
        select
            *
        from
            project p,
            emp_proj ep
        where
            e.dno = p.control_dno
            and ep.eno = e.eno
            and ep.pno = p.project_id
    );