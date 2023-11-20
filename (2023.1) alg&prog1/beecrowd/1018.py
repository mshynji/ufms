'''
Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas)
no qual o valor pode ser decomposto. As notas consideradas são de
100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.
'''

valor = int(input())

print(valor)
print(f"{valor//100} nota(s) de R$ 100,00")
valor = valor%100
print(f"{valor//50} nota(s) de R$ 50,00")
valor = valor%50
print(f"{valor//20} nota(s) de R$ 20,00")
valor = valor%20
print(f"{valor//10} nota(s) de R$ 10,00")
valor = valor%10
print(f"{valor//5} nota(s) de R$ 5,00")
valor = valor%5
print(f"{valor//2} nota(s) de R$ 2,00")
valor = valor%2
print(f"{valor} nota(s) de R$ 1,00")