from Matrix import Matrix
from Vector import Vector


def linear_combination(vec, scls):
    '''Linear combination method'''

    values = []

    if (not all(isinstance(item, Vector) for item in vec)):
        return print("Error: argument need to be Vector")
    
    if (not all(item.size() == vec[0].size() for item in vec)):
        return print("Error: Vector must have the same size")

    if (len(vec) != len(scls)):
        return print("Error: Vectors and scalars must have the same size")
        
    for i in range(len(vec)):
        values.append(vec[i].scl(scls[i]).vec)
    
    return Vector(values)


def lerp(obj1, obj2, t):
    '''Linear interpolation method'''

    values = []
    
    if (type(obj1).__name__ != type(obj2).__name__):
        return print("Error: Object must have the same types")
    
    if (type(obj1).__name__ != "float" and type(obj1).__name__ != "int"):
        if (obj1.size() != obj2.size()):
            return print("Error: Object must have the same sizes")

    if (type(t).__name__ != "float"):
        return print("Error: T type must be float")

    if (t < 0 or t > 1):
        return print("Error: T must be between 0 and 1")

    if (type(obj1).__name__ == "Vector"):
        for i in range(obj1.size()):
            values.append(obj1.vec[i] + ((obj2.vec[i] - obj1.vec[i]) * t))
        v = Vector(values)
    elif (type(obj1).__name__ == "Matrix"):
        for i in range(obj1.size()):
            values.append(obj1.mat[i].add((obj2.mat[i].sub(obj1.mat[i])).scl(t)))
        v = Matrix(values)
    else:
        values.append(obj1 + ((obj2 - obj1) * t))
        return print(values)

    return v.print()