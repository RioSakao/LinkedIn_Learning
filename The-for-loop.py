
animals = ( 'bear', 'bunny', 'dog', 'cat', 'velociraptor')

for pet in animals:
    if pet == 'dog': continue #shortcut...skip 'dog'
    if pet == 'velociraptor': break
    print(pet)
else:
    print('you hit the end')

for i in range(5):
    print(i)

