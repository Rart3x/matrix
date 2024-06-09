class Vector:
    '''Vector class'''

    def __init__(self, vec):
        '''Vector Constructor'''

        self.vec = vec

    def add(self, oth):
        '''Vector ADD method'''

        if (not isinstance(oth, Vector)):
            return print("Error: arguments need to be Vector")
        if (self.size() != oth.size()):
            return print("Error: Vector must have the same size")

        self.vec = [self.vec[i] + oth.vec[i] for i in range(self.size())]

        return self

    def dot(self, oth):
        '''Vector DOT method'''

        values = []

        if (not isinstance(oth, Vector)):
            return print("Error: arguments need to be vector")
        if (self.size() != oth.size()):
            return print("Error: Vector must have the same size")

        for i in range(self.size()):
            values.append(self.vec[i] * oth.vec[i])
        
        return sum(values)

    def scl(self, scl: float | int):
        '''Vector SCALAR method'''

        if (not isinstance(scl, (float, int))):
            return print("Error: scalar must be float or integer")

        self.vec = [self.vec[i] * scl for i in range(self.size())]
        
        return self

    def sub(self, oth):
        '''Vector SUB method'''

        if (not isinstance(oth, Vector)):
            return print("Error: arguments need to be Vector")
        if (self.size() != oth.size()):
            return print("Error: Vector must have the same size")

        self.vec = [self.vec[i] - oth.vec[i] for i in range(self.size())]

        return self

    def print(self):
        
        print("(", end="")
        for i in range(self.size()):
            if (i == self.size() - 1):
                print(self.vec[i], end="")
            else:
                print(self.vec[i], end=", ")
        print(")")

    def size(self):
        return len(self.vec)
