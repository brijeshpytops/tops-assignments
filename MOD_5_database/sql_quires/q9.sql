-- Select first_name, incentive amount from employee and incentives table
-- forthose employees who have incentives and incentive amount greater than
-- 3000

mysql> SELECT e.First_name, i.Incentive_amount
    -> FROM employee e
    -> JOIN Incentive i ON e.Employee_id = i.Employee_ref_id
    -> WHERE i.Incentive_amount > 3000;
+------------+------------------+
| First_name | Incentive_amount |
+------------+------------------+
| John       |          4000.00 |
| Jane       |          3500.00 |
| Bob        |          5000.00 |
+------------+------------------+