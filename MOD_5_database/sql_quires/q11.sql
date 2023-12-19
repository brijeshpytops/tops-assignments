-- Create table given below: Salesperson and Customer

CREATE TABLE salesperson (
    SNo INT PRIMARY KEY,
    SNAME VARCHAR(255),
    CITY VARCHAR(255),
    COMM DECIMAL(10, 2)
);


mysql> INSERT INTO Salesperson (SNo, SNAME, CITY, COMM)
    -> VALUES (1, 'John Doe', 'New York', 0.05),
    ->        (2, 'Jane Smith', 'Los Angeles', 0.08),
    ->        (3, 'Bob Johnson', 'Chicago', 0.1);



CREATE TABLE Customer (
    CNm INT PRIMARY KEY,
    CNAME VARCHAR(255),
    CITY VARCHAR(255),
    RATING INT,
    SNo INT,
    FOREIGN KEY (SNo) REFERENCES Salesperson(SNo)
);


mysql> INSERT INTO Customer (CNm, CNAME, CITY, RATING, SNo)
    -> VALUES (101, 'ABC Corp', 'New York', 4, 1),
    ->        (102, 'XYZ Inc', 'Los Angeles', 5, 2),
    ->        (103, 'LMN Ltd', 'Chicago', 3, 3);
