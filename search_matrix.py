class Solution(object):
    def searchMatrix(self, matrix, target):
        m = len(matrix[0])
        n = len(matrix)
        i = 0
        j = (m*n) - 1
        while(i <= j):
            mid = (i + j) // 2
            if(mid != 0):
                x = matrix[mid//m][mid%m]
            else:
                x = matrix[0][0]    #Avoiding division by zero
            if(x == target):
                return True
            elif(x < target):
                i = mid + 1
            else:
                j = mid - 1
        return False