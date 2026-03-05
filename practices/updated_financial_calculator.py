# LA Updated Financial Calculator

def monthly(money):
   return int(input(f"What is your monthly {money}"))

income = monthly("income? ")
rent_mortgage = monthly("rent/mortgage? ")
utilities = monthly("utilities? ")
groceries = monthly("groceries? ")
transportation = monthly("transportation? ")
savings =round(income*.1,2)

def percent(income, expenses):
    return round((expenses / income) * 100,2)

print("Your rent is $", rent_mortgage, "and that is", percent(income, rent_mortgage), "%", "of your income")
print("Your utilities are $", utilities, "and that is", percent(income, utilities), "%", "of your income")
print("Your groceries are $", groceries, "and that is", percent(income, groceries), "%", "of your income")
print("Your transportation is $", transportation, "and that is", percent(income, transportation), "%", "of your income")
print("You should save $", savings, "which is", percent(income, savings), "%", "of your income")
# divide: part/whole * 100...cost/income * 100