-- Get department wise maximum salary from employee table order by salaryascending?

mysql> SELECT Department, MAX(Salary) AS Max_Salary
    -> FROM employee
    -> GROUP BY Department
    -> ORDER BY Max_Salary ASC;
+------------+------------+
| Department | Max_Salary |
+------------+------------+
| IT         |      60000 |
| HR         |      60000 |
| Marketing  |      70000 |
| Finance    |      75000 |
+------------+------------+