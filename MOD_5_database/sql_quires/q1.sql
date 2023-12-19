-- Create Table Name : Student and Exam

create table student(Rollno int auto_increment primary key, Name varchar(255), Branch varchar(255));


insert into student(Name, Branch)values("jay", "Computer Science"),("Suhani","Electronic and Com"),("Kriti", "Electric and Com");


mysql> select * from student;
+--------+--------+--------------------+
| Rollno | Name   | Branch             |
+--------+--------+--------------------+
|      1 | jay    | Computer Science   |
|      2 | Suhani | Electronic and Com |
|      3 | Kriti  | Electric and Com   |
+--------+--------+--------------------+


create table exam(Rollno int, S_code varchar(255), Marks int, P_code varchar(50), foreign key (Rollno) references student(Rollno));

insert into exam(Rollno, S_code, Marks, P_code)values(1, "CS11", 50, "CS"),(1, "CS12", 60, "CS"),(2, "EC101", 66, "EC"),(2, "EC102", 70, "EC"),(3, "EC101", 45, "EC"),(3,"EC102", 50, "EC");
 select * from exam;

mysql> select * from exam;
+--------+--------+-------+--------+
| Rollno | S_code | Marks | P_code |
+--------+--------+-------+--------+
|      1 | CS11   |    50 | CS     |
|      1 | CS12   |    60 | CS     |
|      2 | EC101  |    66 | EC     |
|      2 | EC102  |    70 | EC     |
|      3 | EC101  |    45 | EC     |
|      3 | EC102  |    50 | EC     |
+--------+--------+-------+--------+