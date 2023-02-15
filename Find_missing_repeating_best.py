def FindMissingRepeating(nums):
    x = 0
    y = 0
    n = len(nums)
    xor1 = 0
    for i in range(n):
        xor1 ^= nums[i]
        xor1 ^= i+1
    set_bit = xor1 & (~(xor1) + 1)
    for i in range(n):
        if(nums[i] & set_bit):
            x ^= nums[i]
        else:
            y ^= nums[i]
        if(i+1 & set_bit):
            x ^= i+1
        else:
            y ^= i+1
    x_count = 0
    for i in range(n):
        if(nums[i] == x):
            x_count += 1
    if(x_count == 0):
        return [y,x]
    else:
        return [x,y]
nums = [3,1,2,5,4,6,7,5]
for x in FindMissingRepeating(nums):
    print(x, end = " ")



