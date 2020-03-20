# 2020 3 20 
# Binary search implementation using Python 

lib = [1,8,9,25,36,40]
num = 25 # num to check 
left = 0
right = len(lib)
#print(right)

def binsearch(lib,left,right,num):
    if(right>=left):
        mid = int((left+right-1)/2)
        if(lib[mid]==num): return mid
        if(lib[mid]>num): return binsearch(lib,left,mid-1,num)
        if(lib[mid]<num): return binsearch(lib,mid+1,right,num)
    return -1

if(binsearch(lib,0,right-1,num)==-1): print("number not found")
else: print("number found")