import math

t= int(input())
while t:
    t-=1
    n=int(input())
    if n&1:
        print("0\n")
    else:
        n=n//2+1
        ans=1
        for i in range(1,n):
            ans*=i**2
            ans%=998244353
        print(ans)