
# x = [ 1, 2, 3, 4, 5 ]
# x[2] = 42


x = (1, 2, 3, 4, 5) # tuple is immutable... can not change it


for i in x:
    print(f' i is {i}')

print('\n')

y = range(5,50,5) #third value is step by
                  # from 5 to 50 step by 5
for i in y:
    print(f' i is {i}')

print('\n')

z = list(range(5)) #mutable using list constructor
z[2] = 42
for i in z:
    print(f'i is {i}')

print('\n')

m = { 'one': 1, 'two': 2, 'three':3, 'four':4, 'five':5 } 
# dictionary is mutable
m['three'] = 42
for k, v in m.items():
    print(f'k is {k}, v is {v}')

