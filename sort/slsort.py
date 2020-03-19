# 2020 2 19
# Selection sort implementation using Python

lib = [9,25,40,36,1,8]

def slsort(lib):
    for i in range(0,len(lib)):
        min = lib[i]
        for j in range(i+1,len(lib)):
            if(lib[j]<min): 
                min = lib[j]
                lib[i],lib[j] = lib[j],lib[i]

slsort(lib)
print(lib)




