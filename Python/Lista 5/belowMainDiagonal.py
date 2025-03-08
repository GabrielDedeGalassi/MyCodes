L = [[], [], [], [], [], [], [], [], [], [], [], []]
soma = 0
n = 0
q = 0
x = 12
m = input().upper()

for i in range(x):
    for j in range(x):
        L[i].append(float(input()))

for l in range(x):
    for k in range(0, n):
        soma += L[l][k]
        q += 1
    n += 1

if m == 'S':
    print("%.1f" %soma)
else:
    media = soma/q
    print("%.1f" %media)