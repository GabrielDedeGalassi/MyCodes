N = int(input(''))
Ano = N//365
Mes = (N%365)//30
Dia = (N%365)%30
print(f'''{Ano} ano(s)
{Mes} mes(es)
{Dia} dia(s)''')