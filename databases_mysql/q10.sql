-- What is trigger and how to create a Trigger in SQL?

-- In SQL, a trigger is a set of instructions that are automatically executed (or "triggered") in response to specific events on a particular table or view. Triggers are used to enforce business rules, perform automatic actions, or maintain data integrity within a database. There are two main types of triggers: BEFORE triggers and AFTER triggers.

-- Here is a basic overview of triggers and how to create one in SQL:

-- Creating a Trigger:
-- The syntax for creating a trigger typically looks like this:

CREATE [OR REPLACE] TRIGGER trigger_name
{BEFORE | AFTER} {INSERT | UPDATE | DELETE}
ON table_name
[FOR EACH ROW]
DECLARE
   -- Declaration section (optional)
BEGIN
   -- Trigger logic
END;


-- CREATE [OR REPLACE] TRIGGER: This statement is used to create a new trigger or replace an existing one.

-- trigger_name: This is the name of the trigger.

-- {BEFORE | AFTER}: Specifies whether the trigger should be executed before or after the triggering event.

-- {INSERT | UPDATE | DELETE}: Specifies the event that triggers the execution of the trigger.

-- ON table_name: Specifies the table on which the trigger is defined.

-- [FOR EACH ROW]: Indicates that the trigger should be fired once for each affected row.

-- DECLARE: This optional section is used for declaring local variables.

-- BEGIN and END: This is the body of the trigger where you define the logic that should be executed when the trigger is triggered.

-- Example of a Trigger:
-- Let's create a simple BEFORE INSERT trigger that automatically sets the hire date to the current date for new employees:

CREATE OR REPLACE TRIGGER before_insert_employee
BEFORE INSERT
ON employees
FOR EACH ROW
BEGIN
    :NEW.hire_date := SYSDATE;
END;


-- In this example:

-- The trigger is named before_insert_employee.
-- It is set to fire BEFORE INSERT on the "employees" table.
-- The trigger is set to execute for each row (FOR EACH ROW).
-- The trigger logic sets the hire_date of the new employee being inserted to the current date and time (SYSDATE).