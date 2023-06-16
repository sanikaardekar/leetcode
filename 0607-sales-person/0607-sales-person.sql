# Write your MySQL query statement below
select sp.name as name from SalesPerson as sp 
where sp.sales_id not in 
(select o.sales_id from Orders as o left join Company as c
on o.com_id =c.com_id
where c.name='RED')