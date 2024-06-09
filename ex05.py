from Vector import Vector
from Matrix import Matrix
from Utils import angle_cos


def main() -> int:
    '''Main method'''

    v = Vector([1, 0])
    v1 = Vector([1, 0])
    v2 = Vector([0, 1])
    v3 = Vector([-1, 1])
    v4 = Vector([1, -1])
    v5 = Vector([2, 1])
    v6 = Vector([4, 2])
    v7 = Vector([1, 2, 3])
    v8 = Vector([4, 5, 6])
    v9 = Vector([0, 0, 0])

    print(angle_cos(v, v1))
    print(angle_cos(v1, v2))
    print(angle_cos(v3, v4))
    print(angle_cos(v5, v6))
    print(angle_cos(v7, v8))
    print(angle_cos(v8, v9))

if __name__ == '__main__':
    main()