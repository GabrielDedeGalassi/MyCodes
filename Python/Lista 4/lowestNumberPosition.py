L = []
n = int(input())
posi = menor = 0
L = input().split()
for i in range(n):
    L[i] = int(L[i])
    if i == 0:
        menor = L[i]
        posi = i
    if i != 0:
        if menor > L[i]:
            menor = L[i]
            posi = i
print(f'''Menor valor: {menor}
Posicao: {posi}''')