# Write your MySQL query statement below
# select p.product_id, round(sum(u.units*p.price/sum(u.units)),2) as average_price
# from Prices as p join UnitsSold as u
# on (p.product_id=u.product_id
# and u.purchase_date between p.start_date and p.end_date)
# group by product_id
select 
    p.product_id,
    round(sum(u.units * p.price) / sum(u.units) , 2) as average_price 
from Prices as p
join UnitsSold as u
on (p.product_id = u.product_id and
    u.purchase_date between p.start_date and p.end_date)
group by product_id