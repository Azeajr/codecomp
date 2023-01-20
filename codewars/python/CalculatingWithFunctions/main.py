from functools import partial


def zero(f=lambda: 0):
    if type(f) is partial:
        return f(0)
    return f


def one(f=lambda: 1):
    if type(f) is partial:
        return f(1)
    return f


def two(f=lambda: 2):
    if type(f) is partial:
        return f(2)
    return f


def three(f=lambda: 3):
    if type(f) is partial:
        return f(3)
    return f


def four(f=lambda: 4):
    if type(f) is partial:
        return f(4)
    return f


def five(f=lambda: 5):
    if type(f) is partial:
        return f(5)
    return f


def six(f=lambda: 6):
    if type(f) is partial:
        return f(6)
    return f


def seven(f=lambda: 7):
    if type(f) is partial:
        return f(7)
    return f


def eight(f=lambda: 8):
    if type(f) is partial:
        return f(8)
    return f


def nine(f=lambda: 9):
    if type(f) is partial:
        return f(9)
    return f


def plus(f):
    return partial(lambda x, y: x + y, f())


def minus(f):
    return partial(lambda x, y: y - x, f())


def times(f):
    return partial(lambda x, y: x * y, f())


def divided_by(f):
    return partial(lambda x, y: y // x, f())


# print(plus(one()))
print(one(plus(one())))
print(two(minus(two())))
print(two(times(one())))
print(seven(divided_by(two())))
print(eight(minus(three())))
print(zero(times(zero())))
