# Write your MySQL query statement below
select name,
ifnull(sum(Rides.distance),0) as travelled_distance
from users
left join rides on users.id = rides.user_id
group by user_id 
order by travelled_distance desc,name asc
