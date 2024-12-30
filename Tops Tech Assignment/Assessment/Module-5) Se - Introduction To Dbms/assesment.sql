mysql> show tables;
+---------------------+
| Tables_in_assesment |
+---------------------+
| account_holder      |
| bank                |
| loan_table          |
+---------------------+
3 rows in set (0.07 sec)

mysql> select * from account_holder;
+-------------------+------------+---------------------+---------------------+------------+------------------+----------------+--------------+-----------------+
| Account_Holder_ID | Account_No | Account_Holder_Name | Account_Holder_City | Contact_No | Date_of_creation | Acoount_Status | Account_Type | Account_Balance |
+-------------------+------------+---------------------+---------------------+------------+------------------+----------------+--------------+-----------------+
|               101 |        786 | ZAFF                | Bombay              | 9812345786 | 2021-01-01       | Active         | Current      |       112233.00 |
|               102 |        236 | Misba               | Surat               | 9812345678 | 2022-02-11       | Active         | Current      |        12333.00 |
|               103 |        216 | Khadiza             | Ahmedabad           | 9867845865 | 2023-03-16       | Active         | Saving       |        22333.00 |
|               104 |        252 | Ankit               | Ahmedabad           | 9866587651 | 2022-05-11       | Active         | Saving       |        92333.00 |
|               105 |        224 | Mak                 | Surat               | 9822345678 | 2023-07-18       | In_Active      | Saving       |         2333.00 |
+-------------------+------------+---------------------+---------------------+------------+------------------+----------------+--------------+-----------------+
5 rows in set (0.09 sec)

mysql> select * from bank;
+-----------+---------------+-------------+
| Branch_id | Branch_Name   | Branch_City |
+-----------+---------------+-------------+
|         1 | Adajan Patiya | Surat       |
|         2 | Rander        | Surat       |
|         3 | Maninagar     | Ahmedabad   |
|         4 | Bandra        | Bombay      |
|         5 | Kurla         | Bombay      |
+-----------+---------------+-------------+
5 rows in set (0.01 sec)

mysql> select * from loan_table;
+---------+-----------+-------------------+-------------+-----------+
| Loan_No | Branch_ID | Account_Holder_ID | Loan_Amount | Loan_Type |
+---------+-----------+-------------------+-------------+-----------+
|    1011 |         1 |               101 |   786111.00 | Personal  |
|    1012 |         2 |               102 |     7111.00 | Business  |
|    1013 |         2 |               103 |   233411.00 | Business  |
|    1014 |         3 |               104 |   734611.00 | Personal  |
|    1015 |         4 |               105 |     3411.00 | Personal  |
+---------+-----------+-------------------+-------------+-----------+
5 rows in set (0.01 sec)


mysql> UPDATE account_holder SET Account_Balance = Account_Balance - 100 WHERE Account_No = 786;
Query OK, 1 row affected (0.25 sec)

mysql> select * from account_holder;
+-------------------+------------+---------------------+---------------------+------------+------------------+----------------+--------------+-----------------+
| Account_Holder_ID | Account_No | Account_Holder_Name | Account_Holder_City | Contact_No | Date_of_creation | Acoount_Status | Account_Type | Account_Balance |
+-------------------+------------+---------------------+---------------------+------------+------------------+----------------+--------------+-----------------+
|               101 |        786 | ZAFF                | Bombay              | 9812345786 | 2021-01-01       | Active         | Current      |       112133.00 |
|               102 |        236 | Misba               | Surat               | 9812345678 | 2022-02-11       | Active         | Current      |        12333.00 |
|               103 |        216 | Khadiza             | Ahmedabad           | 9867845865 | 2023-03-16       | Active         | Saving       |        22333.00 |
|               104 |        252 | Ankit               | Ahmedabad           | 9866587651 | 2022-05-11       | Active         | Saving       |        92333.00 |
|               105 |        224 | Mak                 | Surat               | 9822345678 | 2023-07-18       | In_Active      | Saving       |         2333.00 |
+-------------------+------------+---------------------+---------------------+------------+------------------+----------------+--------------+-----------------+
5 rows in set (0.03 sec)


mysql> UPDATE account_holder SET Account_Balance = Account_Balance + 100 WHERE Account_No = 236;
Query OK, 1 row affected (0.04 sec)

mysql> select * from account_holder;
+-------------------+------------+---------------------+---------------------+------------+------------------+----------------+--------------+-----------------+
| Account_Holder_ID | Account_No | Account_Holder_Name | Account_Holder_City | Contact_No | Date_of_creation | Acoount_Status | Account_Type | Account_Balance |
+-------------------+------------+---------------------+---------------------+------------+------------------+----------------+--------------+-----------------+
|               101 |        786 | ZAFF                | Bombay              | 9812345786 | 2021-01-01       | Active         | Current      |       112133.00 |
|               102 |        236 | Misba               | Surat               | 9812345678 | 2022-02-11       | Active         | Current      |        12433.00 |
|               103 |        216 | Khadiza             | Ahmedabad           | 9867845865 | 2023-03-16       | Active         | Saving       |        22333.00 |
|               104 |        252 | Ankit               | Ahmedabad           | 9866587651 | 2022-05-11       | Active         | Saving       |        92333.00 |
|               105 |        224 | Mak                 | Surat               | 9822345678 | 2023-07-18       | In_Active      | Saving       |         2333.00 |
+-------------------+------------+---------------------+---------------------+------------+------------------+----------------+--------------+-----------------+
5 rows in set (0.00 sec)



Question 2 : ● Also fetch the details of the account holder who are related from the same city  

Ans : 
SELECT ah1.Account_Holder_ID AS Account_Holder_1_ID, ah1.Account_Holder_Name AS Account_Holder_1_Name, ah2.Account_Holder_ID AS Account_Holder_2_ID, ah2.Account_Holder_Name AS Account_Holder_2_Name, ah1.Account_Holder_City AS City
FROM account_holder ah1 JOIN account_holder ah2 ON ah1.Account_Holder_City = ah2.Account_Holder_City AND ah1.Account_Holder_ID < ah2.Account_Holder_ID;
+---------------------+-----------------------+---------------------+-----------------------+-----------+
| Account_Holder_1_ID | Account_Holder_1_Name | Account_Holder_2_ID | Account_Holder_2_Name | City      |
+---------------------+-----------------------+---------------------+-----------------------+-----------+
|                 102 | Misba                 |                 105 | Mak                   | Surat     |
|                 103 | Khadiza               |                 104 | Ankit                 | Ahmedabad |
+---------------------+-----------------------+---------------------+-----------------------+-----------+
2 rows in set (0.10 sec)



Question 3 : Write a query to fetch account number and account holder name, whose accounts were created after 15th of any month

Ans: 
mysql> SELECT Account_No, Account_Holder_Name FROM account_holder WHERE DAY(Date_of_creation) > 15;
+------------+---------------------+
| Account_No | Account_Holder_Name |
+------------+---------------------+
|        216 | Khadiza             |
|        224 | Mak                 |
+------------+---------------------+
2 rows in set (0.02 sec)


Question 4: ● Write a query to display the city name and count the branches in that city. Give the count of branches an alias name of Count_Branch. 

Ans:
mysql> SELECT Branch_City, COUNT(Branch_id) AS Count_Branch FROM bank GROUP BY Branch_City;
+-------------+--------------+
| Branch_City | Count_Branch |
+-------------+--------------+
| Surat       |            2 |
| Ahmedabad   |            1 |
| Bombay      |            2 |
+-------------+--------------+
3 rows in set (0.05 sec)

Question5: Write a query to display the account holder’s id, account holder’s name, branch id, and loan amount for people who have taken loans. (NOTE : use sql  join concept to solve the query) 


Ans:
mysql> SELECT ah.Account_Holder_ID, ah.Account_Holder_Name, lt.Branch_ID, lt.Loan_Amount FROM account_holder ah JOIN loan_table lt ON ah.Account_Holder_ID = lt.Account_Holder_ID;
+-------------------+---------------------+-----------+-------------+
| Account_Holder_ID | Account_Holder_Name | Branch_ID | Loan_Amount |
+-------------------+---------------------+-----------+-------------+
|               101 | ZAFF                |         1 |   786111.00 |
|               102 | Misba               |         2 |     7111.00 |
|               103 | Khadiza             |         2 |   233411.00 |
|               104 | Ankit               |         3 |   734611.00 |
|               105 | Mak                 |         4 |     3411.00 |
+-------------------+---------------------+-----------+-------------+
5 rows in set (0.00 sec)