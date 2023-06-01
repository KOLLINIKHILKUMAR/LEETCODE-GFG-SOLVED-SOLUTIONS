/* Write your PL/SQL query statement below */
select DISTINCT author_id AS id from views where author_id=viewer_id order by id; 