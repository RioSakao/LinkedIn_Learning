
from re import I


x = (1, 'two', 3.0, [4, 'four'], 5)
y = [1, 'two', 3.0, [4, 'four'], 5]

print(f'x is {x}')
#print(type(x))
print(id(x[0]))

print(f'x is {y}')
#print(type(y))
print(id(x[0]))

#if x is y:
if isinstance(y, tuple):
    print('tuple')
elif isinstance(y, list):
    print('list')
else:
    print('nope')