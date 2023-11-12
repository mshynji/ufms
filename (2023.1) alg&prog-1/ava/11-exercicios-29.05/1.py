sequencia = list(map(int, input().split()))

balanceada = True
const = sequencia[0] + sequencia[len(sequencia)-1]
for i in range(1, len(sequencia)//2):
    soma = sequencia[i] + sequencia[len(sequencia)-(1+i)]

    if soma != const:
        balanceada = False
        break

if balanceada: print("SIM")
else: print("NAO")
