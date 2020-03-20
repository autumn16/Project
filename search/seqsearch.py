# 2020 3 20
# Sequential search implementation using Python

lib = [4,5,12,9,8]
size = len(lib)

def seqsearch(lib,size,num):
    for i in range(0,size):
        if(lib[i]==num): return True
    return False

num = 12
if(seqsearch(lib,size,num)==True): print("num found")
else: print("num not found")