# LA time of day 
hour = int(input("What is the hour in military time? "))

if hour <= 11 and hour >= 0:
    print("Good morning!")
elif hour > 11 and hour <= 16:
    print("Good afternoon!")
elif hour > 16 and hour <= 24:
    print("Good evening!")
else:
    print(f"{hour} is not a military time. Maybe go look up a time chart.")
