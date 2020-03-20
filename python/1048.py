salario = float(input())

if (salario <= 400):
    reajuste = (salario * 1.15) - salario
    salario = salario + reajuste
    porcentagem = 15
elif((salario > 400) and (salario<=800)):
    reajuste = (salario * 1.12) - salario
    salario = salario + reajuste
    porcentagem = 12
elif((salario > 800) and (salario<=1200)):
    reajuste = (salario * 1.10) - salario
    salario = salario + reajuste
    porcentagem = 10
elif((salario > 1200) and (salario<=2000)):
    reajuste = (salario * 1.07) - salario
    salario = salario + reajuste
    porcentagem = 7
elif(salario > 2000):
    reajuste = (salario * 1.04) - salario
    salario = salario + reajuste
    porcentagem = 4

print("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %s" % (salario,reajuste, porcentagem, "%"))