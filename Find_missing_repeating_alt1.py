nums = [4, 3, 6, 2, 1, 1]
n = len(nums)
sum = (n * (n + 1)) // 2
s1 = 0
s2 = 0
for i in range(n):
    s1 += nums[i]
    s2 += nums[i] * nums[i]
square = (n * (n + 1) * (2 * n + 1)) // 6
s = sum - s1
sq = square - s2
first = sq // s
x = (first + s) // 2
y = first - x
print(x, y)