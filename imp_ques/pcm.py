phy = int(input("Enter physics marks: "))
chem = int(input("Enter chemistry marks: "))
maths = int(input("Enter mathematics marks: "))

grade = ((phy+chem+maths)/3)*100
if(grade>=90):
    print("A")
elif(grade>=80 and grade<90):
    print("B")
elif(grade>=70 and grade<80):
    print("C")
elif(grade>=60 and grade<70):
    print("D")
elif(grade>=50 and grade<60):
    print("E")
else:
    print("F")
