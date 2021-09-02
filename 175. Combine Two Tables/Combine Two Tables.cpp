# Write your MySQL query statement below
SELECT Person.FirstName, Person.LastName, Address.City, Address.State 
FROM Person LEFT Join Address
ON Person.PersonID = Address.PersonID
