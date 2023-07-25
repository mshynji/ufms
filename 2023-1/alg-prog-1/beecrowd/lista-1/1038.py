'''
Com base na tabela abaixo, escreva um programa que leia o código de um item e a 
quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.

Código     |     Produto     |     Preço
1          |Cachorro-Quente  |    R$ 4.00
2          |X-Salada         |    R$ 4.50
3          |X-Bacon          |    R$ 5.00
4          |Torrada simples  |    R$ 2.00
5          |Refrigerante     |    R$ 1.50
'''

codigo, qnt = map(int, input().split())

preco = 0.00
if codigo == 1:
    preco += 4
elif codigo == 2:
    preco += 4.5
elif codigo == 3:
    preco += 5
elif codigo == 4:
    preco += 2
elif codigo == 5:
    preco += 1.5
    
preco *= qnt

print(f"Total: R$ {preco:.2f}")