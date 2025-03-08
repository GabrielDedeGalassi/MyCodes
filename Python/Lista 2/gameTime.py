V = input().split()
X, Y = V
X, Y = int(X), int(Y)
if X > Y:
   H = (24 - X) + Y
elif X < Y:
   H = Y - X
elif X == Y:
   H = 24
print(f'O JOGO DUROU {H} HORA(S)')