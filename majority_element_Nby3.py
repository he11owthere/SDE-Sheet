def majorityElement(nums):
    um = {}
    n = len(nums)
    for i in range(n):
        if(nums[i] in um):
            um[nums[i]] += 1
        else:
            um[nums[i]] = 1
    ans = []
    for key, value in um.items():
        if(value > (n//3)):
            ans.append(key)
    return ans
            
if __name__ == "__main__":
    n = int(input())
    nums = []
    for i in range(n):
        x = int(input())
        nums.append(x)
    print(majorityElement(nums))
