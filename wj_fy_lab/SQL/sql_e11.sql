/* Exercise 11 - SET A */

/* Q1 */

create table Player(player_id int primary key, name varchar(50), birth_date date, birth_place varchar(100));
                        
                         Table "public.player"
   Column    |          Type          | Collation | Nullable | Default
-------------+------------------------+-----------+----------+---------
 player_id   | integer                |           | not null |
 name        | character varying(50)  |           |          |
 birth_date  | date                   |           |          |
 birth_place | character varying(100) |           |          |
Indexes:
    "player_pkey" PRIMARY KEY, btree (player_id)

/* Q2 */

create table Student(
    roll_no int,
    class varchar(20),
    weight numeric(6,2),
    height numeric(6,2),
    primary key (roll_no, class)
);

                      Table "public.student"
 Column  |         Type          | Collation | Nullable | Default
---------+-----------------------+-----------+----------+---------
 roll_no | integer               |           | not null |
 class   | character varying(20) |           | not null |
 weight  | numeric(6,2)          |           |          |
 height  | numeric(6,2)          |           |          |
Indexes:
    "student_pkey" PRIMARY KEY, btree (roll_no, class)

/* Q3 */

create table Project(
    project_id int primary key,
    project_name varchar(20),
    project_description text,
    status bool
);

                            Table "public.project"
       Column        |         Type          | Collation | Nullable | Default
---------------------+-----------------------+-----------+----------+---------
 project_id          | integer               |           | not null |
 project_name        | character varying(20) |           |          |
 project_description | text                  |           |          |
 status              | boolean               |           |          |
Indexes:
    "project_pkey" PRIMARY KEY, btree (project_id)

/* Q4 */

create table Donor(
    donor_no int primary key, 
    donor_name varchar(50),
    blood_group char(6),
    last_date date
);

                         Table "public.donor"
   Column    |         Type          | Collation | Nullable | Default
-------------+-----------------------+-----------+----------+---------
 donor_no    | integer               |           | not null |
 donor_name  | character varying(50) |           |          |
 blood_group | character(6)          |           |          |
 last_date   | date                  |           |          |
Indexes:
    "donor_pkey" PRIMARY KEY, btree (donor_no)


/* SET B */

create table Property(
    property_id int primary key,
    property_desc text,
    area float,
    rate float,
    agri_status bool
);
\d Property

                      Table "public.property"
    Column     |       Type       | Collation | Nullable | Default
---------------+------------------+-----------+----------+---------
 property_id   | integer          |           | not null |
 property_desc | text             |           |          |
 area          | double precision |           |          |
 rate          | double precision |           |          |
 agri_status   | boolean          |           |          |
Indexes:
    "property_pkey" PRIMARY KEY, btree (property_id)


create table Actor(
    actor_id int primary key,
    actor_name varchar(40),
    birth_date date
);
\d Actor

                        Table "public.actor"
   Column   |         Type          | Collation | Nullable | Default
------------+-----------------------+-----------+----------+---------
 actor_id   | integer               |           | not null |
 actor_name | character varying(40) |           |          |
 birth_date | date                  |           |          |
Indexes:
    "actor_pkey" PRIMARY KEY, btree (actor_id)


create table Movie(
    movie_no int primary key,
    name varchar(50),
    release_year int
);
\d Movie

                         Table "public.movie"
    Column    |         Type          | Collation | Nullable | Default
--------------+-----------------------+-----------+----------+---------
 movie_no     | integer               |           | not null |
 name         | character varying(50) |           |          |
 release_year | integer               |           |          |
Indexes:
    "movie_pkey" PRIMARY KEY, btree (movie_no)



create table Hospital(
    h_no int primary key,
    h_name varchar(40),
    h_city varchar (20)
);
\d Hospital

                     Table "public.hospital"
 Column |         Type          | Collation | Nullable | Default
--------+-----------------------+-----------+----------+---------
 h_no   | integer               |           | not null |
 h_name | character varying(40) |           |          |
 h_city | character varying(20) |           |          |
Indexes:
    "hospital_pkey" PRIMARY KEY, btree (h_no)


/* SET C */

create table album(
    album_id int,
    album_name varchar(40),
    album_artist varchar(30),
    album_release_date date,
    album_rating int,
    primary key(album_id, album_name)
);
\d album

                            Table "public.album"
       Column       |         Type          | Collation | Nullable | Default
--------------------+-----------------------+-----------+----------+---------
 album_id           | integer               |           | not null |
 album_name         | character varying(40) |           | not null |
 album_artist       | character varying(30) |           |          |
 album_release_date | date                  |           |          |
 album_rating       | integer               |           |          |
Indexes:
    "album_pkey" PRIMARY KEY, btree (album_id, album_name)
