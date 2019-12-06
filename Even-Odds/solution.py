s = str(input())
temp = s.split()
n = int(temp[0])
k = int(temp[1])
if n % 2 == 0 :
    if k > n/2:
        k -= n/2
        print(int(2*k))
    else :
        print(int(2*k-1))
else:
    if k > (n//2)+1:
        k -= n//2 +1
        print(int(2*k))
    else :
        print((2*k-1))
        
