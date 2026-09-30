   # Code 1
# name = "musharraf"
# age = int(input("enter your age:"))
# age = age+7
# if age == 16:
#  age = "sechzehn"
#  print(f"ich bin {name} und {age} jahre alt")

# else:
#      print(f"ich bin {name} und {age} jahre alt")

# print(f"{name}", f"{age}" , sep= "\n" )

    # Code 2
# day = int(input("enter the day of your birth:"))
# month = int(input("enter the month of your birth:"))
# year = int(input("enter the year of your birth:"))

# print(f"{day}",f"{month}",f"{year}" ,sep="/" )

   # Code 3
# age = int(input("enter your age:"))
# age = age + 1
# print(f"You will be {age} next year ")

   # COde 4
# a= int(input("enter your 1st no."))
# b= int(input("enter your 2nd no."))
# print(a + b)
 
  # Code 5
# name = "musharraf"
# classs = 11
# school ="paipe"
# print(f"{name}", f"{classs}" , f"{school}" , sep="\n")

   # Code 6
# price = int(input("enter the price of your product:$"))
# quantity = int(input("enter the quantity of your product:"))
# total_bill = price * quantity 
# print(f"{total_bill}$ is the total bill")

   # Code 7
# Vorname = input("enter your firstname: ")
# Nachname = input("enter your lastname: ")
# print(f"{Vorname} {Nachname}")

   # Code 8
# for i in range(1,11):
#       print(i, end=" ")

   # Code 9
# a = "Python"
# b = "java"
# c = "C++"

# print(f"{a}\n\t{b}\n\t\t{c}")
# print(f"{a}\n    {b}\n        {c}")

   # Code 10

# name = input("Enter your name: ")
# age = int(input("Enter your age: "))
# marks = float(input("Enter your marks: "))
# percentage = float(input("Enter your percentage: "))

# print("\n--- Student Information ---")
# print(f"Mein Name ist {name} und ich bin {age} jahre alt\nIch habe passed mit {marks}\nDie percentage ist {percentage}% ")

    # Code 11
# print("\t-----BMI Calculator-------")
# weight = int(input("enter your weight: "))
# height = int(input("enter your height: "))
# c = weight / height**2
# print(f"{c} Kg/m²")

  # Code 12
   # Code 13
# score = int(input("enter your score: "))
# if score >= 40:
#     print("Passed")
# else:
#     print("Fail")
            
   # Code 14
# a = 100
# print(type(a))
# a = str(a)
# print(type(a))

  # Code 15
# a = 5
# b = 2
# c = a / b
# d  = a // b
# print(c)
# print(int(c))
# print(d)

   # Code 16
# a =int(input("no.:"))
# b =int(input("no.:"))
# c = a % b
# print(c)

   # Code 17
# a = int(input("enter your no. "))
# if a%2 == 0:
#     print(f"{a} is even")
# else:
#      print(f"{a} is odd")

   # Code 18
# mark = int(input("enter your marks: "))
# if mark >= 40:
#     print("passed")
# else:
#     print("fail")

    # Code 19
# print("\t----Palindrome Checker-----")
# word = input("write your word: ").lower()
# if word == word[: : -1]:
#     print(f"{word.capitalize()} is a Palindrome")
# else:
#     print(f"{word.capitalize()} is not a Palindrome")

   # Code 20
# name = input("Enter Your Name: ")
# count = 0
# for i in name:
#     count +=1
# print("No. of characters in your name is", count)

   # Code 21
# username = input("Enter Your username: ",)+ "123"
# a = username.strip()
# b = username.lower()
# c = username.upper()
# d = len(username.strip())
# e = username.startswith("S")
# f = username.endswith("123")

# print(f"Original : {username.rjust(5)}")
# print(f"Original : {a}")
# print(f"Lower    : {b}")
# print(f"Upper    : {c}")
# print(f"Length   : {d}")
# print(f"Starts S : {e}")
# print(f"Ends 123 : {f}")
# print("Thanks for wasting your time on this shit")

   # Code 22
# list = ["mango" , "apple" , "banana" , "orange" , "papaya"]
# print(list[0])
# print(list[4])
# list.append("watermelon")
# print(list)
# list.remove("apple")
# print(list)
# print(len(list))

   # Code 23
# marks = []
# for i in range(5):
#     a =int(input('Enter your number: '))
#     marks.append(a)
#     i += 1
# marks.sort()
# print(marks)  ###Ascending order
# print(f"{marks[0]} is the lowest marks")
# marks.sort(reverse=True)
# print(f"{marks[0]} is the highest marks")
# print(sum(marks))
# print(marks) ###Decending order

   # Code 24
# Cart = []
# print("\t------Welcome To Online Shopping--------")
# while(1):
#     a = int(input("1. Add item\n2. Remove Item\n3. View Cart\n4. Exit\nChoose any of the above options: "))
#     if a ==1:
#          print(a)
#          item = input("Enter your item: ")
#          Cart.append(item)
#     elif a== 2:
#             print(a)
#             remove_item =input("Enter the name of the item you want to remove: ")
#             Cart.remove(remove_item)
#     elif a==3:
#         print(a)
#         print("Cart:")
#         for item in Cart:
#              print(item)
#     else:
#         print(a)
#         print("\t------Exiting---------")
#         break 

   # Code 25
# student = (18,95,56)
# a, *middle , last = student
# print(a)
# print(*middle)
# print(last)
# print(student[: : -1])
# print(sum(student))

   # Code 26
# students = (
#     ("Ali",101,92),
#     ("Sara",102,95),
#     ("John",103,88)
# )
# print(students[0][0])
# print(students[1][0])
# print(students[2][0])
# c=((students[0][2] + students[1][2] + students[2][2]) / 3)

# print(f"the average of the marks is {c}")

  # Code 27
# A = {1,2,3,4}

# B = {3,4,5,6}
# print(A.union(B))
# print(A & B)
# print(A - B)
# print(A ^ B)

   # Code 28
# a = set()
# for i in range(11):
#     b = int(input("enter your roll number: "))
#     a.add(b)
#     i+=1

# print("Unique Roll No:")
# print(a)
# print(f"Total Unique No.=", (len(a))) 

   # Code 29

# numbers = [5, 3, 2, 5, 7, 2, 8, 3, 1]
# print("Unique No:")
# print(numbers)
# print(f"Total Unique No.=", (len(numbers))) 
# lst = list(numbers)
# lst.sort()
# print(lst)

   # Code 30
# dict = {
#       "name" : "musharraf",
#       "age" : 16,
#       "city" : "patna",
# }
# dict["age"] = 18
# dict["country"] = "india"
# dict.pop("city")
# print(dict.values())
# print(dict.keys())

    # Code 31
# student = {
#     "name":"Ali",
#     "math":90,
#     "science":95,
#     "english":88
# }
# student["math"] = a = 98
# student["science"] = b = 95
# student["english"] = c = 88
# d = a + b + c
# print(f"The total marks is {d}")

# print(f"The average marks is {d/3}")

# highest_mark = 0
# highest_subj = ""

# for key, value in student.items():
#     if key != "name":
#         if value > highest_mark:
#             highest_mark = value
#             highest_subj = key

# print(f"{highest_subj} got the highest mark = {highest_mark} ")

   # Code 32
# dict = {}
# name = input("Enter your name: ")
# math = int(input("Enter your math no.: "))
# sci = int(input("Enter your sci no.: "))
# eng = int(input("Enter your eng no.: "))

# dict["name"] = name
# dict["math"] = math
# dict["sci"] = sci
# dict["eng"] = eng

# print(f"Student : {dict["name"]}")
# print("\n")
# print(f"Science : {dict["sci"]}")
# print(f"Math : {dict["math"]}")
# print(f"English : {dict["eng"]}")
# total = int(dict["math"]) + int(dict["sci"]) + int(dict["eng"]) 
# print("\n")
# print(f"Total : {total}")
# d = total / 3
# print(f"Average : {d}")
# print("\n")

# highest_subj = ""
# highest_marks = 0

# for k,y in dict.items():
#     if k != "name":
#         if y > highest_marks:
#             highest_subj = k

# print(f" Highest Subject : {highest_subj}")

   # Code 33
# students = {
#     101: {"name":"Ali","marks":90},
#     102: {"name":"Sara","marks":95},
#     103: {"name":"John","marks":88}
# }
# highest_marks = 0
# highest_subj = ""
# for k,y in students.items():
#     if k != "name":
#      if y["marks"] > highest_marks:
#             highest_marks = y["marks"]
#             highest_subj = y["name"]

# print(f"{highest_marks}")

# lowest_marks =   float("inf")
# lowest_subj = ""
# for k,y in students.items():
#     if k != "name":
#         if y["marks"] < lowest_marks:
#          lowest_marks =y["marks"]
#          lowest_subj = y["name"]

# print(f"{lowest_marks}")

# total = students[101]["marks"] + students[102]["marks"] +students[103]["marks"]
# average = total / 3
# print(f'{average}')

  # Code 34
# def square(a):
#     print(a*a)

# square(9)

# square = lambda x: x*x
# print(square(9))

   # Code 35
# def even_oder_odd(a):
#     if a %2 == 0:
#         print(f"{a} is even")
#     else:
#         print(f"{a} is odd")

# even_oder_odd(7)
        
   # Code 36
# def greater(a,b):
#    #  a = int(input("Enter your number: ")) 
#    #  b = int(input("Enter your number: ")) 
#     if a > b:
#         print(f" {a} is greater than {b}")
#     else:
#         print(f" {b} is greater than {a}")
    

# greater( 5 , 9)

   # Code 37
# def factorial(a):
#     fact = 1
#     for i in range (1, a+1):
#       fact*= i
#     print(fact)
# factorial(5)
        
  # Code 38
balance = 0

# def deposit():
#     global balance
#     amount = int(input(" Enter your deposit amount:$ "))
#     if amount < 1000:
#         print(f"${amount} is less than $1000. So can't deposit")
#     else:
#         balance += amount
#         print(f"${amount} is successfully deposited in your account")
#         print(f"Current balance: ${balance}")

# def withdraw():
#     global balance
#     amount = int(input(" Enter your withdrawal amount:$ "))
#     if amount > balance:
#         print("Insufficient balance")
#     else:
#         balance -= amount
#         print(f"${amount} is successfully withdrawn from your account")
#         print(f"Current balance: ${balance}")

# def check_balance():
#     print(f"Current balance: ${balance}")

# while True:
#     a = int(input("1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nChoose any of the above options: "))
#     if a == 1:
#         deposit()
#     elif a == 2:
#         withdraw()
#     elif a == 3:
#         check_balance()
#     elif a == 4:
#         print("\t------Exiting---------")
#         break
#     else:
#         print("Invalid option. Try again.")

      #----------------PHASE-1 COMPLETED---------------#

   # Code 39
# with open("wow.txt" , "r+") as f:
#       f.write("Hello World")
#       print(f"{f.write}")

# with open("wow.txt" , "a+") as f:
#       f.write("\nMusharraf")
#       f.read()

# with open("wow.txt" , "r+") as f:
#    for _ in range (5):
#     a = input("Enter your name: ")
#     f.write(f"\n{a}")
#     f.read()
#     print(f"{f.read()}")

   # Code 40
# try:
#     a = 10 / 0
# except ZeroDivisionError:
#     print("Error: Division by zero is not allowed.")

   # Code 40
# try:
#    a = (input("Enter your username: "))
#    if a!="admin":
#     raise ValueError("Invalid username. Please enter a valid username.")
   
#    b = int(input("Enter your password: "))
#    if b!=1234:
#     raise ValueError("Invalid password. Please enter a valid password.")
#    else:
#      print("Login successful!")
# except ValueError as e:
#     print(e)

   # Code 41
# def add(a,b):
#       return a + b

   # Codee 42
# import random

# a = input("Do you want to roll the dice: ").lower()

# if a == "" or a == "yes":
#     print(random.randint(1, 6))

#     while True:
#         b = input("Do you want to roll the dice again: ").strip.().lower()
#         print("B =", b)

#         if b == "" or b == "yes":
#             print(random.randint(1, 6))

# elif b == "no":
#             print("Tschuss")
#             break

  # Code 43
# import random
# import string

# char = string.ascii_letters+string.ascii_lowercase+string.ascii_uppercase+string.digits+string.punctuation
# lenght = int(input("Enter the Lenght of your password: "))

# password = "".join(random.choice(char) for _ in range(lenght))
# print(password)

  #Code 44
# list1 = [1,2,3,4,5,]
# list2 = [2,5,7]
# for x in list1:          # AI used(Code for making my pythhon to read every element of my list)
#     for y in list2:
#         if x==y:
#          print(x)

   # Code 45
# i = 1
# for i in range(1,101):
#     if i%15 == 0:
#      print("FizzBuzz")

#     elif i%5 == 0:
#      print("Buzz")
    
#     elif i%3 == 0:
#       print("Fizz")

#     else:
#      print(i)

  # Code 46
# a = input("Write Your word: ").lower()
# x = a.count("a")
# y = a.count("e")
# z = a.count("i")
# b = a.count("o")
# c = a.count("u")
# Total = x + y + z + b + c
# print(f"Total no. of vowels in the word is {Total} ")

  # Code 47
# list1 = [1,20,30,24,15]
# list1.sort(reverse=True)
# print(list1[1])

  # Code 48
# dict1 = {"apfel" : 1 , "banane" : 2}
# dict2 = {"apfel" : 3 , "orange" : 7}
# dict3 = {}
# for x,y in dict1.items():
#     for c,z in dict2.items():
#         if x == c:
#           a = dict1[x] + dict2[c]
#           dict3[x] = a
         
        
#     if x not in dict3:
#         dict3[x] = y
#     if c not in dict3:
#         dict3[c] = z
           
# print(dict3)

  # Code 49    # PROJECT
# import webbrowser
# a = input("Enter the name of the website you want to visit: ")
# c =  (f"https://www.{a}.com")
# webbrowser.open(f"https://www.{a}.com")
# import qrcode
# d =  qrcode.make(c)
# d.save("qrcode.png")

# webbrowser.open("qrcode.png")

  # Code 50
# a = input("Write your sentence: ").lower()
# b = "a" and "b" and "c" and "d" and "e" and "f" and "g" and "h" and "i" and "j" and "k" and "l" and "m" and "n" and "o" and "p" and "q" and "r" and "s" and "t" and "u" and "v" and "w" and "x" and "y" and "z"
# if b in a:
#     print("The sentence is a pangram")
# else:
#     print("The sentence isnt a pangram")

  # Code 51
# a = input("write your sentence: ")
# word  = a.split()
# reverse = []
# for i in range(len(word)):
#     reverse.append(word[i][:: -1])
# reverse.reverse()
# b = " ".join(reverse)
# print(f"The output is {b}")

##########--------END---------###########



    
    
    

            




    