import sys

def main():
    try:
        x = int('foo')
    except ValueError:
        print('I caught a ValueError')
    except ZeroDivisionError:
        print('Don\'t divide by zero')
    except: #default
        print(f'unknown error: {sys.exc_info()}')
    else:
        print('good job')

if __name__ == '__main__': main()