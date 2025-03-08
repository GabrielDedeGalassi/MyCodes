n = float(input())
if n <= 2000:
   print(f'Isento')
elif 2000 < n <= 3000:
    t1 = n - 2000
    print(f'R$ {(t1*0.08):.2f}')
elif 3000 < n <= 4500:
    t1 = 1000
    t2 = n - 3000
    print(f'R$ {(t1*0.08+t2*0.18):.2f}')
else:
    t1 = 1000
    t2 = 1500
    t3 = n - 4500
    print(f'R$ {(t1*0.08+t2*0.18+t3*0.28):.2f}')