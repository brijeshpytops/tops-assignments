-- All customers excluding those with rating <= 100 unless they are located
-- inRome



INSERT INTO Customer (CNm, CNAME, CITY, RATING, SNo)
VALUES (1011, 'ABC Corp', 'New York', 90, 1),
       (1012, 'XYZ Inc', 'Rome', 120, 2),
       (1013, 'LMN Ltd', 'London', 95, 3),
       (1014, 'PQR Ltd', 'Rome', 80, 1),
       (1015, 'EFG Corp', 'Barcelona', 110, 2);


mysql> SELECT CNAME AS Customer_Name, CITY, RATING
    -> FROM Customer
    -> WHERE (RATING > 100 OR CITY = 'Rome') AND RATING > 0;
+---------------+-----------+--------+
| Customer_Name | CITY      | RATING |
+---------------+-----------+--------+
| XYZ Inc       | Rome      |    120 |
| PQR Ltd       | Rome      |     80 |
| EFG Corp      | Barcelona |    110 |
+---------------+-----------+--------+