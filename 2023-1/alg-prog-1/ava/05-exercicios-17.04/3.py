numero = int(input())

numero_bkp       = numero
numero_invertido = 0

tamanho_numero = 0
while numero > 0:
    numero //= 10
    tamanho_numero += 1

numero = numero_bkp

while numero > 0:
    digito = numero%10
    tamanho_numero -= 1
    numero //= 10

    numero_invertido += digito * (10**(tamanho_numero))

if numero_bkp == numero_invertido:
    print("SIM")
else:
    print("NAO")