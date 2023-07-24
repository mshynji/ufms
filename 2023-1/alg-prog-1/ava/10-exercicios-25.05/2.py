A = list(map(int, input().split()))
B = list(map(int, input().split()))

C, carry, i = [], 0, len(A)-1
while i >= 0:
    digito = A[i] + B[i] + carry
    carry = digito//10
    digito %= 10

    C.append(digito)
    if i == 0 and carry != 0: C.append(carry)

    i -= 1

C = [C[i] for i in range(len(C)-1, -1, -1)]

for i, digito in enumerate(C):
    if i != len(C)-1: print(digito, end=" ")
    else: print(digito)