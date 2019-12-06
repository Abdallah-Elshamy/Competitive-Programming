counter =0
n= int(input())
in_put = []
for i in range(n):
    in_put.append(str(input()).split(" "))
    i += 1

for l in in_put:
    for r in in_put:
        if l[0] == r[1]:
            counter += 1
print(counter)
