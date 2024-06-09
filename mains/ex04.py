from ../Vector import Vector
from ../Matrix import Matrix


def main() -> int:
    '''Main method'''

    v = Vector([0, 0, 0])
    v1 = Vector([1, 2, 3])
    v2 = Vector([-1, -2])

    print(v.norm_1())
    print(v1.norm_1())
    print(v2.norm_1())

    print("\n")

    print(v.norm())
    print(v1.norm())
    print(v2.norm())

    print("\n")

    print(v.norm_inf())
    print(v1.norm_inf())
    print(v2.norm_inf())

if __name__ == '__main__':
    main()