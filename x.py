
# data initialization
str = input()
lib =["x"]*len(str)
for i in range(0,len(str)): lib[i]=str[i]
#

# main program
def inLib(lib,c,pos):
    for i in range(0,pos):
        if(c==lib[i] or c==lib[i].upper() or c.upper()==lib[i]): return True
    else: return False

def main():
    count=0
    max=0
    for i in range(0,len(str)):
        if(inLib(lib,lib[i],i)==False):
            count+=1
            if(max<count): max=count
        else :
            if(max<count): max=count
            count=1
    print(max)

main()