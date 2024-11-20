SELECT * FROM mysql_demo.customer;

delimiter //
create function birth_y(age int) returns int deterministic
begin
declare curr_dt date;
select curdate() into curr_dt;
return year(curr_dt)-age;
end //
delimiter ;

-- CALLING FUNCTION
select cid,name,mobile_no,age,birth_y(age),city from customer;


-- PROCEDURE WITH NO PARAMETER
delimiter $$
create procedure p1()
begin
select * from customer where age > 33;
end$$
delimiter ;

-- call procedure
call p1();

-- to drop procedure as name can be used one time only
drop procedure p1;

-- procedure with in parameter
delimiter $$
create procedure p2(in ag int)
begin
 select * from customer where age=ag;
end $$
delimiter ;

call p2(32);

drop procedure p2;

-- procedure with in and out parameter
delimiter $$
create procedure p3(in id int, out c_name varchar(20)) 
begin
select name into c_name from customer where cid=id;
end $$
delimiter ;

call p3(3,@name);
select @name as customer_name;

delimiter $$
create procedure name_asc()
begin
select * from customer order by name asc;
end $$
delimiter ;

call name_asc();

-- procedure with inout parameter
delimiter $$
create procedure p4(inout id int)
begin
select amount into id from payment where payid=id;
end $$
delimiter ;

set @id=3;
call p4(@id);
select @id as amount;

-- trigger for insert
delimiter $$
create trigger t1 before insert on customer from each row
begin
	insert into customer (20)
end $$
delimiter ;


select Count(cid) ,city,age
from customer group by city,age
having city='surat';

create view view_1 as 
select city,age
from customer
where city='surat';

create OR REPLACE VIEW view_1 AS
select city,mobile_no
from customer
where city='surat';
