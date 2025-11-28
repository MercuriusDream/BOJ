def binomial(n, r):
    m = 1
    k = 1

    for j in range(n,n-r,-1):
        m *= j

    for j in range(r,0,-1):
        k *= j
    
    return m//k

def a(n):
    if n == 1:
        return 1
    total = 0
    for i in range(1, n):
        for k in range(0, min(i, (n-i-1)//2) + 1):
            term = (binomial(n+i-1, i) *
                    binomial(i, k) *
                    binomial(n-2*k-2, i-1))
            total += term
    return total // n

x,y = map(int,input().split())
for i in range(1,x+1):
    print(a(i)%y)