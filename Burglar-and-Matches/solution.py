ans = 0
n , m= map(int,input().split())
matches=[]
for i in range(m):
    a , b= map(int,input().split())
    matches.append([a,b])
matches.sort(key= lambda x : x[1] , reverse = True)
while(n>0):
    if len(matches)<=0:
        break
    candidate = matches.pop(0)
    if n >= candidate[0]:
        n-= candidate[0]
        ans += candidate[0]*candidate[1]
    else:
        ans += n*candidate[1]
        n=0
print(ans)
