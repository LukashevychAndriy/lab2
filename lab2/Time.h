#pragma once
#include <string>

class Time
{
private:
	int m_hours;
	int m_minutes;
	int m_seconds;

public:
	int getHours() const { return m_hours; }
	int getMinutes() const { return m_minutes; }
	int getSeconds() const { return m_seconds; }

	bool setHours(int);
	bool setMinutes(int);
	bool setSeconds(int);

	void getHours12() const;
	void getHours24() const;

	bool Init(int hours, int minutes, int seconds);
	void Read();
	void Display() const;
};

