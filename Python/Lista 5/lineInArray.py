L = [[], [], [], [], [], [], [], [], [], [], [], []]
soma = num = 0
n = int(input())
m = input().upper()
for i in range(12):
    L.append([])
    for j in range(12):
        L[i].append(float(input()))

if m == 'S':
    print(sum(L[n]))
elif m == 'M':
    media = (sum(L[n]))/12
    print(media)