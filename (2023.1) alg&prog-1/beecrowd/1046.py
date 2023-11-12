'''
Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo,
sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração
mínima de 1 hora e máxima de 24 horas.
'''

a, b = map(int, input().split())

tempo_decorrido = b - a

if tempo_decorrido <= 0:
    tempo_decorrido = 24 + tempo_decorrido

print(f"O JOGO DUROU {tempo_decorrido} HORA(S)")