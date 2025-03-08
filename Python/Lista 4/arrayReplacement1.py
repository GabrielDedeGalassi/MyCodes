L = []
for i in range(10):
    L.append(int(input()))
    if L[i] < 1:
        L[i] = 1
    print(f'X[{i}] = {L[i]}')