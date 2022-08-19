#include <iostream>
#include <string>

using namespace std;

class DayOfYear {
    public:
        DayOfYear(int monthValue, int dayValue);
        DayOfYear();
        bool checkDate();
        string output();
        bool equals(DayOfYear day);
        int month;
        int day;
};

int main() {

    int month, day;
    DayOfYear today, birthday;

    while(1) {
        cout << endl;
        cout << "#########################################" << endl;
        cout << "Enter today's date:" << endl;
        cout << "Enter month as a number: ";
        cin >> month;
        cout << "Enter the day of the month: ";
        cin >> day;
        cout << "#########################################" << endl;

        today = DayOfYear(month, day);

        if(today.checkDate())
            break;
        else
            cout << "Please check the value to be appropriate" << endl;
    }

    while(1) {
        cout << endl;
        cout << "#########################################" << endl;
        cout << "Enter your birthday:\n";
        cout << "Enter month of the month: ";
        cin >> month;
        cout << "Enter the day of the month: ";
        cin >> day;
        cout << "#########################################" << endl;

        birthday = DayOfYear(month, day);

        if(birthday.checkDate())
            break;
        else
            cout << "Please check the value to be appropriate" << endl;

        cout << endl;
    }

    cout << "Your birthday is " << birthday.output() << " " << birthday.day << endl;
    if(today.equals(birthday)) {
        cout << "Happy Birthday!\n";
    } else {
        cout << "Happy Unbirthday!\n";
    }


    return 0;
}

DayOfYear :: DayOfYear(int monthValue, int dayValue) : month(monthValue), day(dayValue) {}

DayOfYear :: DayOfYear() : month(1), day(1) {}

bool DayOfYear :: checkDate() {
    
    if(month < 1 || month > 12 || day < 1) {
        return false;
    }

    if(month == 2) {
        if(day > 29)
            return false;
        else
            return true;
    }
    
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        if(day > 31)
            return false;
        else
            return true;            
    }

    if(month == 4 || month == 6 || month == 9 || month == 11) {
        if(day > 30)
            return false;
        else
            return true;
    }

    return false;
}

string DayOfYear :: output() {
    switch(month) {
        case 1: return "January";
        case 2: return "Feburary";
        case 3: return "March";
        case 4: return "April";
        case 5: return "May";
        case 6: return "June";
        case 7: return "July";
        case 8: return "August";
        case 9: return "September";
        case 10:    return "October";
        case 11:    return "November";
        case 12:    return "December";
        default:    return "MONTH_ERROR";
    }
}

bool DayOfYear :: equals(DayOfYear dayOfYear) {
    if(month == dayOfYear.month && day == dayOfYear.day)
        return true;
    else
        return false;
}
