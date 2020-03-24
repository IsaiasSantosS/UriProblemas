dia, idia = input().split()
ih, p, im, p, ise = input().split()
dia, fdia = input().split()
fh, p, fm, p, fse = input().split()

fdia = int(fdia)
idia = int(idia)

totali = ((int(ih) * 3600) + (int(im) * 60) + int(ise))
totalf = ((int(fh) * 3600) + (int(fm) * 60) + int(fse))

total = totalf - totali

if (total > 0):
    ih = total / 3600
    im = (total % 3600) / 60
    ise = (total % 3600) % 60
    idia = fdia - idia
elif (total < 0):
    total = 86400 + total
    ih = total / 3600
    im = (total % 3600) / 60
    ise = (total % 3600) % 60
    idia = fdia - idia - 1
else:
    ih = 0
    im = 0
    ise = 0
    idia = fdia - idia
    
print("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n" % (idia, ih, im, ise))