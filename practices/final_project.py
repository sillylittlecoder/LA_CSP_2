import random
words = ["onyx", "xylaphone", "glyph", "syzygy", "zuzwang", "house", "dermatoglyphics", "xebec", "bdellium", "grawlix",] # list of random words
word = random.choice(words) # picks a random word

print("Instructions: To play hangman, you will be given a word you need to guess(by letter). Every time you guess a letter wrong, one part of a person will be built. If you end up guessing all the letters in the word, you win. However, if you guess too many wrong times and the person is built, you lose.")

let_list = []
loss = 1  

while True:

    guess = input("guess a singular letter: ").lower()
    display = ""

    if guess in let_list:
        print("You've already guessed that!")
    elif display == word:
        print("You won!")
    elif guess not in word:
        loss += 1
        print("Nope, wrong letter!")

    let_list.append(guess)
        
    for letter in word:
        if letter in let_list:
            display += letter
        else:
            display += "_"
    print(display)

    if loss == 1: #all the hang mans and prints if loss condition is met
        print('''              --------
             |      |
             |
             |
             |  
             |
             --------''')
    elif loss == 2:
        print(
        '''--------
   |      |
   |      O
   |
   |
   |
   --------''')
    elif loss == 3:
        print('''
   --------
   |      |
   |      O
   |      |
   |
   |
   --------''')
    elif loss == 4:
        print('''--------
   |      |
   |      O
   |      |
   |     / 
   |
   --------''')
    elif loss == 5:
        print( '''--------
   |      |
   |      O
   |      | 
   |     / \\
   |    
   --------''')
    elif loss == 6:
        print('''--------
   |      |
   |      O
   |    \\ | 
   |     / \\
   |
   --------''')
    elif loss == 7:
        print('''--------
   |      |
   |      O
   |    \\ | /
   |     / \\
   |       
   --------''')
    elif loss == 8:
        print('''--------
   |      |
   |      O
   |    \\ | /
   |     / \\
   |    -   
   --------''')
    elif loss == 9:
        print('''   ---------
   |        |
   |        O
   |      \\ | /
   |       / \\
   |      -    -
   --------
'''
"Wow, eight guesses and you still lost! The word was:", word)
        break