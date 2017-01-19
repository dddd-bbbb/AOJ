if __name__ == "__main__":
    cards = {
        'S': [0 for i in range(13)],
        'H': [0 for i in range(13)],
        'C': [0 for i in range(13)],
        'D': [0 for i in range(13)]
    }

    n = input()
    for i in range(int(n)):
        label, num = input().split()
        cards[label][int(num) - 1] = 1

    for i in ['S', 'H', 'C', 'D']:
        for j in range(len(cards[i])):
            if cards[i][j] == 0:
                print('{0} {1}'.format(i, j + 1))
