#pragma once
class Date
{
	private:
		static const size_t CURRENT_YEAR = 2020;
		static const size_t OLDEST_YEAR = 1910;
		bool isLeap(size_t& year);
	public:
		void setMonth(const size_t& month_);
		void setYear(const size_t& year_);
		void setDay(const size_t& day_);
		void inputDate();
		void print();
		Date();
	Date(const size_t _day,const size_t _month,const size_t _year);
	private:
		size_t day, month, year;
 // end Date
};

