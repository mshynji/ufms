vetor_a = list(map(float, input().split()))
vetor_b = list(map(float, input().split()))

produto = 0.0
for i in range(len(vetor_a)):
    produto += vetor_a[i] * vetor_b[i]

print(f"{produto:.4f}")