L = []
for i in range(100):
    L.append(float(input()))
    if L[i] <= 10:
        print(f'A[{i}] = {L[i]:.1f}')