from Vector import Vector
from Matrix import Matrix


def main() -> int:
    '''Main method'''

    v = Vector([1, 2, 3, 4, 5])
    v1 = Vector([1, 2, 3, 4, 5])

    print("Vector")
    
    v.print()

    v.add(v1)

    print("Vector ADD method")

    v.print()

    v.scl(10)

    print("Vector SCL method")

    v.print()

    v.sub(v1)

    print("Vector SUB method")

    v.print()

    m = Matrix([v, v1])
    m1 = Matrix([v, v1])

    print("\n")
    print("Matrice")

    m.print()

    m.add(m1)
    
    print("Matrice ADD method")

    m.print()
    
    m.scl(10)
    
    print("Matrice SCL by 10")

    m.print()

    m.sub(m1)

    print("Matrice SUB method")

    m.print()


if __name__ == '__main__':
    main()