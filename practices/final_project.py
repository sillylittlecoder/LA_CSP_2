import random
words = ["Onyx", "Xylaphone", "Glyph", "Syzygy", "Zuzwang", "House", "Dermatoglyphics", "Xebec", "Bdellium", "Grawlix",]
word = random.choice(words)

print("Instructions: To play hangman, you will be given a word you need to guess(by letter). Every time you guess a letter wrong, one part of a person will be built. If you end up guessing all the letters in the word, you win. However, if you guess too many wrong times and the person is built, you lose.")

let_list = []
loss = 0

def singular_letter(user_input):
    if user_input == singular_letter:
        text.replace("-", "{user_input}")




while True:
    display = ""
    for letter in word:
        let_list.append
        
    else:
        loss += 1
    
    
    guess = input("guess a singular letter: ").lower()
    check(guess)


    print(display)

    if letter == display:
        print("You won!")
        break

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
        break
        print("Wow, eight guesses and you still lost! You have hung hangman.")