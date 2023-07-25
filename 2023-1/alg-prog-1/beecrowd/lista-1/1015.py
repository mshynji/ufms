'''
Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer
no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas
decimais após a vírgula, segundo a fórmula:
'''

x1, y1 = map(float, input().split())
x2, y2 = map(float, input().split())

distancia =(((x1 - x2)**2) + ((y1 - y2)**2))**0.5
print(f"{distancia:.4f}")