from ../Vector import Vector
from ../Matrix import Matrix
from ../Utils import linear_combination

def main() -> int:
    '''Main method'''

    v = Vector([1, 2, 3, 4, 5])
    v1 = Vector([1, 2, 3, 4, 5])

    linear_combination([v, v1], [10, 20]).print()


if __name__ == '__main__':
    main()