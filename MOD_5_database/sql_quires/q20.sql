-- From the following table, write a SQL query to select a range of
-- products whose price is in the range Rs.200 to Rs.600. Begin and end
-- values are included. Return pro_id, pro_name, pro_price, and pro_com.
-- Sample table: item_mast
-- PRO_ID PRO_NAME PRO_PRICE PRO_COM
-- ------- ------------------------- -------------- ----------
-- 101 Mother Board 3200.00 15
-- 102 Key Board 450.00 16
-- 103 ZIP drive 250.00 14
-- 104 Speaker 550.00 16
-- 105 Monitor 5000.00 11
-- 106 DVD drive 900.00 12
-- 107 CD drive 800.00 12
-- 108 Printer 2600.00 13
-- 109 Refill cartridge 350.00 13
-- 110 Mouse 250.00 12


CREATE TABLE item_mast (
    PRO_ID INT PRIMARY KEY,
    PRO_NAME VARCHAR(255),
    PRO_PRICE DECIMAL(8, 2),
    PRO_COM INT
);


mysql> INSERT INTO item_mast (PRO_ID, PRO_NAME, PRO_PRICE, PRO_COM)
    -> VALUES
    ->     (101, 'Mother Board', 3200.00, 15),
    ->     (102, 'Key Board', 450.00, 16),
    ->     (103, 'ZIP drive', 250.00, 14),
    ->     (104, 'Speaker', 550.00, 16),
    ->     (105, 'Monitor', 5000.00, 11),
    ->     (106, 'DVD drive', 900.00, 12),
    ->     (107, 'CD drive', 800.00, 12),
    ->     (108, 'Printer', 2600.00, 13),
    ->     (109, 'Refill cartridge', 350.00, 13),
    ->     (110, 'Mouse', 250.00, 12);
Query OK, 10 rows affected (0.01 sec)
Records: 10  Duplicates: 0  Warnings: 0


mysql> SELECT PRO_ID, PRO_NAME, PRO_PRICE, PRO_COM
    -> FROM item_mast
    -> WHERE PRO_PRICE BETWEEN 200.00 AND 600.00;
+--------+------------------+-----------+---------+
| PRO_ID | PRO_NAME         | PRO_PRICE | PRO_COM |
+--------+------------------+-----------+---------+
|    102 | Key Board        |    450.00 |      16 |
|    103 | ZIP drive        |    250.00 |      14 |
|    104 | Speaker          |    550.00 |      16 |
|    109 | Refill cartridge |    350.00 |      13 |
|    110 | Mouse            |    250.00 |      12 |
+--------+------------------+-----------+---------+