#Utilizando Módulos
from math import sqrt
import emoji
num = int(input("Digite um número: "))
raiz = sqrt(num)
print(emoji.emojize('A raiz de {} é igual a {:.2f} :sunglasses:'.format(num, raiz),use_aliases=True))