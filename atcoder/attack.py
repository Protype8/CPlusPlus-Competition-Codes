import math
a,b = [int(i) for i in input("").split(" ")]
res = (a//b)+1 if a%b else a//b
print(res)
