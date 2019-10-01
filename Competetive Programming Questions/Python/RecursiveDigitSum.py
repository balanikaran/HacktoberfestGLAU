def digitSum(n, k):
    x = sum(map(int, list(n)))
    if k == 1:
        return recursion(x)
    else:
        return recursion(x * k)
    
def recursion(x):
    if x < 10:
        return x
    else:
        return recursion(sum(map(int, list(str(x)))))

if __name__ == "__main__":
    nk = input().split(' ')
    n = nk[0]
    k = int(nk[1])
    result = digitSum(n, k)
    print(result)