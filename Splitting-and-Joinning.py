
from re import L


s = 'This is a long stirng with a bunch of words in it.'
# print(s.split())
# print(s.split('i'))

l = s.split()
s2 = ' -- '.join(l)
print(s2)