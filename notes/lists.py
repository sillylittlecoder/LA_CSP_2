numbers = [1,2,3,4,5,6,7,6,4,6,5,4,333333]
names = ["Alex", "Julie", "Katie", "Andrew", "Angel", "Prosepina", "Javi"]

names[0] = "Eric"
names.append("Jayshree") #adds to the end of the list
index = names.index("Katie")
names.pop(index)
print(len(names))
print(names)

for name in names:
    print(f"Hello {name}")

for number in numbers:
    print(f"{number} - 10 = {number-10}")

for i in range(20):
    print(f"this is the {i} iteration of this loop")