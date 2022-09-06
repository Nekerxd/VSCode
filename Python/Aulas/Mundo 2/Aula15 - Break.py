n = s = 0
while n != 999:
    n = int(input("Digite um número: "))
    s += n
print(f"A soma vale {s}")

while True:
    n = int(input("Digite um número: "))
    if n == 999:
        break
    s += n
print(f"A soma vale {s}")