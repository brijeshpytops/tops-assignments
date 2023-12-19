-- All salespeople with commission between 0.10 and 0.12. (Boundary
-- valuesshould be excluded).

INSERT INTO Salesperson (SNo, SNAME, CITY, COMM)
VALUES (14, 'John Doe', 'New York', 0.05),
       (15, 'Jane Smith', 'London', 0.12),
       (16, 'Bob Johnson', 'Chicago', 0.1),
       (17, 'Alice Brown', 'London', 0.11),
       (18, 'Charlie White', 'Barcelona', 0.13);

mysql> SELECT SNAME AS Salesperson_Name, CITY, COMM
    -> FROM Salesperson
    -> WHERE COMM > 0.10 AND COMM < 0.12;
+------------------+--------+------+
| Salesperson_Name | CITY   | COMM |
+------------------+--------+------+
| Alice Brown      | London | 0.11 |
+------------------+--------+------+