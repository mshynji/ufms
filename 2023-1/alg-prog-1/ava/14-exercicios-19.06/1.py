m = int(input())
n = int(input())

matriz = []
for _ in range(m):
    linha = list(map(int, input().split()))
    matriz.append(linha)

soma = 0
for i in range(m):
    maior = matriz[i][0]
    for j in range(1, n):
        if matriz[i][j] > maior:
            maior = matriz[i][j]

    soma += maior

print(soma)