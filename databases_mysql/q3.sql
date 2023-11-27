-- What is Difference between DBMS and RDBMS? 

-- DBMS (Database Management System) and RDBMS (Relational Database Management System) are related concepts, but there are key differences between the two:

-- Definition:

-- DBMS: A Database Management System is a software that manages and facilitates the creation, maintenance, and use of databases. It provides an interface for interacting with the database, managing data storage, retrieval, and other operations.
-- RDBMS: A Relational Database Management System is a specific type of DBMS that is based on the relational model. In an RDBMS, data is organized into tables with rows and columns, and relationships between tables are established using keys.
-- Data Organization:

-- DBMS: DBMS may or may not follow the relational model. It can organize data in various ways, such as hierarchical, network, or object-oriented models.
-- RDBMS: RDBMS strictly follows the relational model. Data is organized into tables with predefined relationships, and it enforces a set of rules (e.g., normalization) to ensure data integrity.
-- Data Integrity:

-- DBMS: Ensuring data integrity is the responsibility of the application or the user. DBMS may provide some basic features for data integrity, but it may not enforce relational constraints rigorously.
-- RDBMS: RDBMS enforces the principles of the relational model, which includes strict adherence to integrity constraints like primary keys, foreign keys, and normalization rules. This ensures a high level of data integrity.
-- Query Language:

-- DBMS: DBMS typically uses a data manipulation language (DML) for interacting with the database. SQL (Structured Query Language) is commonly used, but the implementation may vary.
-- RDBMS: RDBMS uses SQL as the standard query language. SQL is specifically designed for interacting with relational databases, making it a core part of RDBMS functionality.
-- Relationships:

-- DBMS: DBMS may or may not support relationships between tables. Relationships are often managed at the application level.
-- RDBMS: RDBMS is built on the foundation of relationships between tables. It emphasizes the use of keys to establish and maintain these relationships.