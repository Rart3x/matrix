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

    def norm(self) -> float:
        '''Vector Euclidean norm method'''

        value = 0.0
        for i in range(self.size()):
            value += self.vec[i] ** 2
        
        return value ** 0.5 #SQRT()

    def norm_1(self) -> float:
        '''Vector Manhattan norm method'''

        value = 0.0
        for i in range(self.size()):
            value += abs(self.vec[i])

        return value

    def norm_inf(self) -> float:
        '''Vector Supremum norm method'''

        values = []

        for i in range(self.size()):
            values.append(abs(self.vec[i]))

        return float(max(values))

    def print(self):
        '''Vector print method'''

        print("(", end="")
        for i in range(self.size()):
            if (i == self.size() - 1):
                print(self.vec[i], end="")
            else:
                print(self.vec[i], end=", ")
        print(")")

    def size(self):
        '''Vector size method'''

        return len(self.vec)
