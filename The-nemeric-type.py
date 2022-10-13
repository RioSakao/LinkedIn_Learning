
from decimal import * # *...everything

a = Decimal('.10')
b = Decimal('.30')

x = .1 + .1 + .1 - .3  # don't use float on money
y = a + a + a - b

print('x is {} '. format(x))
print(type(x))

print('y is {} '. format(y))
print(type(y))