#pragma once
#include <iostream>
using namespace std;
class Date
{
public:
	static const size_t CURR_YEAR = 2020;
	void setYear(const size_t& year_);
	void setMonth(const size_t& month_);
	void setDay(const size_t& day_);
	void addDay();
	void print()const;
	const bool yearIsLeap()const;
	const size_t& getDay()const;
	const size_t& getMonth()const;
	const size_t& getYear();
	Date();
	Date(const size_t& day, const size_t month, const size_t& year);
private:
	size_t day, month, year;
};

