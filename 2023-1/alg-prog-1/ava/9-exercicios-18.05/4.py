coeficientes = list(map(float, input().split()))

for i, coeficiente in enumerate(coeficientes):
    if i == 0: continue
    print(f"{(coeficiente * i):.4f}")