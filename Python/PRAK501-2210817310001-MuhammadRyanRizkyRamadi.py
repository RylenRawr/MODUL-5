def max_bilangan(r, y, a, n):
    if r > y and r > a and r > n:
        return r
    elif y > r and y > a and b > n:
        return y
    elif a > r and a > y and a > n:
        return a
    else:
        return n
for i in range(3):
    a, b, c, d = input().split()
    a = int(a)
    b = int(b)
    c = int(c)
    d = int(d)
    print(f'{max_bilangan(a, b, c, d)}\n')