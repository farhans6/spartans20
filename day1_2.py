# -----------Sum of Reverse of a number------
num1 = int(input("Enter number: "))
rev1 = 0
while (num1 > 0):
    rem1 = num1 % 10
    rev1 = (rev1 * 10) + rem1
    num1 = num1 // 10
# print(rev1)

num2 = int(input("Enter number: "))
rev2 = 0
while (num2 > 0):
    rem2 = num2 % 10
    rev2 = (rev2 * 10) + rem2
    num2 = num2 // 10
# print(rev2)

num3 = rev1 + rev2
rev3 = 0
while (num3 > 0):
    rem3 = num3 % 10
    rev3 = (rev3 * 10) + rem3
    num3 = num3 // 10
print(rev3)
