'''
Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de
modo que o lado A representa o maior dos 3 lados. A seguir, determine o tipo de
triângulo que estes três lados formam, com base nos seguintes casos, sempre
escrevendo uma mensagem adequada:

- se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
- se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
- se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
- se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
- se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
- se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
'''

lados_triangulo = list(map(float, input().split()))

for i in range(0, len(lados_triangulo)):
    for j in range(0, len(lados_triangulo)-1):
        if lados_triangulo[i] < lados_triangulo[j]:
            lados_triangulo[i] += lados_triangulo[j]
            lados_triangulo[j] = lados_triangulo[i] - lados_triangulo[j]
            lados_triangulo[i] = lados_triangulo[i] - lados_triangulo[j]

a, b, c = lados_triangulo

if a+b <= c and not a == b == c:
    print("NAO FORMA TRIANGULO")
else:
    a *= a
    b *= b
    c *= c

    if c == a+b:
        print("TRIANGULO RETANGULO")
    elif c > a+b:
        print("TRIANGULO OBTUSANGULO")
    elif c < a+b:
        print("TRIANGULO ACUTANGULO")  

    if a == b == c:
        print("TRIANGULO EQUILATERO")
    elif a == b or a == c or b == c:
     print("TRIANGULO ISOSCELES")

