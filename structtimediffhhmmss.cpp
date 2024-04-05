#include <iostream>
#include <sstream>
using namespace std;

struct TIME
{
    int seconds, minutes, hours;
};

void parseTimeString(const string &timeString, struct TIME &timeStruct);
void computeTimeDifference(const struct TIME &t1, const struct TIME &t2, struct TIME &difference);

int main()
{
    struct TIME t1, t2, difference;
    string timeInput;

    cout << "Enter start time (hh:mm:ss): ";
    cin >> timeInput;
    parseTimeString(timeInput, t1);

    cout << "Enter stop time (hh:mm:ss): ";
    cin >> timeInput;
    parseTimeString(timeInput, t2);

    computeTimeDifference(t1, t2, difference);

    cout << endl
         << "TIME DIFFERENCE: " << difference.hours << ":" << difference.minutes << ":" << difference.seconds;

    return 0;
}

void parseTimeString(const string &timeString, struct TIME &timeStruct)
{
    stringstream ss(timeString);
    char delimiter;

    ss >> timeStruct.hours >> delimiter >> timeStruct.minutes >> delimiter >> timeStruct.seconds;
}

void computeTimeDifference(const struct TIME &t1, const struct TIME &t2, struct TIME &difference)
{
    difference.seconds = t1.seconds - t2.seconds;
    if (difference.seconds < 0)
    {
        difference.seconds += 60;
        difference.minutes--;
    }

    difference.minutes = t1.minutes - t2.minutes;
    if (difference.minutes < 0)
    {
        difference.minutes += 60;
        difference.hours--;
    }

    difference.hours = t1.hours - t2.hours;
}
