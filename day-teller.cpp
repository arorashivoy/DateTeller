#include<iostream>
#include<string>

using namespace std;
int oddDays, oddYears, oddMonths,oddDigitYear;
int digitYear,digitMonth;
int date,month,year; 
string Day;
char redo;

void Year()
{
	if (year>1800 && year<=1900){
		oddYears=5;
		digitYear=year-1801;
	}
	if (year>1900 && year<=2000){
		oddYears=1;
		digitYear=year-1901;
	}
	if (year>2000){
		oddYears=0;
		digitYear=year-2001;
	}	
}
void DigitYear()
{
	oddDigitYear=2*(digitYear/4)+digitYear-(digitYear/4);
}

void Month()
{
	digitMonth=month-1;
	if (digitYear%4!=0){
		
		if (digitMonth==1)
			oddMonths=3;
		if (digitMonth==2)
			oddMonths=3;
		if (digitMonth==3)
			oddMonths=6;
		if (digitMonth==4)
			oddMonths=1;
		if (digitMonth==5)
			oddMonths=4;
		if (digitMonth==6)
			oddMonths=6;
		if (digitMonth==7)
			oddMonths=2;
		if (digitMonth==8)
			oddMonths=5;
		if (digitMonth==9)
			oddMonths=0;
		if (digitMonth==10)
			oddMonths=3;
		if (digitMonth==11)
			oddMonths=5;
	}
	if (digitYear%4==0){
		
		if (digitMonth==1)
			oddMonths=3;
		if (digitMonth==2)
			oddMonths=4;
		if (digitMonth==3)
			oddMonths=0;
		if (digitMonth==4)
			oddMonths=2;
		if (digitMonth==5)
			oddMonths=5;
		if (digitMonth==6)
			oddMonths=0;
		if (digitMonth==7)
			oddMonths=3;
		if (digitMonth==8)
			oddMonths=6;
		if (digitMonth==9)
			oddMonths=1;
		if (digitMonth==10)
			oddMonths=4;
		if (digitMonth==11)
			oddMonths=6;
	}
}

void DayFind()
{
	oddDays=(oddMonths+oddYears+date+oddDigitYear)%7;
	
	if (oddDays==0)
		Day= "Sunday";
	if (oddDays==1)
		Day= "Monday";
	if (oddDays==2)
		Day= "Tuesday";
	if (oddDays==3)
		Day= "Wednesday";
	if (oddDays==4)
		Day= "Thrusday";
	if (oddDays==5)
		Day= "Friday";
	if (oddDays==6)
		Day= "Saturnday";
}

int main()
{
	cout<<"In this program you can find out the day on which that date occured \n";
	do {
	cout<< "Enter the date, month and year respectively of which you want to know the day it occured with spaces in between them\n (dd mm yyyy)"<<endl;
	cin>>date>>month>>year;
	
	if (date >31)
		throw 69;
	if (month >12)
		throw 69;
	if (year>2018)
		throw 69;

	Year();
	Month();
	DigitYear();
	DayFind();
	cout<<"The date "<<date<<"/"<<month<<"/"<<year<<" occured on "<<Day<<endl<<endl;
	cout<<"If you want to redo press r or R"<<endl;
	cin>>redo;
	cout<<endl<<endl;
	}
	while (redo=='r'||redo=='R');
	return 0;
}
