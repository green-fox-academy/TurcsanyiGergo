#include <iostream>

using namespace std;





// An average Green Fox attendee codes 6 hours daily
// The semester is 17 weeks long
//
// Print how many hours are spent with coding in a semester by an attendee,
// if the attendee only codes on workdays.
//
// Print the percentage of the coding hours in the semester if the average
// work hours weekly is 52

int main()
{
    int daily_coding = 6;
    int semester_length = 17;
    int hours_of_attendee = 0;
    int workdays = 5;
    int average_coding_a_week = 52;
    float percentage = 0;
    percentage = daily_coding * workdays * 100 / average_coding_a_week;

    hours_of_attendee = daily_coding * semester_length * workdays;

    cout.precision(2);

    cout << "An attendee codes "<< hours_of_attendee << " hours in a semester." << endl;

    cout << "The percentage of coding hours: " << fixed << percentage << "%." << endl;

    return 0;
}
