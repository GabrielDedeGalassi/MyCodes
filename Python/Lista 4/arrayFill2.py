L = []
n = int(input())
v = 0
for i in range(1000):
    L.append(v)
    print(f'N[{i}] = {L[i]}')
    v += 1
    if v == n:
        v = 0