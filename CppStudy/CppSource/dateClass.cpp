#include <iostream>

class Date
{
	int year_;
	int month_;
	int day_;

public:
	void SetDate(int year, int month, int day)
	{
		year_ = year;
		month_ = month;
		day_ = day;
	}
	void AddDay(int inc)
	{
		day_ += inc;
		if (day_ >= 30)
		{
			month_ += (day_/30);
			day_ %= 30;
		}
	}
	void AddMonth(int inc)
	{
		month_ += inc;
		if (month_ > 12)
		{
			year_ += (month_ / 12);
			month_ %= 12;
		}
	}
	void AddYear(int inc)
	{
		year_ += inc;
	}

	void ShowDate()
	{
		std::cout << year_ << "³â " << month_ << "¿ù " << day_ << "ÀÏ " << std::endl;
	}
};

int main()
{
	Date d;

	d.SetDate(2022, 6, 22);
	d.ShowDate();

	d.AddDay(14);
	d.ShowDate();

	d.AddMonth(6);
	d.ShowDate();

	d.AddYear(12);
	d.ShowDate();

}