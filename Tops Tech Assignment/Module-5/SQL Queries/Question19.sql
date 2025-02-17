19. From the following table, write a SQL query to find orders that are
delivered by a salesperson with ID. 5001. Return ord_no, ord_date,
purch_amt. 


 mysql> create table orders (ord_no int, purch_amt decimal (6,2), ord_date date,customer_id int,salesman_id int);
 mysql> describe orders;
+-------------+--------------+------+-----+---------+-------+
| Field       | Type         | Null | Key | Default | Extra |
+-------------+--------------+------+-----+---------+-------+
| ord_no      | int          | YES  |     | NULL    |       |
| purch_amt   | decimal(6,2) | YES  |     | NULL    |       |
| ord_date    | date         | YES  |     | NULL    |       |
| customer_id | int          | YES  |     | NULL    |       |
| salesman_id | int          | YES  |     | NULL    |       |
+-------------+--------------+------+-----+---------+-------+

mysql> insert into orders values (70001, 150.5, "2012-10-05", 3005, 5002);
mysql> insert into orders values (70009, 270.65, "2012-09-10", 3001, 5005),(70002, 65.26, "2012-10-05", 3002, 5001),(70004, 110.5, "2012-08-17", 3009, 5003);
mysql> insert into orders values (70007, 948.5, "2012-09-10", 3005, 5002),(70005, 2400.6, "2012-07-27", 3007, 5001),(70008, 5760, "2012-09-10", 3002, 5001),(70010, 1983.43, "2012-10-10", 3004, 5006);
mysql> insert into orders values (70003, 2480.4, "2012-10-10", 3009, 5003),(70012, 250.45, "2012-06-27", 3008, 5002),(70011, 75.29, "2012-08-17", 3003, 5007),(70013, 3045.6, "2012-04-25", 3002, 5001);
mysql> select * from orders;
+--------+-----------+------------+-------------+-------------+
| ord_no | purch_amt | ord_date   | customer_id | salesman_id |
+--------+-----------+------------+-------------+-------------+
|  70001 |    150.50 | 2012-10-05 |        3005 |        5002 |
|  70009 |    270.65 | 2012-09-10 |        3001 |        5005 |
|  70002 |     65.26 | 2012-10-05 |        3002 |        5001 |
|  70004 |    110.50 | 2012-08-17 |        3009 |        5003 |
|  70007 |    948.50 | 2012-09-10 |        3005 |        5002 |
|  70005 |   2400.60 | 2012-07-27 |        3007 |        5001 |
|  70008 |   5760.00 | 2012-09-10 |        3002 |        5001 |
|  70010 |   1983.43 | 2012-10-10 |        3004 |        5006 |
|  70003 |   2480.40 | 2012-10-10 |        3009 |        5003 |
|  70012 |    250.45 | 2012-06-27 |        3008 |        5002 |
|  70011 |     75.29 | 2012-08-17 |        3003 |        5007 |
|  70013 |   3045.60 | 2012-04-25 |        3002 |        5001 |
+--------+-----------+------------+-------------+-------------+



write a SQL query to find orders that are
delivered by a salesperson with ID. 5001. Return ord_no, ord_date,
purch_amt. 

Answer :   SELECT ord_no, ord_date, purch_amt
    -> FROM orders
    -> WHERE salesman_id = 5001;
+--------+------------+-----------+
| ord_no | ord_date   | purch_amt |
+--------+------------+-----------+
|  70002 | 2012-10-05 |        65 |
|  70005 | 2012-07-27 |      2401 |
|  70008 | 2012-09-10 |      5760 |
+--------+------------+-----------+
3 rows in set (0.00 sec)


