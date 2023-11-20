'''
Leia 3 valores inteiros e ordene-os em ordem crescente. No final,
mostre os valores em ordem crescente, uma linha em branco e em seguida,
os valores na sequência como foram lidos.
'''

a, b, c = map(int, input().split())
lista_inicial = [a, b, c]

lista = [i for i in lista_inicial]
for i in range(len(lista_inicial)):
    for j in range(i+1, len(lista_inicial)):
        if lista[i] > lista[j]:
            lista[i] += lista[j]
            lista[j] = lista[i] - lista[j]
            lista[i] = lista[i] - lista[j]
            
for i in lista:
    print(i)
    
print()

for i in lista_inicial:
    print(i)