L = []
n = float(input())
for i in range(100):
    L.append(n)
    print(f'N[{i}] = {L[i]:.4f}')
    n /= 2