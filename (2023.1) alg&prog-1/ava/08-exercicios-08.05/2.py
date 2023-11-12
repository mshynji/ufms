frase = input()

frase = "".join(i for i in frase if i.isalnum())
frase_invertida = "".join(frase[i] for i in range(len(frase)-1, -1, -1))

print(frase)
print(frase_invertida)
if frase == frase_invertida:
    print("SIM")
else:
    print("NAO")
