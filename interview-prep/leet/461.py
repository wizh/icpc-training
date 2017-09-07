def hamming_distance(n, m):
    bin_n, bin_m = bin(n)[2:], bin(m)[2:]
    while len(bin_n) != len(bin_m):
        if len(bin_n) > len(bin_m):
            bin_m = '0'+bin_m
        else:
            bin_n = '0'+bin_n
    distance = 0
    for c_n, c_m in zip(bin_n, bin_m):
        distance += c_n != c_m
    return distance

print hamming_distance(1, 4)
