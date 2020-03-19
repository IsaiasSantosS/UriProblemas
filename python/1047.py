hi, mi, hf, mf = input().split()
totalHora = 24
totalMin = 0

totalMin = ((int(hf) * 60) + int(mf)) - ((int(hi) * 60) + int(mi))

if (totalMin > 0):
    totalHora = totalMin // 60
    totalMin = totalMin % 60
elif(totalMin < 0):
    totalMin = 1440 + totalMin
    totalHora = totalMin // 60
    totalMin = totalMin % 60

print("O JOGO DUROU %d HORA(S) E %d MINUTO(S)" % (totalHora, totalMin))
    