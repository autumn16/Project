# 2020 3 17
# Linked list implementation using Python

class node:
    def __init__(self,data=None):
        self.data = data
        self.next = None

class LList:
    def __init__(self):
        self.head = None
        self.rsize = 0

    # this function is to check whether the list is empty or not
    def isEmpty(self):
        if(self.rsize==0): return True
        else: return False
    
    # this function is to pushback element
    def pushBack(self,value):
        if(self.isEmpty()==True):
            self.head = node(value)
            self.rsize+=1
            print(self.head.data,"is now head")
            self.ptr = self.head
        else : 
            self.ptr.next = node(value)
            self.ptr = self.ptr.next
            self.ptr.next = None
            print(self.ptr.data,"pushed successfully into list")

    # this function is to travel the list and print out value
    def print(self):
        self.ptr = self.head
        while(self.ptr!=None):
            print("This element's value is",self.ptr.data)
            self.ptr = self.ptr.next

    def pushHead(self,value):
        self.ptr = node(value)
        self.ptr.next = self.head
        self.head = self.ptr
        print(self.head.data,"is now head")


x = LList()
x.pushBack(1)
x.pushBack(2)
x.pushBack(3)
x.pushHead(5)
x.print()







