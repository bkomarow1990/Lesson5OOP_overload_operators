#include "Date.h"
#include <iostream>
using namespace std;
bool Date::isLeap(size_t& year)
{
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}
void Date::setMonth(const size_t& month_) {
	if (month_ >= 1 && month_ <= 12)
	{
		month = month_;
	}
}
void Date::setYear(const size_t& year_) {
	if (year_ < CURRENT_YEAR && year_ < OLDEST_YEAR) {
		year = year_;
	}
}

void Date::setDay(const size_t& day_) {
	size_t dayInMonth[]{ 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (day_ >= 1 && day_ <= dayInMonth[(int)month-1])
	{
		this->day = day_;
	}
	else if (month == 2 && day_ == 29 && isLeap(year)) {
		this->day = day_;

	}
	else {
		cout << "ENTER CORRECT DATE" << endl;
	}
}

void Date::inputDate()
{
	size_t day_, month_, year_;
	cout << "Enter Month" << endl;
	cin >> month_;
	setMonth(month_);
	cout << "Enter Day" << endl;
	cin >> day_;
	setDay(day_);
	cout << "Enter Year" << endl;
	cin >> year_;
	setYear(year);
}

void Date::print()
{
	cout << day << "." << month << "." << year << endl;
}
Date::Date() {
	day = 1;
	month = 1;
	year = CURRENT_YEAR;
}

Date::Date(const size_t _day, const size_t _month, const size_t _year)
{
	this->setDay(_day);
	this->setMonth(_month);
	this->setYear(_year);
}
