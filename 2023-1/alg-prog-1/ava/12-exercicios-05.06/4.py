n = int(input())

matriz = [[0]*n for _ in range(n)]

visitado = [[False]*n for _ in range(n)]
d_x = [0, 1, 0, -1]
d_y = [1, 0, -1, 0]
x, y = 0, 0
d = 0

for k in range(1, (n*n)+1):
    matriz[x][y] = k

    prox_x = x + d_x[d]
    prox_y = y + d_y[d]

    if prox_x < 0 or prox_x == n or prox_y < 0 or prox_y == n or matriz[prox_x][prox_y] != 0:
        d = (d+1)%4
        prox_x = x + d_x[d]
        prox_y = y + d_y[d]

    x = prox_x
    y = prox_y

maior = n*n
t = 0
while maior > 0:
    t += 1
    maior //= 10

for linha in matriz:
    for i, coluna in enumerate(linha):
        end_line = "\n" if i == n-1 else " "

        print(f"{coluna:>{t}}", end=end_line)