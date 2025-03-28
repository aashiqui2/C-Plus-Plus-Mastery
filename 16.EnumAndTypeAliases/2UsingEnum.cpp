#include <iostream>
#include <string_view>
using namespace std;
enum class Month {
    Jan, Feb, Mar, Apr,
    May, Jun, Jul, Aug,
    Sep, Oct, Nov, Dec
};

string_view month_to_string(Month month){
    switch (month)
    {
        case Month::Jan : return "January";
        case Month::Feb : return "February";
        case Month::Mar : return "March";
        case Month::Apr : return "April";
        case Month::May : return "May";
        case Month::Jun : return "June";
        case Month::Jul : return "July";
        case Month::Aug : return "August";
        case Month::Sep : return "September";
        case Month::Oct : return "October";
        case Month::Nov : return "November";
        case Month::Dec : return "December";
        default : return "None";
    }
}

int main(){

    Month month {Month::Apr};
    cout << "month : " << month_to_string(month) << endl;
   
    return 0;
}
