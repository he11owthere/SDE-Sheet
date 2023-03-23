def pow(x, n):
    nn = n
    ans = 1.0
    if(nn < 0):
        nn = nn * (-1)
    while(nn):
        if(nn % 2 == 0):
            x = x * x
            nn //= 2
        else:
            ans = ans * x
            nn -= 1
    if(n < 0):
        ans = 1 / ans
    return ans

if __name__ == "__main__":
    x = int(input())
    n = int(input())
    print(pow(x,n))
