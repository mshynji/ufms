n = int(input())

matriz = []
for _ in range(n):
    linha = list(map(int, input().split()))
    matriz.append(linha)

valores = dict()
for i in range(n):
    for j in range(n):
        if not valores.get(matriz[i][j]):
            valores[matriz[i][j]] = 0
        valores[matriz[i][j]] += 1

maior = sorted(list(valores.values()))[-1]

keys = sorted(list(valores.keys()))
for key in keys:
    if valores[key] == maior:
        print(key)