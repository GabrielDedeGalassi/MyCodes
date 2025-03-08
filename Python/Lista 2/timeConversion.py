N = int(input(''))
H = N//3600
M = (N//60)%60
S = N%60
print(f'{H}:{M}:{S}')