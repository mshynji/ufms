n = int(input())

for i in range(1, n+1):
    saida = ""

    if i%3 == 0: saida += "Fizz"
    if i%5 == 0: saida += "Buzz"
    
    if saida == "": saida = i

    print(saida)