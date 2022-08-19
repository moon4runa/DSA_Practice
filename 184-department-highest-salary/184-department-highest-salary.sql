# Write your MySQL query statement below
SELECT D.name as Department, E.name as Employee, E.Salary as Salary
FROM 
Employee E,
(SELECT DepartmentId, max(Salary) as M
FROM Employee
GROUP BY DepartmentId) T,
Department D
WHERE E.DepartmentId = T.DepartmentId
AND E.salary = T.M
AND E.DepartmentID = D.id
