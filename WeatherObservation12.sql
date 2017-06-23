/*
Enter your query here.
*/
select distinct city from station where city not in (select distinct city from station where city regexp '^[aeiou]' union select distinct city from station where city regexp '[aeiou]$')
