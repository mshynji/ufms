x = float(input())
k = int(input())

cos_x = 0.0
for i in range(0, k+1, 2):
    fatorial = 1
    for j in range(1, i+1):
        fatorial *= j

    termo = (x**i)/fatorial
    
    if i%4 != 0:
        termo *= (-1)

    cos_x += termo

print(f"{cos_x:.4f}")