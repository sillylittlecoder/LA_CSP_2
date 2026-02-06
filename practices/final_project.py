print("Instructions: To play hangman, you will be given a word you need to gues(by letter). Every time you guess a letter wrong, one part of a person will be built. If you end up guessing all the letters in the word, you win. However, if you guess too many wrong times and the person is built, you lose.")
print("-----")
print("|")
print("|")
print("|")
print("-----")

words = ["Onyx", "Xylaphone", "Glyph", "Syzygy", "Zuzwang", "House", "Dermatoglyphics", "Xebec", "Bdellium", "Grawlix",]

number = input("Pick a number between 0 and 9: ")

word = (0,9)
while number == (0,9):
    if number == 0:
        word = words[0]
    elif number == 1:
        word = words[1]

print(words)

"""while True:

    guess = input("Guess a singular letter: ").strip().lower()
    if guess == letter:

"""