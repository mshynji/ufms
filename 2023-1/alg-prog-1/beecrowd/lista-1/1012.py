'''
Escreva um programa que leia três valores com ponto flutuante de dupla precisão:
A, B e C. Em seguida, calcule e mostre:

a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.
'''

a, b, c = map(float, input().split())

a_triangulo = (a*c)/2
a_circulo = (c**2) * (3.14159) 
a_trapezio = (a+b)*c/2
a_quadrado = b*b
a_retangulo = a*b

print(f"TRIANGULO: {a_triangulo:.3f}")
print(f"CIRCULO: {a_circulo:.3f}")
print(f"TRAPEZIO: {a_trapezio:.3f}")
print(f"QUADRADO: {a_quadrado:.3f}")
print(f"RETANGULO: {a_retangulo:.3f}")