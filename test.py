# QN 
#import math

#n = int(input())
n = (map(int,input()))
# get lib element using map
lib = list(map(int, input().strip().split()))
lib.sort()
m1 = 0
while(True):
    if(pow(m1,2) not in lib): 
        print(pow(m1,2))
        break
    else: m1+=1
