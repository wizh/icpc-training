def hamming_distance(x, y):
    x, y = bin(x)[2:], bin(y)[2:]
    while len(x) != len(y):
        if len(x) < len(y):
            x = '0'+x
        else:
            y = '0'+y
    distance = 0
    for a, b in zip(x, y):
        distance += a != b
    return distance

print hamming_distance(1, 4)
