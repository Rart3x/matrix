from Vector import Vector

class Matrix:
    '''Matrix class'''

    def __init__(self, mat):
        '''Matrix Constructor'''

        if (not all(isinstance(item, Vector) for item in mat)):
            return print("Error: argument need to be Vector")
        
        if (not all(item.size() == mat[0].size() for item in mat)):
            return print("Error: Vector must have the same size")

        self.mat = mat

    def add(self, oth):
        '''Matrix ADD method'''
    
        if (not isinstance(oth, Matrix)):
            return print("Error: arguments need to be Matrix")
        if (self.size() != oth.size()):
            return print("Error: Matrix must have the same size")
        
        for i in range(self.size()):
            self.mat[i].add(oth.mat[i])

        return self.mat

    def scl(self, scl: float | int):
        '''Matrix SCALAR method'''

        if (not isinstance(scl, (float, int))):
            return print("Error: scalar must be float or integer")
        
        for i in range(self.size()):
            self.mat[i].scl(scl)
        
        return self.mat

    def sub(self, oth):
        '''Matrix SUB method'''

        if (not isinstance(oth, Matrix)):
            return print("Error: arguments need to be Matrix")
        if (self.size() != oth.size()):
            return print("Error: Matrix must have the same size")
        
        for i in range(self.size()):
            self.mat[i].sub(oth.mat[i])

        return self.mat

    def print(self):
        '''Matrix print method'''

        for i in range(self.size()):
            self.mat[i].print()

    def size(self):
        '''Matrix size method'''

        return len(self.mat)
