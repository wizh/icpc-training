def petya(s1, s2):
    for a, b in zip(s1.lower(), s2.lower()):
        if a > b:
            return 1
        elif a < b:
            return -1
    return 0

print petya('abcdefg', 'AbCdEfF')
