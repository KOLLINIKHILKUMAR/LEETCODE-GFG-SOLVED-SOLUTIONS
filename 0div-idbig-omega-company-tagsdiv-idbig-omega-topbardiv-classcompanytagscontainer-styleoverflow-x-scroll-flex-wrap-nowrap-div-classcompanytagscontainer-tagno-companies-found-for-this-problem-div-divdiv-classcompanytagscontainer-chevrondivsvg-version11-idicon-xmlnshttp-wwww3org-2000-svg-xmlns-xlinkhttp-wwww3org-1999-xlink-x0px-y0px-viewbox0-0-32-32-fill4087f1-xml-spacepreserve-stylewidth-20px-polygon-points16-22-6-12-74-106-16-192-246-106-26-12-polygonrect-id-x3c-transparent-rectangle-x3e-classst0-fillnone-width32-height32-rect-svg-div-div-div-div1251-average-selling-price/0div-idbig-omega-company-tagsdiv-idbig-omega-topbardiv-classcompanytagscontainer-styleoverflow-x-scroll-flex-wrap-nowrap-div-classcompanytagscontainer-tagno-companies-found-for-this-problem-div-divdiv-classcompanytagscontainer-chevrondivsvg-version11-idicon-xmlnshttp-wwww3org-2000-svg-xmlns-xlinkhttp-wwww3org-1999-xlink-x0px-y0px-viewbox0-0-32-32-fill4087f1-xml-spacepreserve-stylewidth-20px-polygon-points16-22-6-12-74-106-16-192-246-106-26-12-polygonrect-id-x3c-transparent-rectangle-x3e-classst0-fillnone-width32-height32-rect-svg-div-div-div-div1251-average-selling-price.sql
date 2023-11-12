# Write your MySQL query statement below
select prices.product_id, 
ifnull(ROUND(SUM(units*price)/SUM(units),2),0) as average_price 
from prices left join unitssold 
on prices.product_id=unitssold.product_id  AND
unitssold.purchase_date BETWEEN start_date AND end_date
group by product_id;