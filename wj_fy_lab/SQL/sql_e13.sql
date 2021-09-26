/* SQL Exercise 13 */

/* SET A */

/* Q1 */

create table Machine13a1(
    machine_id int primary key,
    machine_name varchar(50) not null check(machine_name=upper(machine_name)),
    machine_type varchar(10) check (machine_type in('drilling', 'milling', 'lathe', 'turning', 'grinding')),
    machine_price float check (machine_price > 0),
    machine_cost float,
    check (machine_cost < machine_price)
);
\d Machine13a1

                       Table "public.machine13a1"
    Column     |         Type          | Collation | Nullable | Default
---------------+-----------------------+-----------+----------+---------
 machine_id    | integer               |           | not null |
 machine_name  | character varying(50) |           | not null |
 machine_type  | character varying(10) |           |          |
 machine_price | double precision      |           |          |
 machine_cost  | double precision      |           |          |
Indexes:
    "machine13a1_pkey" PRIMARY KEY, btree (machine_id)
Check constraints:
    "machine13a1_check" CHECK (machine_cost < machine_price)
    "machine13a1_machine_name_check" CHECK (machine_name::text = upper(machine_name::text))
    "machine13a1_machine_price_check" CHECK (machine_price > 0::double precision)
    "machine13a1_machine_type_check" CHECK (machine_type::text = ANY (ARRAY['drilling'::character varying, 'milling'::character varying, 'lathe'::character varying, 'turning'::character varying, 'grinding'::character varying]::text[]))

/*Q2*/

create table Employee13a2(
    employee_id int primary key,
    employee_name varchar(50) not null check(employee_name=upper(employee_name)),
    employee_desg varchar(10) check(employee_desg in ('manager','staff','worker')),
    employee_sal float check(employee_sal > 0),
    employee_uid text UNIQUE,
    check(CAST(employee_id as text) <> employee_uid)
);
\d Employee13a2

                      Table "public.employee13a2"
    Column     |         Type          | Collation | Nullable | Default
---------------+-----------------------+-----------+----------+---------
 employee_id   | integer               |           | not null |
 employee_name | character varying(50) |           | not null |
 employee_desg | character varying(10) |           |          |
 employee_sal  | double precision      |           |          |
 employee_uid  | text                  |           |          |
Indexes:
    "employee13a2_pkey" PRIMARY KEY, btree (employee_id)
    "employee13a2_employee_uid_key" UNIQUE CONSTRAINT, btree (employee_uid)
Check constraints:
    "employee13a2_check" CHECK (employee_id::text <> employee_uid)
    "employee13a2_employee_desg_check" CHECK (employee_desg::text = ANY (ARRAY['manager'::character varying, 'staff'::character varying, 'worker'::character varying]::text[]))
    "employee13a2_employee_name_check" CHECK (employee_name::text = upper(employee_name::text))
    "employee13a2_employee_sal_check" CHECK (employee_sal > 0::double precision)
