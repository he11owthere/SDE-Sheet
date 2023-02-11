nums = [3,1,2,5,4,6,7,5]
um = {}
contains = False
for i in range(len(nums)):
    if(nums[i] == len(nums)):
        contains = True
    if nums[i] in um:
        um[nums[i]] += 1
    else:
        um[nums[i]] = 1
for key in um:
    if um[key] > 1:
       print(key, end = " ")
       nums.remove(key)
       x = key
if(contains == True):
    result = len(nums)
    for i in range(1, len(nums)+1):
        result ^= nums[i-1]
        result ^= i
    print(result)
else:
    print(len(nums)+1)