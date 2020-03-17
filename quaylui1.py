n=input()
n=int(n)
arr = [0]*10
check = [1]*10

def rPrint():
    for i in range (1,n+1):
        print(arr[i], end='')
    print()

def rHandle(i):
    for j in range(1,n+1):
        if(check[j]==1):
            arr[i]=j
            if(i==n): rPrint()
            else:
                check[j]=0
                rHandle(i+1)
                check[j]=1

rHandle(1)
