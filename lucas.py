lib = [45,2,17,5,2,34,10,6,1,88]
n = int(len(lib))
min = lib[0]

for j in range(0,n):
    for i in range(0,n-1-j):
        if(lib[i+1]<lib[i]): lib[i],lib[i+1] = lib[i+1],lib[i]
    
print(lib)
