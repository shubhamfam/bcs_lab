/* SQL Exercise 12*/

/* SET A */

/* Q1 */

create table Owner (
    owner_name varchar(50) primary key,
    address varchar(50),
    phoneno int
);
\d Owner

                        Table "public.owner"
   Column   |         Type          | Collation | Nullable | Default
------------+-----------------------+-----------+----------+---------
 owner_name | character varying(50) |           | not null |
 address    | character varying(50) |           |          |
 phoneno    | integer               |           |          |
Indexes:
    "owner_pkey" PRIMARY KEY, btree (owner_name)


create table Property12a1 (
    p_no int primary key,
    description varchar(50),
    area char(10),
    owner_name varchar(50) references Owner(owner_name)
);
\d Property12a1

                     Table "public.property12a1"
   Column    |         Type          | Collation | Nullable | Default
-------------+-----------------------+-----------+----------+---------
 p_no        | integer               |           | not null |
 description | character varying(50) |           |          |
 area        | character(10)         |           |          |
 owner_name  | character varying(50) |           |          |
Indexes:
    "property12a1_pkey" PRIMARY KEY, btree (p_no)
Foreign-key constraints:
    "property12a1_owner_name_fkey" FOREIGN KEY (owner_name) REFERENCES owner(owner_name)

/* Q2 */

create table Hospital12a2(
    h_no int primary key,
    name varchar(50),
    city char(10)
);
\d Hospital12a2

                   Table "public.hospital12a2"
 Column |         Type          | Collation | Nullable | Default
--------+-----------------------+-----------+----------+---------
 h_no   | integer               |           | not null |
 name   | character varying(50) |           |          |
 city   | character(10)         |           |          |
Indexes:
    "hospital12a2_pkey" PRIMARY KEY, btree (h_no)


create table Doctor12a2(
    d_no int primary key,
    d_name varchar(50),
    city char(10)
);
\d Doctor12a2

                    Table "public.doctor12a2"
 Column |         Type          | Collation | Nullable | Default
--------+-----------------------+-----------+----------+---------
 d_no   | integer               |           | not null |
 d_name | character varying(50) |           |          |
 city   | character(10)         |           |          |
Indexes:
    "doctor12a2_pkey" PRIMARY KEY, btree (d_no)


create table Hospital12a2_Doctor12a2(
    d_no int references Doctor12a2(d_no),
    h_no int references Hospital12a2(h_no)
);
\d Hospital12a2_Doctor12a2

      Table "public.hospital12a2_doctor12a2"
 Column |  Type   | Collation | Nullable | Default
--------+---------+-----------+----------+---------
 d_no   | integer |           |          |
 h_no   | integer |           |          |
Foreign-key constraints:
    "hospital12a2_doctor12a2_d_no_fkey" FOREIGN KEY (d_no) REFERENCES doctor12a2(d_no)
    "hospital12a2_doctor12a2_h_no_fkey" FOREIGN KEY (h_no) REFERENCES hospital12a2(h_no)

/* Q3 */

create table Bed12a3(
    bed_no int,
    room_no int,
    description varchar(50),
    primary key(bed_no, room_no)
);
\d Bed12a3

                        Table "public.bed12a3"
   Column    |         Type          | Collation | Nullable | Default
-------------+-----------------------+-----------+----------+---------
 bed_no      | integer               |           | not null |
 room_no     | integer               |           | not null |
 description | character varying(50) |           |          |
Indexes:
    "bed12a3_pkey" PRIMARY KEY, btree (bed_no, room_no)


create table Person12a3(
    p_no int primary key,
    name varchar(50) not null,
    address varchar(50),
    bed_no int UNIQUE,
    room_no int UNIQUE,
    foreign key(bed_no, room_no) references Bed12a3 (bed_no, room_no)
);
\d Person12a3

                    Table "public.person12a3"
 Column  |         Type          | Collation | Nullable | Default
---------+-----------------------+-----------+----------+---------
 p_no    | integer               |           | not null |
 name    | character varying(50) |           | not null |
 address | character varying(50) |           |          |
 bed_no  | integer               |           |          |
 room_no | integer               |           |          |
Indexes:
    "person12a3_pkey" PRIMARY KEY, btree (p_no)
    "person12a3_bed_no_key" UNIQUE CONSTRAINT, btree (bed_no)
    "person12a3_room_no_key" UNIQUE CONSTRAINT, btree (room_no)
Foreign-key constraints:
    "person12a3_bed_no_room_no_fkey" FOREIGN KEY (bed_no, room_no) REFERENCES bed12a3(bed_no, room_no)



