numero_decimal = int(input())

numero_ternario, expoente = 0, 0
while numero_decimal > 0:
    numero_ternario += (numero_decimal%3)*(10**expoente)

    expoente += 1
    numero_decimal //= 3

print(numero_ternario)