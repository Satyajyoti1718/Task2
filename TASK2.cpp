#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;

int main(){
    time_t t = time(NULL);
    tm *timePtr = localtime(&t); // stores the local time of the computer.

    int seconds = (timePtr->tm_sec);
    int minutes = (timePtr->tm_min);
    int hrs = (timePtr->tm_hour);


while (true){
        system("cls");

        cout << "The digital time is :";
        // This output the message "The digital time is :"

        cout << "      |" << hrs << " : " << minutes << " : " << seconds << " " << endl;
        //increment sec min and hours
        seconds++;
        if (seconds >= 60)
        {
            seconds = 1;
            minutes++;
        }
        // This increases the minutes
        if (minutes >= 60)
        {
            minutes = 0;
            hrs++;
        }
        // This increases the hours
        if (hrs > 24)
        {
            hrs = 00;
        }

        Sleep(1000);
    }

    return 0;
}
