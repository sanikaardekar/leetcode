# Write your MySQL query statement below
select ifnull((select distinct salary
from Employee
order by salary desc
limit 1 offset 1 ), null) as SecondHighestSalary

# select distinct salary as SecondHighestSalary
# from Employee order by salary desc limit 1 offset 1