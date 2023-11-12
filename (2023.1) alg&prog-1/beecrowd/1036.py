'''
Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara.
Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”,
caso haja uma divisão por 0 ou raiz de numero negativo.
'''

a, b, c = map(float, input().split())

delta = (b**2) - (4*a*c)
if delta < 0 or a == 0:
    print("Impossivel calcular")

else:
    x1 = float()
    x2 = float()
    
    if delta == 0:
        x1 = (-b)/(2*a)
        x2 = x1
    
    else:
        x1 = ((-b) + (delta**0.5))/(2*a)
        x2 = ((-b) - (delta**0.5))/(2*a)
        
    print(f"R1 = {x1:.5f}")
    print(f"R2 = {x2:.5f}")