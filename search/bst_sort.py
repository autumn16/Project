
class node:
    def __init__(self,value):
        self.data = value
        self.left = None
        self.right = None

class bst:
    def __init__(self):
        self.rsize = 0
        self.root = None
    
    def isEmpty(self):
        if(self.rsize==0): return True
        else: return False
    
    def __insert(self,ptr,value):
        if(self.root==None):
            self.root = node(value)
            print(self.root.data,"added successfully into tree")
        else:
             if(value<self.root.data):
                return self.__insert(self.root.left,value)
             else:
                return self.__insert(self.root.right,value)

    def insert(self,value):
        self.__insert(self.root,value)

tree = bst()
    
tree.insert(4)
tree.insert(3)