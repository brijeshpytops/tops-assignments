-- 18. Write a SQL statement that displays all the information about all
-- salespeople
-- salesman_id | name | city | commission
-- -------------+------------+----------+------------
-- 5001 | James Hoog | New York | 0.15
-- 5002 | Nail Knite | Paris | 0.13
-- 5005 | Pit Alex | London | 0.11
-- 5006 | Mc Lyon | Paris | 0.14
-- 5007 | Paul Adam | Rome | 0.13
-- 5003 | Lauson Hen | San Jose | 0.12


mysql> CREATE TABLE salespeople (
    ->     salesman_id INT PRIMARY KEY,
    ->     name VARCHAR(255),
    ->     city VARCHAR(255),
    ->     commission DECIMAL(4, 2)
    -> );

mysql> INSERT INTO salespeople (salesman_id, name, city, commission)
    -> VALUES
    ->     (5001, 'James Hoog', 'New York', 0.15),
    ->     (5002, 'Nail Knite', 'Paris', 0.13),
    ->     (5005, 'Pit Alex', 'London', 0.11),
    ->     (5006, 'Mc Lyon', 'Paris', 0.14),
    ->     (5007, 'Paul Adam', 'Rome', 0.13),
    ->     (5003, 'Lauson Hen', 'San Jose', 0.12);


mysql> SELECT * FROM salespeople;
+-------------+------------+----------+------------+
| salesman_id | name       | city     | commission |
+-------------+------------+----------+------------+
|        5001 | James Hoog | New York |       0.15 |
|        5002 | Nail Knite | Paris    |       0.13 |
|        5003 | Lauson Hen | San Jose |       0.12 |
|        5005 | Pit Alex   | London   |       0.11 |
|        5006 | Mc Lyon    | Paris    |       0.14 |
|        5007 | Paul Adam  | Rome     |       0.13 |
+-------------+------------+----------+------------+