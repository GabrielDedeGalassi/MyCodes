X = float(input(''))
if 0 <= X <= 400:
    Z = X*0.15
    W = 15
elif 400 < X <= 800:
    Z = X*0.12
    W = 12
elif 800 < X <= 1200:
    Z = X*0.1
    W = 10
elif 1200 < X <= 2000:
    Z = X*0.07
    W = 7
else:
    Z = X*0.04
    W = 4
Y = X + Z
print(f'''Novo salario: {Y:.2f}
Reajuste ganho: {Z:.2f}
Em percentual: {W} %''')