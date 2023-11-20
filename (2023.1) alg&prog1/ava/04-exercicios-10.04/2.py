n = int(input())

subnumero_par, expoente = 0, 0
while n > 0:
    if (n%10)%2 == 0:
        subnumero_par += (n%10) * (10**expoente)    
        expoente += 1

    n //= 10

print(subnumero_par)
    
