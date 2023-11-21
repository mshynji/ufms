num_binario = int(input())

num_decimal, expoente = 0, 0
while num_binario > 0:
    num_decimal += (num_binario%10) * (2**expoente)

    expoente += 1
    num_binario //= 10

print(num_decimal)