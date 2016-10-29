if __name__ == '__main__':
    ary = [[[0 for x in range(10)] for y in range(3)] for z in range(4)]

    x = int(input())
    i = 0
    while i < x:
        b, f, r, v = map(int, input().split())
        ary[b-1][f-1][r-1] += v
        i += 1

    j = 0
    for house in ary:
        for floor in house:
            residence_num_str = ""
            for residence_num in floor:
                residence_num_str += " {0}".format(residence_num)
            print(residence_num_str)
        if j < 3:
            print("#" * 20)
        j += 1
