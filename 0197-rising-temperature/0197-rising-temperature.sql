# Write your MySQL query statement below
select we.id as id from 
Weather as we join Weather as w 
on DATEDIFF(we.recordDate,w.recordDate)=1 and 
we.temperature>w.temperature