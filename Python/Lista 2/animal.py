v = input('').lower()
tipo = input('').lower()
alim = input('').lower()
if v == 'vertebrado':
    if tipo == 'ave':
        if alim == 'carnivoro':
            print('aguia')
        elif alim == 'onivoro':
            print('pomba')
    elif tipo == 'mamifero':
        if alim == 'onivoro':
            print('homem')
        elif alim == 'herbivoro':
            print('vaca')
elif v == 'invertebrado':
    if tipo == 'inseto':
        if alim == 'hematofago':
            print('pulga')
        elif alim == 'herbivoro':
            print('lagarta')
    elif tipo == 'anelideo':
        if alim == 'hematofago':
            print('sanguessuga')
        elif alim == 'onivoro':
            print('minhoca')