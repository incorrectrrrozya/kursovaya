n = int(input())
sum = 0
comp = 1
while n > 0:
    sum += n % 10
    comp *= (n % 10)
    n = n // 10
if (sum > 9) and (sum < 100):
    print("Сумма цифр является двухзначным числом")
else:
    print("Сумма цифр не является двухзначным числом")
if (comp > 99) and (comp < 1000):
    print("Произведение чисел является трехзначным числом")
else:
    print("Произведение чисел не является трехзначным числом")
