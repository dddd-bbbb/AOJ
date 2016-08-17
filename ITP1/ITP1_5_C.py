def print_chessboard(h, w):
    for col in range(h):
        for row in range(w):
            if col % 2 == 0:
                if row % 2 == 0:
                    print("#", end='')
                else:
                    print(".", end='')
            else:
                if row % 2 == 0:
                    print(".", end='')
                else:
                    print("#", end='')
        print()
    print()

while True:
    h, w = [int(i) for i in input().split(" ")]
    if h == 0 and w == 0: break
    print_chessboard(h, w)
