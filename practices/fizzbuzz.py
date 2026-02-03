# LA fizzbuzz

start = 1

while start >= 1 and start <= 50:
    print(start)
    start += 1
    if start%3 == 0:
        print(f"Fizz")
    if start%5 == 0:
        print(f"Buzz")
    if start%3 == 0 and start%5 == 0:
        print(f"FizzBuzz")
    