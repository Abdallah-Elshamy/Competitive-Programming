s = str(input())
sent =s.split("WUB")
ans=""
for word in sent:
    if word != "":
        ans += word + " "
print(ans)
