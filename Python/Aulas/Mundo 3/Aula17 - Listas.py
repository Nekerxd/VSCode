lanche = ["Hambúrguer", "Suco", "Pizza", "Pudim"]
#Adicionar elemento ao final
lanche.append("Picolé")
#Adicionar elemento no meio
lanche.insert(2,"Cachorro Quente")
#Remover elementos (Elimina o elemento, o valor e refaz os índices)
del lanche[3]
lanche.pop(3)
#Remove o último elemento
lanche.pop()
if "Pizza" in lanche:
    lanche.remove("Pizza")
print(lanche)

valores = list(range(4,11))
print(valores)

valores = [8, 2, 5, 4, 9, 3, 0]
valores.sort()
valores.sort(reverse=True)
len(valores)

num = [2, 5, 9, 1]

for c, v in enumerate(num):
    print(f"Na posição {c} encontrei o valor {v}!")
print("Cheguei ao final da lista.")

a = [2, 3, 4, 7]
b = a[:]
b[2] = 8
print(f"Lista A: {a}")
print(f"Lista B: {b}")