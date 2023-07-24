frase = input().upper()
palavra = input().upper()

encontrou = False
for i, letra in enumerate(frase):
    if letra == palavra[0]:
        match = True
        for k in range(1, len(palavra)):
            if frase[k] != palavra[k]: 
                match = False
                break
        
        if not match: continue
        encontrou = True

    if encontrou: break

if encontrou: print("SIM")
else: print("NAO")