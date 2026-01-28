# LA Financial Calculator

income = input("What is your monthly income: $")

rent = input("What is your monthly rent/mortgage: $")

utilities = input("What is your monthly utilities: $")

groceries = input("What is your monthly groceries: $")

transportation = input("What is your monthly transportation: $")

print("Your income is", income, "and that is", (rent/income)*100, "of your income")
print("Your utilities are", utilities, "and that is", (utilities/income)*100, "of your income")
print("Your groceries are", groceries, "and that is", (groceries/income)*100,"of your income")
print("Your transportation is", transportation)