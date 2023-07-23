numero = int(input())

numero_digitos = 0

while numero > 0:
    numero_digitos += 1
    numero = numero//10

print(numero_digitos)