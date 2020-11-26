#include "Date.h"
#include <iostream>
using namespace std;
void Date::setYear(const size_t& year_)
{
	if (year >= CURR_YEAR - 16)
		year = year_;
}
void Date::setMonth(const size_t& month_)
{
		if (month_ <= 12 && month_ >= 1) {
			month = month_;
		}
		else {
			cout << "You enter inccrect data" << endl;
			cout << "Enter date";
			int temp;
			cin >> temp;
			setMonth(temp);

		}

}
void Date::setDay(const size_t& day_)
{
		size_t DaysInMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
		if (day_ <= DaysInMonth[this->month] && day!=0) {
			this->day = day_;
		}
		else if (year % 4 != 0 && year % 100 == 0 || year % 400 != 0) {
			if (day <= 29 && month == 2) {
				this->day = day_;
			}
			else if (day_ <= DaysInMonth[month]) {
				this->day = day_;
				this->day = day_;
			}
		}
		else {

			cout << "You enter inccrect data" << endl;
			cout << "Enter date";
			size_t temp;
			cin >> temp;
			setDay(temp);

		}
}

void Date::addDay()
{
	size_t DaysInMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (yearIsLeap())
	{
		DaysInMonth[1] = 29;
	}
	if (DaysInMonth[month-1]== day)
	{
		day=1;
		month++;
		if (month>12)
		{
			month = 1;
			year++;
		}
	}
	else {
		day++;
	}
	//this->day += 1;
}

void Date::print() const
{
	cout << "Day: " << day <<endl;
	cout << "Month: " << month << endl;
	cout << "Year: " << year << endl;
}

const bool Date::yearIsLeap() const
{
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

const size_t& Date::getDay() const
{
	return day;
}

const size_t& Date::getMonth() const
{
	return month;
}

const size_t& Date::getYear()
{
	return year;
	// TODO: insert return statement here
}

Date::Date()
{
	day = 1;
	month = 1;
	year = CURR_YEAR;
}

Date::Date(const size_t& day_, const size_t&month_, const size_t& year_)
{
	setDay(day);
	setMonth(month);
	setYear(year);
}
