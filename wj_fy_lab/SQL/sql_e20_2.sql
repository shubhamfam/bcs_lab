/*EXERCISE 20 - 2*/

Agent
Policy
Premiums
policy holder
policy types


create table policy_types20(
    policy_type_id int primary key,
    policy_type_name varchar(10) check (policy_type_name in('Vehicle','Life','Accident'))
);

create table agent20(
    agent_id int primary key,
    agent_name varchar(30),
    agent_area varchar(30)
);

create table customer20(
    cust_id int primary key,
    cust_name varchar(30),
    cust_area varchar(30)
);