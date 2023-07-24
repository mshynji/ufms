n = int(input())

comprimento = 1
maior_comprimento = 1

anterior = int(input())

for i in range(n-1):
    numero = int(input())

    if numero > anterior:
        comprimento += 1
    else:
        comprimento = 1
        
    if comprimento > maior_comprimento:
        maior_comprimento = comprimento

    anterior = numero

print(maior_comprimento)