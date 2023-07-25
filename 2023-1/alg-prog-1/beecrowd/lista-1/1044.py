'''
Leia 2 valores inteiros (A e B). Após, o programa deve mostrar uma mensagem
"Sao Multiplos" ou "Nao sao Multiplos", indicando se os valores lidos são
múltiplos entre si.
'''

a, b = map(int, input().split())

if a > b:
    a, b = b, a;
    
if(b%a == 0):
    print("Sao Multiplos")
else:
    print("Nao sao Multiplos")