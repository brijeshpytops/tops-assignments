-- What do you understand By Data Redundancy? 

-- Data redundancy refers to the unnecessary repetition of data in a database. It occurs when the same piece of data is stored in multiple places within a database system. Redundancy can lead to several issues, including wasted storage space, increased maintenance complexity, and an increased risk of inconsistencies and errors in the data.

-- There are three main types of data redundancy:

-- Horizontal Redundancy:

-- This occurs when the same data is repeated in different records or rows of the same table.
-- For example, consider a database of employees where the department name is stored in each row along with the employee information. If multiple employees belong to the same department, the department name is redundantly stored for each of those employees.
-- Vertical Redundancy:

-- Vertical redundancy involves the repetition of the same data in different tables within a database.
-- For example, imagine a database where both an employee table and a department table store the location of each department. If there are multiple departments, the same location data is redundantly stored in both tables.
-- Mixed Redundancy:

-- This type of redundancy involves a combination of horizontal and vertical redundancy, where the same data is repeated both within rows of the same table and in different tables.
-- Using the employee and department example, mixed redundancy could occur if the department name is redundantly stored in each employee record (horizontal redundancy) and also in a separate department table (vertical redundancy).
-- Data redundancy can lead to several problems:

-- Data Inconsistency: If redundant data is not updated consistently across all occurrences, inconsistencies can arise. For example, if the location of a department changes and is updated in one place but not another, inconsistencies occur.

-- Wasted Storage Space: Storing the same data in multiple locations consumes more storage space than necessary.

-- Increased Update Anomalies: Redundancy can lead to anomalies during data updates, inserts, or deletes. For example, updating a piece of data in one location but forgetting to update it in another can cause discrepancies.