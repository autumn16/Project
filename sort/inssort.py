# 2020 3 20
# Insertion sort implementation using Python

lib = [9,25,40,36,1,8]

def inssort(lib):
    for i in range(0,len(lib)-1):
        j = i+1
        while(lib[j]<lib[i]):
            lib[j],lib[i] = lib[i],lib[j]
            j-=1
            i-=1
            if(i<0): break

inssort(lib)
print(lib)