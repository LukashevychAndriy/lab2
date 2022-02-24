#include "Time.h"
#include <iostream>

using namespace std;

bool Time::setHours(int hours) {
	if (hours >= 0 && hours <= 23) {
		m_hours = hours;
		return true;
	}
	else {
		return false;
	}
}

bool Time::setMinutes(int minutes) {
	if (minutes >= 0 && minutes <= 59) {
		m_minutes = minutes;
		return true;
	}
	else {
		return false;
	}
}

bool Time::setSeconds(int seconds) {
	if (seconds >= 0 && seconds <= 59) {
		m_seconds = seconds;
		return true;
	}
	else {
		return false;
	}
}

void Time::getHours24() const {
	cout << getHours() << " годин " << getMinutes() << " хвилин " << getSeconds() << " секунди" << endl;
}

void Time::getHours12() const {
	string hoursStr;
	
	if (m_hours < 12) {
		hoursStr = std::to_string(getHours()) + " a.m. ";
	}
	else {
		hoursStr = std::to_string(getHours() - 12) + " p.m. ";
	}

	cout << hoursStr << m_minutes << " хвилин " << m_seconds << " секунди" << endl;
}

void Time::Read() {
	int hours;
	int minutes;
	int seconds;

	do {
		cout << "hours = "; cin >> hours;
		cout << "minutes = "; cin >> minutes;
		cout << "seconds = "; cin >> seconds;
	} while (!Init(hours, minutes, seconds));
}

bool Time::Init(int hours, int minutes, int seconds) {
	return setHours(hours) && setMinutes(minutes) && setSeconds(seconds);
}

void Time::Display() const {
	cout << " hours = " << m_hours << endl;
	cout << " minutes = " << m_minutes << endl;
	cout << " seconds = " << m_seconds << endl;
}
