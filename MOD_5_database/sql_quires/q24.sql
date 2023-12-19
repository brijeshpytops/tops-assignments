-- From the following table, write a SQL query to calculate average
-- price of the items for each company. Return average price and company
-- code.



mysql> SELECT pro_com AS company_code, AVG(pro_price) AS average_price
    -> FROM item_mast
    -> GROUP BY pro_com;
+--------------+---------------+
| company_code | average_price |
+--------------+---------------+
|           15 |   3200.000000 |
|           16 |    500.000000 |
|           14 |    250.000000 |
|           11 |   5000.000000 |
|           12 |    650.000000 |
|           13 |   1475.000000 |
+--------------+---------------+