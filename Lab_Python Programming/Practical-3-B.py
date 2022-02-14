#!/usr/bin/env python3

#Python Program to Print whether a student result for a course is Pass or Fail based on attendance and marks in that course

marks=[]
attendance=[]
for i in range(0, 4):
	print("Enter marks of Subject", i+1, "out of 100 marks : ", end="")
	marks.append(int(input()))
	print("Enter attendance of Subject", i+1, "out of 100 lectures : ", end="")
	attendance.append(int(input()))
	print("\n")

count=0
flag=0
for i in range(0, 4):
	if attendance[i]>70 and marks[i]>40:
		continue
	else:
		count=count+1
		flag=1

if flag==1:
	print("You failed in", count, "subject/s")
else :
	print("You pass this course by passing all subjects.")