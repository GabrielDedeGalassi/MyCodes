p = t = 0
n = float(input())
if n%2 == 0:
    p +=1
for v in range (4):
    n = float(input())
    if n%2 == 0:
        p +=1
print(f'{p} valores pares')