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
