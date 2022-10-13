
def f1(f):
    def f2():
        print('this is before the function call')
        f()
        print('this is after the functon call')
    return f2

@f1 # pass f3 as an argument in f1
def f3():
    print('this is f3')

f3()