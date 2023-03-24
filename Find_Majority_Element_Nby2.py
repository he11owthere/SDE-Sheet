if __name__ == "__main__":
    um = {}
    n = int(input())
    nums = []
    for i in range(n):
        x = int(input())
        nums.append(x)
    for i in range(n):
        if nums[i] in um:
            um[nums[i]] += 1 
        else:
            um[nums[i]] = 1
    for key, value in um.items():
        if(value > (n//2)):
            print(key)