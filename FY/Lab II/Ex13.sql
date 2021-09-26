create table Machine(
    machine_id int primary key,
    machine_name varchar(50) not null check(machine_name = upper(machine_name)),
    machine_type varchar(10) check(
        machine_type in(
            'drilling',
            'milling',
            'lathe',
            'turning',
            'grinding'
        )
    ),
    machine_price float check(machine_price > 0.0),
    machine_cost float,
    check(machine_cost < machine_price)
);

create table Employee(
    employee_id int primary key,
    employee_name varchar(50) not null check(employee_name = upper(employee_name)),
    employee_desg varchar(10) check(employee_desg in('manager', 'staff', 'worker')),
    employee_sal float check(employee_sal > 0),
    employee_uid int unique,
    check(employee_uid != employee_id)
);