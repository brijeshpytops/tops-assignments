-- Get employee details from employee table whose first name contains ‘J’

mysql> SELECT *
    -> FROM employee
    -> WHERE First_name LIKE '%J%';
+-------------+------------+-----------+--------+-----------------------+------------+
| Employee_id | First_name | Last_name | Salary | Joining_date          | Department |
+-------------+------------+-----------+--------+-----------------------+------------+
|           1 | John       | Doe       |  50000 | 01-JAN-23 12:00:00 AM | IT         |
|           2 | Jane       | Smith     |  60000 | 02-JAN-23 12:00:00 AM | HR         |
+-------------+------------+-----------+--------+-----------------------+------------+