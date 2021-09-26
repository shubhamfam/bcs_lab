/* EXERCISE 16 */

/* SET A */

create table area16(
    area_name varchar(15) primary key,
    area_type varchar(5) not null check(area_type in ('urban','rural'))
);
\d area16

                        Table "public.area16"
    Column   |         Type          | Collation | Nullable | Default
    -----------+-----------------------+-----------+----------+---------
    area_name | character varying(15) |           | not null |
    area_type | character varying(5)  |           | not null |
    Indexes:
        "area16_pkey" PRIMARY KEY, btree (area_name)
    Check constraints:
        "area16_area_type_check" CHECK (area_type::text = ANY (ARRAY['urban'::character varying, 'rural'::character varying]::text[]))


create table person16(
    person_no int primary key,
    person_name varchar(35) not null,
    person_birthdate date not null,
    person_income float,
    area_name varchar(15) references area16(area_name)
);
\d person16

                            Table "public.person16"
        Column      |         Type          | Collation | Nullable | Default
    ------------------+-----------------------+-----------+----------+---------
    person_no        | integer               |           | not null |
    person_name      | character varying(35) |           | not null |
    person_birthdate | date                  |           | not null |
    person_income    | double precision      |           |          |
    area_name        | character varying(15) |           |          |
    Indexes:
        "person16_pkey" PRIMARY KEY, btree (person_no)
    Foreign-key constraints:
        "person16_area_name_fkey" FOREIGN KEY (area_name) REFERENCES area16(area_name)


insert into area16 values
    ('pune', 'urban'),
    ('mumbai', 'urban'),
    ('gaon', 'rural');

insert into person16 values
    (1, 'Amit', '2000-07-01', 150000, 'pune'),
    (2, 'Ajay', '2000-08-01', 200000, 'pune'),
    (3, 'Raj', '2000-08-23', 250000, 'pune'),
    (4, 'Rahul', '1990-10-01', 300000, 'pune'),
    (5, 'Atul', '1970-08-06', 300000, 'mumbai'),
    (6, 'Amitabh', '1976-01-06', 350000, 'mumbai'),
    (7, 'Abhishek', '1997-02-06', 450000, 'mumbai'),
    (8, 'Andy', '1965-01-06', 100000, 'gaon'),
    (9, 'Kel', '1965-03-15', 110000, 'gaon'),
    (11, 'Erle', '1970-01-01', 245555.55555555556, 'gaon');


/* 1 */  select person_name from person16 where area_name='pune';

    person_name
    -------------
    Amit
    Ajay
    Raj
    Rahul
    (4 rows)


/* 2 */  select * from person16 where person_name like 'A%' and char_length(person_name)<5;

    person_no | person_name | person_birthdate | person_income | area_name
    -----------+-------------+------------------+---------------+-----------
            1 | Amit        | 2000-07-01       |        150000 | pune
            2 | Ajay        | 2000-08-01       |        200000 | pune
            5 | Atul        | 1970-08-06       |        300000 | mumbai
            8 | Andy        | 1965-01-06       |        100000 | gaon
    (4 rows)

/* 3 */  select person_name from person16 where extract(month from person_birthdate)=08;

    person_name
    -------------
    Ajay
    Raj
    Atul
    (3 rows)


/* 4 */  select count(person_no) from person16 where person_birthdate='2000-07-01';
    count
    -------
        1
    (1 row)

/* 5 */  select count(person_no) from person16 where person_income <= 250000;

    count
    -------
        5
    (1 row)

/* 6 */  select person_name from person16 where person_income >=150000 and person_income<=350000;
    person_name
    -------------
    Amit
    Ajay
    Raj
    Rahul
    Atul
    Amitabh
    (6 rows)


/* 7 */  select person_name from person16 where person_income=(select avg(person_income) from person16);

    person_name
    -------------
    Erle
    (1 row)


/* 8 */  select sum(person_income) from person16 where area_name='pune';
    sum
    --------
    900000
    (1 row)

/* 9 */  select area_name from person16 where person_income=(select max(person_income) from person16);
    area_name
    -----------
    mumbai
    (1 row)

/* 10 */ select area_name, count(person_no) from person16 group by area_name;
    area_name | count
    -----------+-------
    mumbai    |     3
    gaon      |     3
    pune      |     4
    (3 rows)

/* 11 */ select * from person16 where person_income>350000 and area_name='mumbai';
    person_no | person_name | person_birthdate | person_income | area_name
    -----------+-------------+------------------+---------------+-----------
            7 | Abhishek    | 1997-02-06       |        450000 | mumbai
    (1 row)

/* 12 */ select * from person16 order by person_no;
    person_no | person_name | person_birthdate |   person_income    | area_name
    -----------+-------------+------------------+--------------------+-----------
            1 | Amit        | 2000-07-01       |             150000 | pune
            2 | Ajay        | 2000-08-01       |             200000 | pune
            3 | Raj         | 2000-08-23       |             250000 | pune
            4 | Rahul       | 1990-10-01       |             300000 | pune
            5 | Atul        | 1970-08-06       |             300000 | mumbai
            6 | Amitabh     | 1976-01-06       |             350000 | mumbai
            7 | Abhishek    | 1997-02-06       |             450000 | mumbai
            8 | Andy        | 1965-01-06       |             100000 | gaon
            9 | Kel         | 1965-03-15       |             110000 | gaon
            11 | Erle        | 1970-01-01       | 245555.55555555556 | gaon
    (10 rows)

/* 13 */ select * from person16 order by area_name, person_name;


    person_no | person_name | person_birthdate |   person_income    | area_name
    -----------+-------------+------------------+--------------------+-----------
            8 | Andy        | 1965-01-06       |             100000 | gaon
            11 | Erle        | 1970-01-01       | 245555.55555555556 | gaon
            9 | Kel         | 1965-03-15       |             110000 | gaon
            7 | Abhishek    | 1997-02-06       |             450000 | mumbai
            6 | Amitabh     | 1976-01-06       |             350000 | mumbai
            5 | Atul        | 1970-08-06       |             300000 | mumbai
            2 | Ajay        | 2000-08-01       |             200000 | pune
            1 | Amit        | 2000-07-01       |             150000 | pune
            4 | Rahul       | 1990-10-01       |             300000 | pune
            3 | Raj         | 2000-08-23       |             250000 | pune
    (10 rows)

/* 14 */ select min(person_income) from person16;

    min
    --------
    100000
    (1 row)

/* 15 */ update person16 set area_name='mumbai' where area_name='pune';

        postgres=# select * from person16;
    person_no | person_name | person_birthdate |   person_income    | area_name
    -----------+-------------+------------------+--------------------+-----------
            5 | Atul        | 1970-08-06       |             300000 | mumbai
            6 | Amitabh     | 1976-01-06       |             350000 | mumbai
            7 | Abhishek    | 1997-02-06       |             450000 | mumbai
            8 | Andy        | 1965-01-06       |             100000 | gaon
            9 | Kel         | 1965-03-15       |             110000 | gaon
           11 | Erle        | 1970-01-01       | 245555.55555555556 | gaon
            1 | Amit        | 2000-07-01       |             150000 | mumbai
            2 | Ajay        | 2000-08-01       |             200000 | mumbai
            3 | Raj         | 2000-08-23       |             250000 | mumbai
            4 | Rahul       | 1990-10-01       |             300000 | mumbai
    (10 rows)

/* 16 */ delete from person16 where area_name in (select area_name from area16 where area_type='urban');

    postgres=# select * from person16;
    person_no | person_name | person_birthdate |   person_income    | area_name
    -----------+-------------+------------------+--------------------+-----------
            8 | Andy        | 1965-01-06       |             100000 | gaon
            9 | Kel         | 1965-03-15       |             110000 | gaon
            11 | Erle        | 1970-01-01       | 245555.55555555556 | gaon
    (3 rows)
