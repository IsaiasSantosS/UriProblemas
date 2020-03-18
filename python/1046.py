inicio,fim=input().split()
inicio=int(inicio)
fim=int(fim)
duracao = 24
if inicio > fim:
    duracao = ((24-inicio) + fim)
elif inicio < fim:
    duracao = (fim - inicio)

print("O JOGO DUROU %s HORA(S)\n" % duracao)
