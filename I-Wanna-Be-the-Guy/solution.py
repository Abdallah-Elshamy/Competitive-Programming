n = int(input())
s1 = str(input())
s2 = str(input())
p =s1.split()
q =s2.split()
del p[0]
del q[0]
ans = set(p + q) 
if ans.__len__() == n:
    print("I become the guy.")
else:
    print("Oh, my keyboard!")        
