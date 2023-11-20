frase = input().upper()
palavra = input().upper()

found_at = []
for i in range(len(frase)-len(palavra)+1):
    letra = frase[i]

    if letra == palavra[0]:
        match = True
        for k in range(len(palavra)):
            if frase[i+k] != palavra[k]:
                match = False
                break

        if match: found_at.append(i)

if len(found_at) > 0:
    for posicao in found_at:
        print(posicao)
else:
    print("NOT FOUND!")