L = [[], [], [], [], [], [], [], [], [], [], [], []]
soma = 0
num = 0
n = int(input())
m = input().upper()

for i in range(12):
    L.append([])

for i in range(12):
    for j in range(12):
        L[i].append(float(input()))
        
for k in range(12):
    soma += L[k][n]
    
if m == 'S':
    print('%.1f' %soma)
else:
    media = (soma)/12
    print('%.1f' %media)