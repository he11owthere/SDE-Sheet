import math
def swap(a, b):
    temp = a
    a = b
    b = temp

arr1 = [3,4,6,8]
arr2 = [1,5,7]
n = len(arr1)
m = len(arr2)
gap = math.ceil(float(m + n)/2)
while(gap >= 1):
    i = 0
    j = gap
    while(j < (m + n)):
        if(j < n and arr1[i] > arr1[j]):
            swap(arr1[i], arr1[j])
        elif(j >= n and i < n and arr1[i] > arr2[j-n]):
            swap(arr1[i], arr2[j-n])
        elif(j >= n and i >= n and arr1[i-n] > arr2[j-n]):
            swap(arr2[i-n], arr2[j-n])
        i += 1
        j += 1
    if(gap != 1):
        gap = math.ceil(float(gap)/2)
    else:
        break
print(arr1)
print(arr2)
