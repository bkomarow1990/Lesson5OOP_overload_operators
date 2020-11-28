#include "Date.h"
#include <iostream>
using namespace std;
bool Date::isLeap(const size_t& year)const
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
	if (year_ < CURRENT_YEAR && year_ > OLDEST_YEAR) {
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
const size_t Date::getYear() const
{
	return year;
}
void Date::addOneDay()
{
	size_t DaysInMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (isLeap(year))
	{
		DaysInMonth[1] = 29;
	}
	if (DaysInMonth[month - 1] == day)
	{
		day = 1;
		month++;
		if (month > 12)
		{
			month = 1;
			year++;
		}
	}
	else {
		day++;
	}
}
void Date::minusOneDay()
{
	size_t DaysInMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (isLeap(year))
	{
		DaysInMonth[1] = 29;
	}
	if (day==1)
	{
		if (month!=1)
		{
			month -= 1;
		}
		day = DaysInMonth[month - 1];
		if (month == 1)
		{
			year--;
		}

	}
	else {
		day--;
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
const int Date::howManyDays() const
{
	size_t DaysInMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (isLeap(year))
	{
		DaysInMonth[1] = 29;
	}
	int thisDays = 0;
	thisDays = day + (month * DaysInMonth[month - 1]) + (year * isLeap(year) ? 365 : 366);
	return thisDays;
}
void Date::operator++()
{
	addOneDay();
}
Date Date::operator++(int)
{
	Date old = *this;
	++* this;
	return old;
}
void Date::operator--()
{
	minusOneDay();
}
Date Date::operator--(int)
{
	Date old = *this;
	--* this;
	return old;
}
bool Date::operator==(const Date& other) const
{
	if (day==other.day && month == other.month && year==other.day)
	{
		return true;
	}
	return false;
}
bool Date::operator!=(const Date& other) const
{
	return !(*this == other);
}
bool Date::operator<(const Date& other) const
{
	return howManyDays() < other.howManyDays();
}
bool Date::operator>(const Date& other) const
{
	return howManyDays() > other.howManyDays();
}
Date& Date::operator+=(const int& num)
{
	for (int i = 0; i < num; i++)
	{
		addOneDay();
	}
	return *this;
}
Date& Date::operator-=(const int& num)
{
	for (int i = 0; i < num; i++)
	{
		minusOneDay();
	}
	return *this;
}
Date::Date() {
	day = 1;
	month = 1;
	year = CURRENT_YEAR;
}

Date::Date(const size_t _day, const size_t _month, const size_t _year)
{
	this->setYear(_year);
	this->setMonth(_month);
	this->setDay(_day);
}
