from math import ceil
s = str(input())
temp = s.split()
n = int(temp[0])
m = int(temp[1])
min_steps = n//2 + n%2 
steps = ceil(min_steps/m)*m
if m>n:
    print(-1)
else:
    print(steps)
