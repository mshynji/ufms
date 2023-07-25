n = int(input())

matriz = []
for _ in range(n):
    linha = list(map(int, input().split()))
    matriz.append(linha)

constante = 0
for i in range(n):
    constante += matriz[i][i]

somas = [0]
for i in range(n):
    soma_linha = 0
    soma_coluna = 0
    for j in range(n):
        if i+j == n-1:
            somas[0] += matriz[i][j]
        soma_linha += matriz[i][j]
        soma_coluna += matriz[j][i]
    
    somas.append(soma_linha)
    somas.append(soma_coluna)

if all(soma == constante for soma in somas):
    print("SIM")
else:
    print("NAO")
