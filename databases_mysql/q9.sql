-- What is save Point? How to create a save Point write a Query? 

-- In SQL, a savepoint is a point in a transaction to which you can later roll back. Savepoints are useful in situations where you want to create intermediate points within a transaction, allowing you to roll back to a specific point without affecting the entire transaction.

-- Here's how you can create a savepoint using the SAVEPOINT statement:

SAVEPOINT savepoint_name;

-- Let's break down the syntax:

-- SAVEPOINT: This is the keyword used to create a savepoint.
-- savepoint_name: You provide a name for the savepoint. This name should be unique within the scope of the transaction.

-- Here's an example demonstrating the use of savepoints in a transaction:
-- Start a transaction
BEGIN TRANSACTION;

-- Insert some data
INSERT INTO employees (employee_id, first_name, last_name, department_id)
VALUES (1, 'John', 'Doe', 101);

-- Create a savepoint
SAVEPOINT my_savepoint;

-- Insert more data
INSERT INTO employees (employee_id, first_name, last_name, department_id)
VALUES (2, 'Jane', 'Smith', 102);

-- If an error occurs, roll back to the savepoint
-- ROLLBACK TO my_savepoint;

-- Alternatively, you can commit the transaction
-- COMMIT;
