import math

p, a, b, c, d, n = map(int, raw_input().split(' '))
max_val = max_diff = 0

for k in range(1, n+1):
    val = p * (math.sin(a*k + b) + math.cos(c*k + d) + 2)
    max_val = max(max_val, val)
    max_diff = max(max_diff, max_val - val)

print max_diff