count = 0
def merge(nums, i, mid, j):
    global count
    k = mid
    temp = []
    z = i
    while(i < mid and k <= j):
        if(nums[i] <= nums[k]):
            temp.append(nums[i])
            i+=1
        else:
            temp.append(nums[k])
            k+=1
            count += mid-i
    while(i < mid):
        temp.append(nums[i])
        i+=1
    while(k <= j):
        temp.append(nums[k])
        k+=1
        count += mid-i
    for x in range(len(temp)):
        nums[z] = temp[x]
        z+=1
def mergeSort(nums, i, j):
    if(j > i):
        mid = (i + j) // 2
        mergeSort(nums, i, mid)
        mergeSort(nums, mid+1, j)
        merge(nums, i, mid+1, j)
nums = [5,3,2,1,4]
mergeSort(nums, 0, (len(nums)-1))
for i in range(len(nums)):
    print(nums[i], end = " ")
print("\n" + str(count))