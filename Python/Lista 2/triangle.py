X, Y, Z = input().split()
X, Y, Z = float(X), float(Y), float(Z)
if X + Y > Z and X + Z > Y and Y + Z > X:
   print(f'Perimetro = {(X+Y+Z):.1f}')
else:
   print(f'Area = {(((X + Y) * Z) / 2):.1f}')