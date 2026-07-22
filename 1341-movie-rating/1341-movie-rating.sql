(select name as results from Users a right join MovieRating b on a.user_id=b.user_id
group by name order by count(*) desc, a.name asc Limit 1 )
union all
(select title as results from Movies a right join MovieRating b on a.movie_id=b.movie_id
where b.created_at between '2020-02-01' AND '2020-02-29'
group by a.title
order by avg(rating) desc, a.title asc
 limit 1);