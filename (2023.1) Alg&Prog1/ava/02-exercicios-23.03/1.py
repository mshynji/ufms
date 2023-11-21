tamanho, adicional_queijo, adicional_borda = input().upper().split()

preco = 0.0

if tamanho == "P":
    preco += 15.00

    if adicional_queijo == "S":
        preco += 2.50

elif tamanho == "M":
    preco += 18.50

    if adicional_queijo == "S":
        preco += 4.00

elif tamanho == "G":
    preco += 23.00

    if adicional_queijo == "S":
        preco += 4.00

if adicional_borda == "S":
    preco += 5.00

print(f"Total: R$ {preco:.2f}")