#Assignment: Write a Python program to assign grades to students at the end of the year. The program must do the following:
#1. Ask for a student number.
#2. Ask for the student’s tutorial mark.
#3. Ask for the student’s test mark.
#4. Calculate whether the student’s average so far is high enough for the student
#to be permitted to write the examination. If the average (mean) of the tutorial and test marks is lower than 40%, the student should automatically get an F grade, and the program should print the grade and exit without performing the following steps.
#5. Ask for the student’s examination mark.
#6. Calculate the student’s final mark. The tutorial and test marks should count
#for 25% of the final mark each, and the final examination should count for the remaining 50%.
#7. Calculate and print the student’s grade, according to the following table:


StudentNumber=int(input("Enter Student Number : "))
StudentTutorialMarks=int(input("Enter Tutorial Marks out of 100 : "))
StudentTestMarks=int(input("Enter Test Marks of 100 : "))
avg = (StudentTutorialMarks+StudentTestMarks)/2;
if(avg < 40):
	print("Student Number", StudentNumber , "Receives F-Grade")

else:
	TotalMarks = int(input("Enter Total Obtained Marks out of 400 :"))
	percent = (TotalMarks * 100)/400
	print("Student Number", StudentNumber , "Receives", end=" ")
	if (percent > 90):
		print("A-Grade")
	
	elif (percent > 80):
		print("B-Grade")
	
	elif (percent > 70):
		print("C-Grade")
	
	elif (percent > 60):
		print("D-Grade")	
	else :
		print("F-Grade")