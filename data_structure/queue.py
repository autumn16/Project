# 2020 3 28
# Queue implementation using array, Python programming language

class Queue:
    def __init__(self):
        self._size = 0
        self.arr = [0]*100
    
    def push(self,value):
        if(self._size==0):
            self.arr[0] = value
            print(value,"is now head")
            self._size+=1
        else:
            self.arr[self._size] = value
            print(value,"successfully pushed into queue")
            self._size+=1

    def pop(self):
        print(self.arr[0],"successfully deleted from queue")
        for i in range(0,self._size):
            self.arr[i] = self.arr[i+1]
        self._size-=1

    def size(self):
        print("Queue size is",self._size)

    def print(self):
        for i in range(0,self._size):
            print(self.arr[i],end=" ")
        print("")

myQ = Queue()
myQ.push(4)
myQ.push(5)
myQ.push(6)
myQ.print()
myQ.pop()
myQ.pop()
myQ.print()
