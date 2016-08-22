input()
a = [int(x) for x in input().split(" ")]

for i in range(len(a) - 1, 0, -1):
    print("%d " % a[i], end="")
print("%d" % a[0])
