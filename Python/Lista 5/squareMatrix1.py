def menor(n, i, j):
    x = i
    if x > j:
        x = j
    if x > n - max(i, j):
        x = n - max(i, j)
    return x+1

n = int(input())
while n != 0:
    L = []
    for i in range(n):
        C = []
        L.append(C)
        for j in range(n):
            L[i].append(menor(n-1, i, j))
            print(f'{L[i][j]:3d}', end='')
            if j != (n-1):
                print(' ', end='')
        print('')
    n = int(input())
    print('')