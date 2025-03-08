V = input().split()
X, Y = V
X, Y = int(X), int(Y)
Z = 0
if  X == 1:
   Z = 4.00
elif X == 2:
   Z = 4.50
elif X == 3:
   Z = 5.00
elif X == 4:
   Z = 2.00
elif X == 5:
   Z = 1.50
print(f'Total: R$ {(Z*Y):.2f}')