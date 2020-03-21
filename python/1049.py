textoA = input()
textoB = input()
textoC = input()

if (textoA  == "vertebrado"):
    if (textoB == "ave"):
        if (textoC == "carnivoro"):
            print("aguia")
        else:
            print("pomba")
    else:
        if (textoC == "onivoro"):
            print("homem")
        else:
            print("vaca")  
else:
    if (textoB == "inseto"):
        if (textoC == "hematofago"):
            print("pulga")
        else:
            print("lagarta")
    else:
        if (textoC == "hematofago"):
            print("sanguessuga")
        else:
            print("minhoca")