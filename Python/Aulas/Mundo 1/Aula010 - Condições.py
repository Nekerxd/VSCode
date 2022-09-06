#Condições
tempo = int(input('Quantos anos você tem? '))
if tempo >=18:
    print('Você já é maior de idade')
else:
    print('Você ainda é menor de idade')
print('-' * 30)
#If Simplificado
print('Maior de idade' if tempo >=18 else 'Menor de idade')
print('-' * 30)