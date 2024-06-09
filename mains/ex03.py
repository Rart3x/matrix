from ../Vector import Vector
from ../Matrix import Matrix


def main() -> int:
    '''Main method'''

    v = Vector([1, 2, 3, 4, 5])
    v1 = Vector([1, 2, 3, 4, 5])

    print(v.dot(v1))


if __name__ == '__main__':
    main()