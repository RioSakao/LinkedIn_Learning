
# x = 'seven'.capitalize() // Seven
# x = 'seven'.upper() // SEVEN

# x = 'seven "{1:<09}" "{0:>09}" '.format(8,9)
# x = f'seven "{a:<09}" "{b:>09}" '
#       9 space after   9 space before     

a = 8
b = 9
x = f'seven {a} {b}'

print( 'x is {}'.format(x))
print(type(x))

