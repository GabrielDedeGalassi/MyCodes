L = input().split()
X, Y, Z = L
X, Y, Z = int(X), int(Y), int(Z)
if X > Y:
   X, Y = Y, X
if X > Z:
   X, Z = Z, X
if Y > Z:
   Y, Z = Z, Y
print(f'''{X}
{Y}
{Z}

{L[0]}
{L[1]}
{L[2]}''')