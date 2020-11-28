#pragma once
class Date
{
	private:
		static const size_t CURRENT_YEAR = 2020;
		static const size_t OLDEST_YEAR = 1910;
		bool isLeap(const size_t& year)const;
	public:
		void setMonth(const size_t& month_);
		void setYear(const size_t& year_);
		void setDay(const size_t& day_);
		const size_t getYear()const;
		void addOneDay();
		void minusOneDay();
		void inputDate();
		void print();
		const int howManyDays()const;
		void operator++();
		Date operator++(int);
		void operator--();
		Date operator--(int);
		bool operator==(const Date& other)const;
		bool operator!=(const Date& other)const;
		bool operator<(const Date& other)const;
		bool operator>(const Date& other)const;
		Date& operator+=(const int& num);
		Date& operator-=(const int& num);
		Date();
	Date(const size_t _day,const size_t _month,const size_t _year);
	private:
		size_t day, month, year;
 // end Date
};

