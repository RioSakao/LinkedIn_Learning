
def main():
    # kitten(Buffy = 'meow', Zilla = 'grr', Angle = 'rawr')
    x = dict(Buffy = 'meow', Zilla = 'grr', Angle = 'rawr')
    kitten(**x)


def kitten(**kwargs):
    if len(kwargs):
        for k in kwargs:
            print(f'Kitten {k} says {kwargs[k]} ')
    else: print('Meow.')

if __name__ == '__main__': main()