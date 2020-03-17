n = input()
n = int(n)
a = [0]*10

def rOutput():
    for i in range(1,int(n)+1):
        print(a[i], end='')
        #print("THIS")
    print()

def rHandle(i):
    for j in range(1,n+1):
        a[i]=j
        if(i==n): rOutput()
        else: rHandle(i+1)

rHandle(1)


