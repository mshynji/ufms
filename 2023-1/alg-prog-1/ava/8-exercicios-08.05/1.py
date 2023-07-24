n = int(input())
lancamentos = list(map(int, input().split()))[0:n]

for i in range(1, 14):
    n_vezes = lancamentos.count(i)
    porcentagem = (n_vezes/n) * 100

    print(f"Face {i}: {porcentagem:.2f}%")