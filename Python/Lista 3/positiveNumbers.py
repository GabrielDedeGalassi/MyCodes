p = 0
n = float(input())
if n > 0:
    p +=1
for v in range (5):
    n = float(input())
    if n > 0:
        p +=1
print(f'{p} valores positivos')