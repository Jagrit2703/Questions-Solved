# Write your MySQL query statement below
# select  employee_id, salary as "bonus" from Employees 
select employee_id,
case when employee_id%2!=0 and left(name,1)!="M" then salary
else 0
end as bonus
from employees
order by employee_id;
# where employee_id%2!=0 and left(name,1)!="M"
# order by employee_id;