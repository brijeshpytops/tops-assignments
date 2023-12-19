-- Names and cities of all salespeople in London with commission above 0.12


INSERT INTO Salesperson (SNo, SNAME, CITY, COMM)
VALUES (1, 'John Doe', 'New York', 0.05),
       (2, 'Jane Smith', 'London', 0.15),
       (3, 'Bob Johnson', 'Chicago', 0.1),
       (4, 'Alice Brown', 'London', 0.14),
       (5, 'Charlie White', 'London', 0.13);


mysql> SELECT SNAME AS Salesperson_Name, CITY
    -> FROM Salesperson
    -> WHERE CITY = 'London' AND COMM > 0.12;
+------------------+--------+
| Salesperson_Name | CITY   |
+------------------+--------+
| Jane Smith       | London |
| Alice Brown      | London |
| Charlie White    | London |
+------------------+--------+