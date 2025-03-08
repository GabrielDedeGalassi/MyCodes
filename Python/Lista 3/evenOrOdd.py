n = int(input())
t1 = ''
t2 = ''
for v in range (n):
    x = int(input())
    if x == 0:
        print('NULL')
    elif x%2 == 0 and x != 0:
        print('EVEN', end='')
    elif x%2 != 0 and x != 0:
        print('ODD', end='')
    if x < 0 and x != 0:
        print(' NEGATIVE')
    elif x > 0 and x != 0:
        print(' POSITIVE')