# == NÃO ALTERE ESTA FUNÇÃO ===============
def imprimeMatriz(M: list):
	n = len(M)
	for i in range(n):
		for j in range(n):
			print(M[i][j], end="\t")
		print("")
	
# =========================================