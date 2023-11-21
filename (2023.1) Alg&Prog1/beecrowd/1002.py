'''
A fórmula para calcular a área de uma circunferência é: area = π . raio².
Considerando para este problema que π = 3.14159:

- Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por π
'''

pi = 3.14159
r = float(input())

A = pi * (r**2)
print(f'A={A:.4f}')