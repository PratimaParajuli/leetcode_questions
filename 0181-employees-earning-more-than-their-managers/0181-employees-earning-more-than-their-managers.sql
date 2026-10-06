# Write your MySQL query statement below
select e1.name Employee From Employee e1
where e1.salary>(select e2.salary from employee e2 where e2.id = e1.managerid)