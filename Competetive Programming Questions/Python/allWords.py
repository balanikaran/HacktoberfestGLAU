def make(arr,n):
    for k in range(1,n):
        if(k+1>n):
            break
        else: 
            temp = []
            for i in range(len(new[0+k-1])):
                for j in range(len(lst[arr[k]-2])):
                    temp.append(new[0+k-1][i]+lst[arr[k]-2][j])
            new.append(temp)
            del temp
    return new
t = int(input())
lst = [["A","B","C"],["D","E","F"],["G","H","I"],["J","K","L"],["M","N","O"],["P","Q","R","S"],["T","U","V"],["W","X","Y","Z"]]
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    new = []
    new.append(lst[arr[0]-2])
    new = make(arr,n)
    for i in range(len(new[-1])):
        print(new[-1][i].lower(),end=" ")
    del new
    print()