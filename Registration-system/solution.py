n = int(input())
names = []
database = {}
for i in range(n):
    temp = str(input())
    names.append(temp)
    
for k in range(len(names)):
    temp = names[k]
    if temp in database.keys():
        print(temp + str(database[temp]+1))
        database[temp] += 1
    else:
        database[temp] = 0
        print("OK")
