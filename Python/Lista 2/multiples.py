V = input().split()
X, Y = V
X, Y = int(X), int(Y)
if Y > X:
   if Y%X == 0:
      print('Sao Multiplos')
   else:
      print('Nao sao Multiplos')
elif Y < X:
   if X%Y == 0:
      print('Sao Multiplos')
   else:
      print('Nao sao Multiplos')