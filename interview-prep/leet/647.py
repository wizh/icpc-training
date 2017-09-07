def palindromic_substrings(s):
    count = 0
    for center in xrange(len(s)*2):
        left, right = center/2, center/2 + center % 2
        while left >= 0 and right < len(s) and s[left] == s[right]:
            count, left, right = count+1, left-1, right+1
    return count

s = "abc"
print palindromic_substrings(s)
