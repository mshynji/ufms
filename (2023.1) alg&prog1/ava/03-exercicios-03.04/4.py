num_decimal = int(input())

num_binario, expoente = 0, 0
while num_decimal > 0:
    num_binario += (num_decimal%2) * (10**expoente)

    expoente += 1
    num_decimal //= 2

print(num_binario)