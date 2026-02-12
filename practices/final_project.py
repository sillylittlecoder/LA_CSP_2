import random
words = ["Onyx", "Xylaphone", "Glyph", "Syzygy", "Zuzwang", "House", "Dermatoglyphics", "Xebec", "Bdellium", "Grawlix",]
word = random.choice(words)

print("Instructions: To play hangman, you will be given a word you need to guess(by letter). Every time you guess a letter wrong, one part of a person will be built. If you end up guessing all the letters in the word, you win. However, if you guess too many wrong times and the person is built, you lose.")

letter = []
loss = 0
while True:
    display = ""
    
    guess = input("guess a singular letter: ").lower()


    print(display)

    if letter == display:
        print("You won!")
        break

    """if guess not in random: 
        loss += 1"""    

    '''--------
   |      |
   |      O
   |    \\ | /
   |     / \\
   |    -   -
   --------'''
    if loss == 0:
        print('''              --------
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
   |    \\ | 
   |     / \\
   |
   --------''')
    elif loss == 6:
        print('''--------
   |      |
   |      O
   |    \\ | /
   |     / \\
   |       
   --------''')
    elif loss == 7:
        print('''--------
   |      |
   |      O
   |    \\ | /
   |     / \\
   |    -   
   --------''')
    elif loss == 8:
        print("""---------
   |        |
   |        O
   |    \\  | /
   |       / \\
   |      -    -
   --------""")
        print("Wow, eight guesses and you still lost! You have hung hangman.")