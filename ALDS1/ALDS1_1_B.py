def gcd(x, y):
    r = x % y
    if r == 0:
        return y
    else:
        return gcd(y, r)

if __name__ == '__main__':
    a, b = map(int, input().split())
    answer = gcd(a, b)
    print(answer)
