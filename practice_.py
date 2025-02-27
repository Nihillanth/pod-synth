"""
import time

start = time.time()
pin = "0909"
i = 0
count = 0
while i != int(pin):
    count += 1
    i += 1
    if i == int(pin):
        print(f'Подобраный пароль >>> {i}')
        print(f'Число итераций >>> {count}')
end = time.time()
print(end - start)


def fac(n):
    the_product = 1
    while n > 0:
        the_product *= n
        n = n - 1
    return the_product

print(fac(5))
"""
def fac_(n):
    if n == 0:
        return 1
    return n * fac_(n - 1)

print(fac_(5))

