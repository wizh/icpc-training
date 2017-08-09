def candies(candies_l):
    candy_types = set()
    for candy_type in candies_l:
       candy_types.add(candy_type)

    return min(len(candies_l)/2, len(candy_types))

cs = [1, 1, 2, 3]
print candies(cs)
