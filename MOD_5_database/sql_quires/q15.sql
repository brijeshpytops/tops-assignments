-- All salespeople either in Barcelona or in London

INSERT INTO Salesperson (SNo, SNAME, CITY, COMM)
VALUES (9, 'John Doe', 'New York', 0.05),
       (10, 'Jane Smith', 'London', 0.15),
       (11, 'Bob Johnson', 'Chicago', 0.1),
       (12, 'Alice Brown', 'London', 0.14),
       (13, 'Charlie White', 'Barcelona', 0.13);


mysql> SELECT SNAME AS Salesperson_Name, CITY
    -> FROM Salesperson
    -> WHERE CITY IN ('Barcelona', 'London');
+------------------+-----------+
| Salesperson_Name | CITY      |
+------------------+-----------+
| Jane Smith       | London    |
| Alice Brown      | London    |
| Charlie White    | London    |
| Jane Smith       | London    |
| Alice Brown      | London    |
| Charlie White    | Barcelona |
+------------------+-----------+