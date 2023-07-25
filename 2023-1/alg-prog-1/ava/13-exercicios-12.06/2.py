def calcDist(planeta1, planeta2):
    x1, y1, z1 = planeta1
    x2, y2, z2 = planeta2

    dist_x = (x1-x2)**2
    dist_y = (y1-y2)**2
    dist_z = (z1-z2)**2

    dist = (dist_x + dist_y + dist_z)**0.5
    return dist



n = int(input())

planetas = []
for _ in range(n):
    x, y, z = map(int, input().split())
    planetas.append([x, y, z])

for i, planeta in enumerate(planetas):
    proximo = 0 if i != 0 else 1

    for j in range(n):
        if i != j:
            dist = calcDist(planetas[i], planetas[j])
            dist2 = calcDist(planetas[i], planetas[proximo])

            if dist < dist2: proximo = j

    dist = calcDist(planetas[i], planetas[proximo])
    if dist <= 20:
        print("Alta")
    elif dist > 20 and dist <= 50:
        print("Media")
    else:
        print("Baixa")
            
