p = t = 0
n = float(input())
if n > 0:
    p +=1
    t += n
for v in range (5):
    n = float(input())
    if n > 0:
        p +=1
        t += n
print(f'''{p} valores positivos
{(t/p):.1f}''')