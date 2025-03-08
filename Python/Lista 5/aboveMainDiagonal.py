L = [[], [], [], [], [], [], [], [], [], [], [], []]
soma = 0
n = 1
q = 0
m = input().upper()

for i in range(12):
    for j in range(12):
        L[i].append(float(input()))

for l in range(12):
    for k in range(n, 12):
        soma += L[l][k]
        q += 1
    n += 1

if m == 'S':
    print("%.1f" %soma)
else:
    media = soma/q
    print("%.1f" %media)