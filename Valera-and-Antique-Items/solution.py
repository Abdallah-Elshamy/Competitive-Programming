n , v = map(int,input().split())
deals = []
sellers = []
sellers_count = 0
for i in range(n):
    deals.append(list(map(int,input().split())))

for k in range(len(deals)):
    for i in range(len(deals[k])):
        if i == 0:
            continue
        if deals[k][i] < v:
            if k+1 not in sellers:
                sellers_count += 1
                sellers.append(k+1)
                
print(sellers_count)
for k in range(sellers_count):
    print(sellers[k] , end = " ")
