'''
Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo.
A seguir calcule a duração do jogo.

Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.
'''

hi, mi, hf, mf = map(int, input().split())

tempo_inicial = hi*60 + mi
tempo_final = hf*60 + mf

if tempo_inicial > tempo_final:
    tempo_total = (24*60-tempo_inicial) + tempo_final
elif tempo_inicial < tempo_final:
    tempo_total = tempo_final - tempo_inicial
else:
    tempo_total = 24*60

total_horas = tempo_total//60
total_minutos = tempo_total%60

print(f"O JOGO DUROU {total_horas} HORA(S) E {total_minutos} MINUTO(S)")
