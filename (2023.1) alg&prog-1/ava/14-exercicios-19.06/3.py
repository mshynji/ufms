def isTuring(vetor):
    if len(vetor) == 1: return True

    count = 0
    isTuring = True
    for i, valor in enumerate(vetor):
        if i == 0:
            if valor > vetor[i+1]: count += 1
        elif i == len(vetor)-1:
            if valor > vetor[i-1]:count += 1
        else:
            if valor > vetor[i+1] and valor > vetor[i-1]:
                count += 1

        if count > 1:
            isTuring = False
            break

    return isTuring



m, n = map(int, input().split())

matriz = []
for _ in range(m):
    linha = list(map(int, input().split()))
    matriz.append(linha)

isTuring_linhas = []
for linha in matriz:
    isTuring_linhas.append(isTuring(linha))

isTuring_colunas = []
for i in range(n):
    coluna = []
    for j in range(m):
        coluna.append(matriz[j][i])
    isTuring_colunas.append(isTuring(coluna))

if all(i == True for i in isTuring_linhas) and all(i == True for i in isTuring_colunas):
    print("Turing")
else:
    print("Not Turing")

