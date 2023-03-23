if __name__ == "__main__":
    x = int(input())
    n = int(input())
    nn = n
    if(nn < 0):
        nn = (-1) * nn
    ans = 1.0
    for i in range(nn):
        ans = ans * x
    if(n < 0):
        ans = 1 / ans
    print(ans)