def gerarMatrizQuadrada(n: int) -> list[list]:
	caso   = 0  # Caso
	matriz = [] # Gerando base da matriz quadrada
	for _ in range(n):
		linha = [0]*n
		matriz.append(linha)
	
	# Verificando qual o caso da matriz
	if n%2 != 0: # Caso 1: n ímpar
		caso = 1

		# Gerando matriz quadrada em sí
		i = 0
		j = n//2
		
		for k in range(1, (n*n) + 1):
			matriz[i][j] = k

			# movimento circular, muito chique
			next_line = (i-1)%n # Movendo para cima
			next_col  = (j+1)%n # Movendo para a direita

			# Verificando se a próxima "casa" está disponível ou não
			if matriz[next_line][next_col] != 0:
				next_line = (i+1)%n
				next_col = j

			# Movendo para a próxima "casa"
			i = next_line
			j = next_col

	elif n%4 == 0: # Caso 2: n = 4m
		caso = 2

		# Gerando matriz quadrada
		# Descobri esse for no acaso, não sei como
		# Pelo que vi, esse for não tem muita diferença do for aninhado i, j
		# Mas achei essa solução mais chique, então é sobre isso.
		for k in range(n*n): 
			i = k//n
			j = k%n
			matriz[i][j] = (n*i) + (j+1)

			# Verificando se a "casa" faz parte de alguma diagonal
			if i%4 == j%4 or i%4 + j%4 == 3:
				matriz[i][j] = (n*n) + 1 - matriz[i][j]

	else:
		caso = 3
		# O valor de m é bem importante pra calcular a submatriz
		# (aka: não consegui fazer sem isso)
		m = (n-2)//4

		# Gerando submatriz
		submatriz = [["L"]*(n//2) for _ in range(m+1)] + [["U"]*(n//2)] + [["X"]*(n//2) for _ in range(m-1)]

		# Trocando os valores centrais
		submatriz[n//4][n//4] = "U"
		submatriz[(n//4) + 1][n//4] = "L"

		# índices da submatriz
		i = 0
		j = n//4
		for k in range(1, n*n, 4):
			# Convertendo o valor dos índices pra matriz
			I = i*2
			J = j*2

			# Completando a submatriz 2x2 usando o padrão L
			if submatriz[i][j] == "L":
				matriz[I][J+1]   = k
				matriz[I+1][J]   = k+1
				matriz[I+1][J+1] = k+2
				matriz[I][J]     = k+3

			# Completando a submatriz 2x2 usando o padrão U
			elif submatriz[i][j] == "U":
				matriz[I][J]     = k
				matriz[I+1][J]   = k+1
				matriz[I+1][J+1] = k+2
				matriz[I][J+1]   = k+3

			# Completando a submatriz 2x2 usando o padrão X
			elif submatriz[i][j] == "X":
				matriz[I][J]     = k
				matriz[I+1][J+1] = k+1
				matriz[I+1][J]   = k+2
				matriz[I][J+1]   = k+3
			
			# Marcando valor como "já visitado"
			submatriz[i][j] = 0

			# Movimento circular novamente, muito chique n° 2
			next_line = (i-1)%(n//2)
			next_col  = (j+1)%(n//2)

			# Verificando se a próxima posição já foi visitada
			if submatriz[next_line][next_col] == 0:
				next_line = (i+1)%n
				next_col  = j

			# Movendo para a próxima posição
			i = next_line
			j = next_col

	return caso, matriz



def imprimeMatriz(M: list):
        n = len(M)
        for i in range(n):
                for j in range(n):
                        print(M[i][j], end="\t")
                print("")



def main():
	n = int(input())
	caso, matriz = gerarMatrizQuadrada(n)
	print(f"Caso {caso}:")
	imprimeMatriz(matriz)



if __name__ == "__main__":
	main()