p = i = pos = neg = 0
n = float(input())
if n%2 == 0:
    p +=1
elif n%2 != 0:
    i +=1
if n > 0:
    pos +=1
elif n < 0:
    neg +=1
for v in range (4):
    n = float(input())
    if n%2 == 0:
        p +=1
    elif n%2 != 0:
        i +=1
    if n > 0:
        pos +=1
    elif n < 0:
        neg +=1
print(f'''{p} valor(es) par(es)
{i} valor(es) impar(es)
{pos} valor(es) positivo(s)
{neg} valor(es) negativo(s)''')