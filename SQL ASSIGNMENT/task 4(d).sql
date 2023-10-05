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

select e.first_name,i.incentive_amount
from Incentive as i 
inner join Employee as e
on e.employee_id=i.Employee_ref_id
where incentive_amount>3000;

use info;

create database assesment;
use assesment;
create table customer(customer_id int, cust_name varchar(40),city varchar(30),grade int,salesman_id int );
insert into customer values
(3002,'nick rimando','new york',100,5001),
(3007,'brad davis','new york',200,5001),
(3005,'Graham zusi','california',200,5002),
(3008,'julian green','london',300,5002),
(3004,'Fabian johnson','paris',300,5006),
(3009,'geoff cameron','berlin',100,5003),
(3003,'jozy altidor','moscow',200,5007),
(3001,'brad guzan','london',null,5001);

select*from customer;
CREATE TABLE salesman (salesman_id int,
name varchar(50),city varchar(50),commission float);

insert into salesman values
(5001,'jameshong','newyork',0.15),
(5002,"nail knite",'paris',0.13),
(5005,"pit alex",'london',0.11),
(5006,"mc lyon",'paris',0.14),
(5007,"paul adam",'rome',0.13),
(5003,"lauson hen ","san jose",0.12);
select*from salesman;

alter table salesman
add primary key (salesman_id);

alter table customer
add foreign key (salesman_id) references salesman(salesman_id);

select c.cust_name,c.city,s.name,s.commission
from customer as c
inner join salesman as s
on c.salesman_id=s.salesman_id
order by c.cust_name;

use info;
create table salesperson(sno int,sname varchar(30),city varchar(30),comm float);
insert into salesperson values
(1001,'peel','london',0.12),
(1002,'serres','san jose',0.13),
(1004,'motika','london',0.11),
(1007,'rafkin','barcelona',0.15),
(1003,'axelord','new york',0.1);

create table customer(cnm int,cname varchar(30),city varchar(30),rating int,sno int);
insert into customer values
(201,'holfman','london',100,1001),
(202,'givanne','roe',200,1003),
(203,'liu','san jose',300,1002),
(204,'grass','barcelona',100,1002),
(206,'clemens','london',300,1007),
(207,'pereira','roe',100,1004);

alter table salesperson
add primary key (sno);
alter table customer
add primary key (cnm);

alter table customer
add foreign key (sno) references salesperson(sno);

select*from customer where rating>100;

select sname,city
from salesperson
where city='london' and comm>0.12;

select *from salesperson
where city='london' or city ='barcelona';

select*from salesperson
where comm>0.10 and comm<0.12;

select*from customer
where rating<=100 or city='roe';