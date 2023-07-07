# Write your MySQL query statement below
select user_id, name, mail
from users
where mail regexp '^[a-zA-Z]+[a-zA-Z-._0-9]*@leetcode[.]com$'