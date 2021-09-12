# Write your MySQL query statement below
 SELECT DISTINCT a.Email
 FROM Person a JOIN Person b
 ON (a.Email = b.Email)
 WHERE a.Id <> b.Id
