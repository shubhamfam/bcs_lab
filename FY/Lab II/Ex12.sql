create table Owner(
    name varchar(50) primary key,
    address text,
    phone_no bigint
);

drop table Property;

create table Property(
    pnumber int primary key,
    description varchar(50) not null,
    area char(10),
    owner_name varchar(50) references Owner on delete cascade
);

create table Doctor(
    doc_no int primary key,
    doc_name varchar(50),
    city varchar(10)
);

create table hosp_doc(
    hno int references Hospital,
    doc_no int references Doctor,
    primary key(hno, doc_no)
);

create table Patient(
    pno int primary key,
    name varchar(50) not null,
    address varchar(50)
);

create table Bed(
    bed_no int,
    room_no int,
    description varchar(50),
    primary key(bed_no, room_no),
    patient_no int references Patient unique
);

