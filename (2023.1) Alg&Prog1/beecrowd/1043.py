'''
Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo.
Em caso positivo, calcule o perímetro do triângulo e apresente a mensagem:
Perimetro = XX.X

Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura, mostrando a mensagem:
Area = XX.X
'''

a, b, c = map(float, input().split())
lados = [a, b, c]

for i in range(0, len(lados)):
    for j in range(i+1, len(lados)):
        if lados[i] > lados[j]:
            lados[i] += lados[j]
            lados[j] = lados[i] - lados[j]
            lados[i] = lados[i] - lados[j]

if lados[2] < lados[0] + lados[1]:
    print(f"Perimetro = {sum(lados):.1f}")
else:
    print(f"Area = {(a+b)*c/2:.1f}")