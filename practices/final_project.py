import random
words = ["Onyx", "Xylaphone", "Glyph", "Syzygy", "Zuzwang", "House", "Dermatoglyphics", "Xebec", "Bdellium", "Grawlix",]
random = random.choice(words)
display = ""
"""
def guessed_letters(letters):
    return (input(f"Guess a singular {letters}: "))

print()"""

print("Instructions: To play hangman, you will be given a word you need to guess(by letter). Every time you guess a letter wrong, one part of a person will be built. If you end up guessing all the letters in the word, you win. However, if you guess too many wrong times and the person is built, you lose.")

guess = input("guess a singluar letter: ")

if guess in random:    #for loop to loop over each letter in word   

if letter == words:   #if letter in guessed list
    print(word)

while loss <= 8:


    '''--------
   |      |
   |      O
   |    \ | /
   |     / \\
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
   |     / 
   |
   --------''')
elif loss == 4:
    print( '''--------
   |      |
   |      O
   |      | 
   |     / \\
   |    
   --------''')
elif loss == 5:
    print('''--------
   |      |
   |      O
   |    \ | 
   |     / \\
   |
   --------''')
elif loss == 6:
    print('''--------
   |      |
   |      O
   |    \ | /
   |     / \\
   |       
   --------''')
elif loss == 7:
    print('''--------
   |      |
   |      O
   |    \ | /
   |     / \\
   |    -   
   --------''')
elif loss == 8:
    print( '''--------
   |      |
   |      O
   |    \ | /
   |     / \\
   |    -   -
   --------''')
    print("Wow. Eight guesses and you still lost! You have hung hangman.")
    break
"""while True:

    guess = input("Guess a singular letter: ").strip().lower()
    if guess == letter:

"""
# need to figure out how to check letters in word and display them