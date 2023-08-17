basic = float(input("Enter the basic salary: "))
grade = input("Enter the grade: ");
allow = 0

HRA = basic/5.00
DA = basic/2.00

if(grade == 'A'):
	allow = 1700
if(grade == 'B'):
	allow = 1500
if(grade == 'C'):
	allow = 1300
	
PF = (11.00/100.00)*basic

print("Gross salary: ", basic+HRA+DA+allow-PF) 
