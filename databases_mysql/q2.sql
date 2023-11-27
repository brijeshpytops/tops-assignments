-- What is Normalization? 

-- Normalization is a process used in relational database design to organize the data efficiently and reduce data redundancy. The main goal of normalization is to eliminate or minimize data anomalies such as insertion, update, and deletion anomalies by organizing data into well-structured tables. This process involves breaking down large tables into smaller, related tables and defining relationships between them.

-- There are several normal forms, each building upon the previous one, with the ultimate goal of achieving a highly normalized database structure. The most common normal forms are the First Normal Form (1NF), Second Normal Form (2NF), Third Normal Form (3NF), Boyce-Codd Normal Form (BCNF), and Fourth Normal Form (4NF). Here is a brief overview of the first three normal forms:

-- First Normal Form (1NF): A table is in 1NF if it does not contain repeating groups of data and each column contains atomic values (indivisible and cannot be further subdivided).

-- Second Normal Form (2NF): A table is in 2NF if it is in 1NF and all non-key attributes are fully functionally dependent on the primary key. This means that there should be no partial dependencies of any column on the primary key.

-- Third Normal Form (3NF): A table is in 3NF if it is in 2NF and all transitive dependencies are removed. Transitive dependencies occur when a non-key attribute is functionally dependent on another non-key attribute rather than on the primary key.

-- Normalization helps in achieving the following benefits:

-- Reduction of Data Redundancy: By eliminating duplicate data, normalization reduces the risk of data inconsistencies and ensures that updates are made in only one place.

-- Improved Data Integrity: Normalization reduces the likelihood of data anomalies, such as insertion, update, and deletion anomalies, leading to a more reliable database.

-- Simplified Data Maintenance: The database is easier to maintain and modify as changes to the data structure are typically localized and do not affect multiple tables.