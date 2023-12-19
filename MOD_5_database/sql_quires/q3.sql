-- Get First_Name from employee table using Tom name “Employee Name”.

mysql> SELECT First_name AS 'Employee Name'
    -> FROM employee
    -> WHERE First_name = 'Tom';
+---------------+
| Employee Name |
+---------------+
| Tom           |
+---------------+