#If, else e Elif.
nome = str(input("Qual o é seu nome? "))
if nome == "Matheus":
    print("Que nome bonito!")
elif nome == "Pedro" or nome == "Maria" or nome == "Paulo":
    print("Seu nome é bem popular no Brasil!")
elif nome in "Ana Cláudia Jéssia Juliana":
    print("Belo nome feminino")
else:
    print("Seu nome é bem normal.")
print("Tenha um bom dia, {}!".format(nome))