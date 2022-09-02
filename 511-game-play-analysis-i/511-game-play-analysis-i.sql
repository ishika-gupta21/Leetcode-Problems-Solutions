# Write your MySQL query statement below
select a1.player_id, min(a1.event_date) as first_login
from activity a1
group by a1.player_id