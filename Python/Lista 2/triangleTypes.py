X, Y, Z = input().split()
X, Y, Z = float(X), float(Y), float(Z)
if X < Y:
   X, Y = Y, X
if X < Z:
   X, Z = Z, X
if Y < Z:
   Y, Z = Z, Y
if X >= Y + Z:
    print('NAO FORMA TRIANGULO')
elif X**2 == Y**2 + Z**2:
    print('TRIANGULO RETANGULO')
elif X ** 2 > Y ** 2 + Z ** 2:
    print('TRIANGULO OBTUSANGULO')
elif X ** 2 < Y ** 2 + Z ** 2:
    print('TRIANGULO ACUTANGULO')
if X == Y == Z:
    print('TRIANGULO EQUILATERO')
elif X == Y and X!= Z and Y != Z or X == Z and Y != X and Y != Z or Y == Z and X != Z and X != Y:
    print('TRIANGULO ISOSCELES')