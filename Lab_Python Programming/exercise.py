def sumfunc(n):
    if n ==1:
        return 1
    else:
        return n+sumfunc(n-1)

print(sumfunc(10))