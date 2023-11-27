-- What is SQL Key Constraints writing an Example of SQL Key Constraints

-- In SQL, key constraints are rules that define how data integrity is maintained in a relational database. There are several types of key constraints, including Primary Key, Unique Key, and Foreign Key.

-- Primary Key Constraint:

-- A Primary Key uniquely identifies each record in a table. It must contain unique values and cannot have NULL values. There can be only one Primary Key in a table.

CREATE TABLE employees (
    employee_id INT PRIMARY KEY,
    first_name VARCHAR(50),
    last_name VARCHAR(50),
    hire_date DATE
);


-- In this example, the employee_id column is designated as the Primary Key for the "employees" table.

-- Unique Key Constraint:

-- A Unique Key ensures that the values in a column (or a set of columns) are unique across the table. Unlike the Primary Key, a Unique Key can allow NULL values.

CREATE TABLE departments (
    department_id INT UNIQUE,
    department_name VARCHAR(50) UNIQUE
);

-- In this example, both the department_id and department_name columns have Unique Key constraints in the "departments" table.

-- Foreign Key Constraint:

-- A Foreign Key establishes a link between two tables by referencing the Primary Key or a Unique Key of another table. It ensures referential integrity.

CREATE TABLE employees (
    employee_id INT PRIMARY KEY,
    first_name VARCHAR(50),
    last_name VARCHAR(50),
    department_id INT,
    FOREIGN KEY (department_id) REFERENCES departments(department_id)
);

-- In this example, the department_id column in the "employees" table is a Foreign Key that references the department_id column in the "departments" table. This establishes a relationship between the two tables.