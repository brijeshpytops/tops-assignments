-- .Retrieve the below data from above table

mysql> select * from Salesperson;
+-----+-------------+-------------+------+
| SNo | SNAME       | CITY        | COMM |
+-----+-------------+-------------+------+
|   1 | John Doe    | New York    | 0.05 |
|   2 | Jane Smith  | Los Angeles | 0.08 |
|   3 | Bob Johnson | Chicago     | 0.10 |
+-----+-------------+-------------+------+



mysql> select * from Customer;
+-----+----------+-------------+--------+------+
| CNm | CNAME    | CITY        | RATING | SNo  |
+-----+----------+-------------+--------+------+
| 101 | ABC Corp | New York    |      4 |    1 |
| 102 | XYZ Inc  | Los Angeles |      5 |    2 |
| 103 | LMN Ltd  | Chicago     |      3 |    3 |
+-----+----------+-------------+--------+------+