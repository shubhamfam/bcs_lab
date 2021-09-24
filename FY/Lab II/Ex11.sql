--SET A
create table Player(
    player_id int primary key,
    name varchar(50),
    birth_date date,
    birth_place varchar(100)
);

create table Student(
    roll_no int,
    class varchar(20),
    weight numeric(6, 2),
    height numeric(6, 2),
    primary key(roll_no, class)
);

create table Project(
    project_id int primary key,
    project_name varchar(20),
    project_description text,
    status boolean
);

create table Donor(
    donor_no int primary key,
    donor_name varchar(50),
    blood_group char(6),
    last_date date
);

--SET B
create table Property(
    property_id serial primary key,
    property_desc text not null,
    area char(10),
    rate money,
    agri_status boolean
);

create table Actor(
    actor_id serial primary key,
    actor_name varchar(50),
    birth_date date
);

create table Movie(
    movie_no serial primary key,
    name varchar(50),
    release_year int
);

create table Hospital(
    hno int primary key,
    hname varchar(50) not null,
    hcity varchar(30)
);

