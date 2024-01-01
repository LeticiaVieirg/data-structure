vet = list(range(10))
print("\n")

for i in range(10):
    print(vet[i], end="")

print("\n")

i = 0  # zera a variavel i

for j in range(9, 3, -1):
    aux = vet[i]
    vet[i] = vet[j]
    vet[j] = aux
    i += 1

for i in range(10):
    print(vet[i], end="")
