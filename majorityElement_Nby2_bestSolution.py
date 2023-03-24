#Problem 15
def majorityElement(nums):
    count = 0
    n = len(nums)
    for i in range(n):
        if(count <= 0):
            element = nums[i]
            count = 0
        if(nums[i] == element):
            count += 1
        else:
            count -= 1
    count = 0
    for i in range(n):
        if(nums[i] == element):
            count += 1
    if(count > n//2):
        return element

if __name__ == "__main__":
    n = int(input())
    nums = []
    for i in range(n):
        x = int(input())
        nums.append(x)
    print(majorityElement(nums))