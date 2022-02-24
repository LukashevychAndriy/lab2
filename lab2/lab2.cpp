#include <iostream>
#include "Time.h"
using namespace std;

Time makeTime(int hours, int seconds, int minutes, bool &isCorrect) {
    Time time;

    isCorrect = time.Init(hours, seconds, minutes);
    if (!isCorrect) {
        cout << "Неправильні дані для створення екземпляру класу Time" << endl;
    }

    return time;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int hours;
    int minutes;
    int seconds;

    cout << "hours = "; cin >> hours;
    cout << "minutes = "; cin >> minutes;
    cout << "seconds = "; cin >> seconds;

    bool isCorrect = true;
    Time time = makeTime(hours, minutes, seconds, isCorrect);

    if (!isCorrect) {
        return 0;
    }

    time.Display();
    time.getHours12();
    time.getHours24();
    return 0;
}