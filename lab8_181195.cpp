#include "Date.h"

Date :: Date()// Default constructor
{
	month = 1;
	date = 1;
	year = 2000;
}
Date :: Date(int m, int d, int y)// Overloaded constructor
{
	if(d<30 && d>0 && m<12 && m>0 && y>1000 && y<9999)
	{	
		date = d;
		month =m;
		year = y;
	}
	else
	{
		month = 1;
		date = 1;
		year = 2000;
	}
}
bool Date :: operator==(const Date& s)//Overloading '==' operator
{
	if(this->date==s.date && this->month==s.month && this->year==s.year)
		return true;
	return false;
}
Date  Date :: operator+(int a)
{
	date = date + a;
	return *this;
}
const Date& Date :: operator=(const Date& d)// Overloading assignment operator 
{
	if(this != &d)
	{
		date = d.date;
		month = d.month;
		year = d.year;
	}
	return *this;

}
Date Date :: operator--()// Pre decrement operator
{
	date = date-1;
	if(date<1)
	{		
		month = month -1
		date = 30;
	
		if(month<1)
		{
			year = year -1;
			month=12;
		}
	}
}
Date Date :: operator--(int s)// Post decrement operator
{
	Date temp = s;
	--(*this);
	return temp;
	
}
int Date :: operator[](int n)
{
	//did not get this

}