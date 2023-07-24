coeficientes = list(map(float, input().split()))

k = int(input())
for _ in range(k):
    valor_polinomio = 0.0

    x = float(input())

    for i, coeficiente in enumerate(coeficientes):
        valor_polinomio += (x**i) * (coeficiente)

    print(f"{valor_polinomio:.4f}")