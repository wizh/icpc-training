def move_zeroes(nums):
    for i in range(1, len(nums)):
        if nums[i] != 0:
            j = i
            while j > 0 and nums[j-1] == 0:
                nums[j], nums[j-1] = nums[j-1], nums[j]
                j -= 1
    return nums

print move_zeroes([0, 0, 1])
