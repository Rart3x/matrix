from Vector import Vector
from Matrix import Matrix
from Utils import lerp

def main() -> int:
    '''Main method'''

    v = Vector([2, 1])
    v1 = Vector([4, 2])

    v2 = Vector([3, 4])
    v3 = Vector([20, 10])
    v4 = Vector([30, 40])

    m = Matrix([v, v2])
    m1 = Matrix([v3, v4])

    lerp(21, 42, 0.3)
    lerp(v, v1, 0.3)
    lerp(m, m1, 0.5)

if __name__ == '__main__':
    main()