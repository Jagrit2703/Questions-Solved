# Write your MySQL query statement below
select name, bonus
from Employee as e
left join Bonus as b ON e.empId = b.empID
where bonus < 1000 or bonus IS NULL