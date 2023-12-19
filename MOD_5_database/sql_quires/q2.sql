Create table given below: Employee and IncentiveTable

create table employee(Employee_id int auto_increment primary key, First_name varchar(255), Last_name varchar(255), Salary int, Joining_date varchar(255), Department varchar(255));

INSERT INTO employee (First_name, Last_name, Salary, Joining_date, Department)
VALUES
    ('John', 'Doe', 50000, '01-JAN-23 12:00:00 AM', 'IT'),
    ('Jane', 'Smith', 60000, '02-JAN-23 12:00:00 AM', 'HR'),
    ('Bob', 'Johnson', 55000, '03-JAN-23 12:00:00 AM', 'Finance'),
    ('Alice', 'Williams', 70000, '04-JAN-23 12:00:00 AM', 'Marketing'),
    ('Charlie', 'Brown', 48000, '05-JAN-23 12:00:00 AM', 'IT'),
    ('Eva', 'Davis', 75000, '06-JAN-23 12:00:00 AM', 'Finance'),
    ('Frank', 'Moore', 60000, '07-JAN-23 12:00:00 AM', 'Marketing'),
    ('Grace', 'Taylor', 52000, '08-JAN-23 12:00:00 AM', 'HR'),
    ('Tom', 'Smith', 60000, '01-JAN-23 12:00:00 AM', 'IT')
    ('John', 'Doe', 50000, '01-JAN-23 12:00:00 AM', 'IT'),
    ('Jane', 'Smith', 60000, '02-JAN-23 12:00:00 AM', 'HR'),
    ('Bob', 'Johnson', 55000, '03-JAN-23 12:00:00 AM', 'Finance');


mysql> select * from employee;
+-------------+------------+-----------+--------+-----------------------+------------+
| Employee_id | First_name | Last_name | Salary | Joining_date          | Department |
+-------------+------------+-----------+--------+-----------------------+------------+
|           1 | John       | Doe       |  50000 | 01-JAN-23 12:00:00 AM | IT         |
|           2 | Jane       | Smith     |  60000 | 02-JAN-23 12:00:00 AM | HR         |
|           3 | Bob        | Johnson   |  55000 | 03-JAN-23 12:00:00 AM | Finance    |
|           4 | Alice      | Williams  |  70000 | 04-JAN-23 12:00:00 AM | Marketing  |
|           5 | Charlie    | Brown     |  48000 | 05-JAN-23 12:00:00 AM | IT         |
|           6 | Eva        | Davis     |  75000 | 06-JAN-23 12:00:00 AM | Finance    |
|           7 | Frank      | Moore     |  60000 | 07-JAN-23 12:00:00 AM | Marketing  |
|           8 | Grace      | Taylor    |  52000 | 08-JAN-23 12:00:00 AM | HR         |
|           9 | Tom        | Smith     |  60000 | 01-JAN-23 12:00:00 AM | IT         |
|          10 | John       | Doe       |  50000 | 01-JAN-23 12:00:00 AM | IT         |
|          11 | Jane       | Smith     |  60000 | 02-JAN-23 12:00:00 AM | HR         |
|          12 | Bob        | Johnson   |  55000 | 03-JAN-23 12:00:00 AM | Finance    |
+-------------+------------+-----------+--------+-----------------------+------------+


mysql> CREATE TABLE Incentive (
    ->     Incentive_id INT AUTO_INCREMENT PRIMARY KEY,
    ->     Employee_ref_id INT,
    ->     Incentive_date VARCHAR(10), 
    ->     Incentive_amount DECIMAL(10, 2),
    ->     FOREIGN KEY (Employee_ref_id) REFERENCES employee(Employee_id)
    -> );


INSERT INTO Incentive (Employee_ref_id, Incentive_date, Incentive_amount)
VALUES
    (1, '01-JAN-22', 500.00),
    (2, '02-JAN-22', 600.00),
    (3, '03-JAN-22', 450.00),
    (4, '04-JAN-22', 700.00),
    (5, '05-JAN-22', 550.00),
    (6, '06-JAN-22', 800.00),
    (7, '07-JAN-22', 700.00),
    (8, '08-JAN-22', 600.00),
    (1, '01-JAN-23', 4000.00),
    (2, '02-JAN-23', 3500.00),
    (3, '03-JAN-23', 5000.00);

mysql>  select * from Incentive;
+--------------+-----------------+----------------+------------------+
| Incentive_id | Employee_ref_id | Incentive_date | Incentive_amount |
+--------------+-----------------+----------------+------------------+
|            1 |               1 | 01-JAN-22      |           500.00 |
|            2 |               2 | 02-JAN-22      |           600.00 |
|            3 |               3 | 03-JAN-22      |           450.00 |
|            4 |               4 | 04-JAN-22      |           700.00 |
|            5 |               5 | 05-JAN-22      |           550.00 |
|            6 |               6 | 06-JAN-22      |           800.00 |
|            7 |               7 | 07-JAN-22      |           700.00 |
|            8 |               8 | 08-JAN-22      |           600.00 |
|            9 |               1 | 01-JAN-23      |          4000.00 |
|           10 |               2 | 02-JAN-23      |          3500.00 |
|           11 |               3 | 03-JAN-23      |          5000.00 |
+--------------+-----------------+----------------+------------------+