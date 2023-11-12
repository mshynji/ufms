frase = input()

for i in range(26):
    maiusculo = chr(ord('A') + i)
    minusculo = chr(ord('a') + i)

    count = 0
    for letra in frase:
        if not letra.isalnum(): continue

        if letra == maiusculo or letra == minusculo:
            count += 1

    if count != 0:
        print(f"{maiusculo}: {count}")