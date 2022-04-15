#pragma once
class Triad
{
	int year, month, day;
public:
	int get_Year() const { return year; }
	int get_Month() const { return month; }
	int get_Day() const { return day; }

	void set_Year(int year) { this->year = year; }
	void set_Month(int month) { this->month = month; }
	void set_Day(int day) { this->day = day; }

	 bool Init(int year, int month,int day);
	
	 int operator+();
	 int operator++(int N);
	void Display() const;
	void Read();
	
	
};



