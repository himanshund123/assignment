create database info;
use info;
create  table  information(firstname varchar(30),lastname varchar(30),address varchar(30),city varchar(20),age int);

insert into information values
('mickey','mouse','123 fantasy way','anaheim',73),
('bat','man','321 caven ave','gotham',54),
('wonder','woman','987 truth way','paradise',39),
('donald','duck','555 quack street','mallard',65),
('bugs','bunny','567 carfrot street','rascal',58),
('wiley','coyote','999 acme way','canyon',61),
('cat','woman','234 purfect strret','hairball',32),
('tweety','bird','543','iyotlaw',28);

use info;
create table Employee (employee_id int, first_name varchar(20),last_name varchar(25),salary int, joining_date datetime,department varchar(25));
insert into Employee values
(1,'john','abraham',1000000,'2013-01-01 12:00:00','banking'),
(2,'michael','clarke',800000,'2013-01-01 12:00:00','insurance'),
(3,'roy','thomas',700000,'2013-02-01 12:00:00','banking'),
(4,'tom','jose',600000,'2013-02-01 12:00:00','insurance'),
(5,'jerry','pinto',650000,'2013-02-01 12:00:00','insurance'),
(6,'philip','mathew',750000,'2013-01-01 12:00:00','service'),
(7,'testname1','123',650000,'2013-01-01 12:00:00','service'),
(8,'testname2','lname%',600000,'2013-02-01 12:00:00','insurance');

create table Incentive(Employee_ref_id int,Incentive_date date,Incentive_amount int);
insert into Incentive values
(1,'2013-02-01',5000),
(2,'2013-02-01',3000),
(3,'2013-02-01',4000),
(1,'2013-01-01',4500),
(2,'2013-01-01',3500);

select*from Employee;
select *from Incentive;

drop table Employee;
create table Employee (employee_id int, first_name varchar(20),last_name varchar(25),salary int, joining_date datetime,department varchar(25));
insert into Employee values
(1,'john','abraham',1000000,'2013-01-01 12:00:00','banking'),
(2,'michael','clarke',800000,'2013-01-01 12:00:00','insurance'),
(3,'roy','thomas',700000,'2013-02-01 12:00:00','banking'),
(4,'tom','jose',600000,'2013-02-01 12:00:00','insurance'),
(5,'jerry','pinto',650000,'2013-02-01 12:00:00','insurance'),
(6,'philip','mathew',750000,'2013-01-01 12:00:00','service'),
(7,'testname1','123',650000,'2013-01-01 12:00:00','service'),
(8,'testname2','lname%',600000,'2013-02-01 12:00:00','insurance');
select *from Employee;

select * from Employee where first_name='tom';

select First_name,joining_date,salary from Employee;
select *from Employee order by First_name asc;
select *from Employee order by salary desc;
select *from Employee where first_name like 'j%';
select department,salary from Employee order by salary asc;

alter table Employee 
add primary key (employee_id);

alter table Incentive
add foreign key (Employee_ref_id) references Employee(employee_id);

