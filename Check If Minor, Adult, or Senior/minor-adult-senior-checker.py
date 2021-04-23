age = int(input("Enter age: "))

if(age < 18):
    print("Minor.")
else:
    if(age <= 59):
        print("Adult.")
    else: 
        print("Senior.")

