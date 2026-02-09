import random
words = ["Onyx", "Xylaphone", "Glyph", "Syzygy", "Zuzwang", "House", "Dermatoglyphics", "Xebec", "Bdellium", "Grawlix",]
random = random.choice(words)
"""print(random)
"""

print("Instructions: To play hangman, you will be given a word you need to guess(by letter). Every time you guess a letter wrong, one part of a person will be built. If you end up guessing all the letters in the word, you win. However, if you guess too many wrong times and the person is built, you lose.")
guess = input("Chose a letter: ")


while loss < 5
    '''--------
   |      |
   |      O
   |    \ | /
   |     / \
   |    -   -
   --------'''


if loss == 0:
    print('''--------
             |      |
             |
             |
             |  
             |
             --------''')
elif loss == 1:
    print(
'''--------
   |      |
   |      O
   |
   |
   |
   --------''')
elif loss == 2:
    print('''
   --------
   |      |
   |      O
   |      |
   |
   |
   --------''')
elif loss == 3:
    print('''--------
   |      |
   |      O
   |      |
   |     / \
   |
   --------''')
elif loss == 4:
    print('''--------
   |      |
   |      O
   |    \ | /
   |     / \
   |
   --------''')
elif loss == 5:
    print('''--------
   |      |
   |      O
   |    \ | /
   |     / \
   |    -   -
   --------''')
    print("Lol. U hung him.")
"""while True:

    guess = input("Guess a singular letter: ").strip().lower()
    if guess == letter:

"""