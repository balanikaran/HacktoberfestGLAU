t = int(input())
for _ in range(t):
    nk = list(map(int, input().split()))
    n = nk[0]
    k = nk[1]
    car = list(map(int, input().split()))
    fine = list(map(int, input().split()))
    sum = 0
    if k%2==0:
        for i in range(0, n):
            if car[i]%2!=0:
                sum += fine[i]
    else:
        for i in range(0, n):
            if car[i]%2==0:
                sum += fine[i]
    
    print(sum)