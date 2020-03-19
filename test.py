n, m, k = map(int,input().split())
size = n*m
lib = list()

for i in range(1,n+1):
    for j in range(1,m+1):
        lib.append(i*j)

lib.sort()
print(lib[k-1])

