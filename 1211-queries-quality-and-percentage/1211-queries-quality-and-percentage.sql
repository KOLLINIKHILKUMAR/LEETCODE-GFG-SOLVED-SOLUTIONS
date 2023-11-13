select query_name, round(avg(rating/position),2) as quality
, ROUND(SUM(IF(rating < 3, 1, 0)) / COUNT(*) * 100, 2) AS poor_query_percentage from queries group by query_name;