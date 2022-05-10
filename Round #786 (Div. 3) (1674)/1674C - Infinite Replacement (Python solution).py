t = int(input())
for i in range(0, t):
    s = input()
    t = input()
    n=len(s)
    a=len(t)
    if t.find('a') !=-1 :
        if a==1:
            print(1)
        if a>1:
            print(-1)
    else:
        ans = pow(2, n)
        print(ans)