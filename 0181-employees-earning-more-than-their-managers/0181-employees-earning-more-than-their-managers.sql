# Write your MySQL query statement below

SELECT ep.name AS Employee FROM Employee AS e
JOIN Employee ep ON e.id=ep.managerId
WHERE ep.salary>e.salary;


