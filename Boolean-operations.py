
# and... And
# or ... Or
# not ... Not
# in ... Values in set
# not in ... Values not in set
# is ... Same object identity
# is not ... Not same object identity

a = True
b = False
x = ( 'bear', 'bunny', 'tree', 'sky', 'rain ')
y = 'bear'

if y is x[0]:
    print('expression is true')
else:
    print('expression is false')

print(id(y))
print(id(x[0]))