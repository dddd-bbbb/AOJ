n, m = map(int, input().split())
A = [list(map(int, input().split())) for i in range(n)]
b = [int(input()) for i in range(m)]

for i in range(n):
    print(sum([p * q for p, q in zip(A[i], b)]))
