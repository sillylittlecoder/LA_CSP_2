import random #library code someone else wrote, alsways import at the top
start = 18

while start >= 1:
    print(start)
    start -= 2

goose = random.randint(1,20)
count = 1

while count < goose:
    print("Duck")
    count +=1
print("GOOSE!")

number = random.randint(1,25)

while True:
    guess = int(input("Guess a number between 1 and 25: "))
    if guess == number:
        print(f"Wow, that was good! {number} was the number!")
        break #exit the while loop
    elif guess > 25 or guess < 1:
        print(f"Dude, that wasn't an option. You just ruined the game for the both of us!!!")
    elif guess < number:
        print("It's higher")
    else:
        print("It's lower")
