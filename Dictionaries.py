
def main():
    animals = { 'Kitten': 'meow', 'puppy': 'ruff!', 'lion': 'grrr',
            'giraffe': 'I am a giraffe!', 'dragon': 'rawr' }

    for k in animals.keys(): print(k)
    print()
    for v in animals.values(): print(v)
    print()
    print_dict(animals)


def print_dict(o):
    for x in o: print(f'{x}: {o[x]}')
    print()
    for k, v in o.items(): print(f'{k}: {v}')

if __name__ == '__main__': main()