-- From the following table, write a SQL query to calculate the average
-- price for a manufacturer code of 16. Return avg. 

mysql> SELECT AVG(PRO_PRICE) AS avg_price
    -> FROM item_mast
    -> WHERE PRO_COM = 16;
+------------+
| avg_price  |
+------------+
| 500.000000 |
+------------+