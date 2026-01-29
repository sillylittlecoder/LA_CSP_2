# LA Financial Calculator

income = int(input("What is your monthly income: $"))

rent = int(input("What is your monthly rent/mortgage: $"))

utilities = int(input("What is your monthly utilities: $"))

groceries = int(input("What is your monthly groceries: $"))

transportation = int(input("What is your monthly transportation: $"))

savings = round(income*.1,2)

print("Your rent is $", rent, "and that is %", round(rent / income,2)*100, "of your income")
print("Your utilities are $", utilities, "and that is %", round(utilities / income,2)*100, "of your income")
print("Your groceries are $", groceries, "and that is %", round(groceries / income,2)*100,"of your income")
print("Your transportation is $", transportation, "and that is %", round(transportation / income,2)*100, "of your income")
print("You should be save $", savings, "a month, that is %", round(savings/income,2), "of your income")
print("You have $", (income-rent-utilities-groceries-transportation), "of spending money each month!")