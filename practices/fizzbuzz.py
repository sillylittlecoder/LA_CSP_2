# LA fizzbuzz

start = 1

while start <= 50:

    if start%3 == 0 and start%5 == 0:
        print(f"FizzBuzz")
    elif start%5 == 0:
        print(f"Buzz")
    elif start%3 == 0:
        print(f"Fizz")
    else:
        print(start)
    start += 1