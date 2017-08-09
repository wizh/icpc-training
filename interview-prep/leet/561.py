def array_partition(l):
    l = sorted(l)
    ans = 0
    for i in l[::2]:
        ans += i
    return ans

l = [1, 4, 3, 2, 9, 8]
print array_partition(l)
