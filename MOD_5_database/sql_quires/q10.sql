-- Create After Insert trigger on Employee table which insert records in
-- viewtable


mysql> CREATE TABLE viewtable (
    ->     Employee_id INT,
    ->     First_name VARCHAR(255),
    ->     Last_name VARCHAR(255),
    ->     Salary INT,
    ->     Joining_date VARCHAR(255),
    ->     Department VARCHAR(255)
    -> );
Query OK, 0 rows affected (0.02 sec)


mysql> DELIMITER //
mysql> CREATE TRIGGER after_employee_insert
    -> AFTER INSERT
    -> ON employee FOR EACH ROW
    -> BEGIN
    ->     INSERT INTO viewtable (Employee_id, First_name, Last_name, Salary, Joining_date, Department)
    ->     VALUES (NEW.Employee_id, NEW.First_name, NEW.Last_name, NEW.Salary, NEW.Joining_date, NEW.Department);
    -> END;
    -> //
Query OK, 0 rows affected (0.01 sec)