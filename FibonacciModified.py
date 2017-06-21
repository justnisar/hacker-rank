
n1, n2, n = input().split()
n1, n2, n = [int(n1), int(n2), int(n)]
count = 2

while count < n:
 c = n2 ** 2 + n1
 n1 = n2;
 n2 = c;
 count = count + 1
       
print(c)
