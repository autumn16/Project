# 2020 3 28
# Binary search tree implementation using Python

class node:
    def __init__(self,value):
        self.left = None
        self.right = None
        self.data = value


class binaryTree:
    def __init__(self):
        self.rsize = 0
        self.root = node(None)

    def isEmpty(self):
        if(self.rsize==0): return True
        else: return False

    def insert(self,root, value):
        if(self.root==None):
            self.root = node(value)
            print(self.root.data,"successfully pushed into tree")
        else:
            if(value<self.root.data): self.insert(self.root.left,value)
            if(value>self.root.data): self.insert(self.root.right,value)


myt = binaryTree()
r = node(100)
myt.insert(r,4)
myt.insert(r,2)