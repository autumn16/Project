# 2020 3 19 
# Bubble sort implemetation using Python

lib = [9,25,40,36,1,8]

def bbsort(lib):
    for i in range(0,len(lib)):
        for j in range(0,len(lib)-i-1):
            if(lib[j+1]<lib[j]): lib[j+1],lib[j] = lib[j],lib[j+1]

bbsort(lib)
print(lib)