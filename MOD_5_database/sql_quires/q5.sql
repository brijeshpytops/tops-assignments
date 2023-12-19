-- Get all employee details from the employee table order by First_Name Ascending and Salary descending?

mysql> SELECT *
    -> FROM employee
    -> ORDER BY First_name ASC, Salary DESC;
+-------------+------------+-----------+--------+-----------------------+------------+
| Employee_id | First_name | Last_name | Salary | Joining_date          | Department |
+-------------+------------+-----------+--------+-----------------------+------------+
|           4 | Alice      | Williams  |  70000 | 04-JAN-23 12:00:00 AM | Marketing  |
|           3 | Bob        | Johnson   |  55000 | 03-JAN-23 12:00:00 AM | Finance    |
|           5 | Charlie    | Brown     |  48000 | 05-JAN-23 12:00:00 AM | IT         |
|           6 | Eva        | Davis     |  75000 | 06-JAN-23 12:00:00 AM | Finance    |
|           7 | Frank      | Moore     |  60000 | 07-JAN-23 12:00:00 AM | Marketing  |
|           8 | Grace      | Taylor    |  52000 | 08-JAN-23 12:00:00 AM | HR         |
|           2 | Jane       | Smith     |  60000 | 02-JAN-23 12:00:00 AM | HR         |
|           1 | John       | Doe       |  50000 | 01-JAN-23 12:00:00 AM | IT         |
|           9 | Tom        | Smith     |  60000 | 01-JAN-23 12:00:00 AM | IT         |
+-------------+------------+-----------+--------+-----------------------+------------+