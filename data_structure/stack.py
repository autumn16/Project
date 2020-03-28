# 2020 3 28 
# Stack implementation using array, Python programming language


class Stack:
    def __init__(self):
        self._size = 0
        self.arr = [0]*1000

    def isEmpty(self):
        if(self._size==0): return True
        else: return False

    def push(self,value):
        if(self._size==0): 
            self.arr[0]=value
            print(value,"is now head")
            self._size+=1
        else:
            self._size+=1
            for j in range(self._size,0,-1):
                self.arr[j] = self.arr[j-1]
            self.arr[0] = value
            print(value,"successfully pushed into stack")
            '''
            self.arr[self._size] = value
            print(value,"sucessfully push into stack")
            self._size+=1
            '''

    def peak(self):
        print("Peak value is",self.arr[0])

    def pop(self,value):
        isExist = False
        for i in range(0,self._size):
            if(self.arr[i]==value):
                for j in range(i,self._size):
                    self.arr[j]=self.arr[j+1]
                print(value,"sucessfully deleted from stack")
                isExist = True
                break
            if(i==self._size): print("Value doesn't exist")
        if(isExist==True): self._size-=1

    def print(self):
        for i in range(0,self._size): print(self.arr[i],end=' ')
        print("")
    
    def size(self):
        print("Size of the stack is ",self._size)

myStack = Stack()
myStack.push(4)
myStack.push(5)
myStack.push(6)
myStack.pop(5)
myStack.print()