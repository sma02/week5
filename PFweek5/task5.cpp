#include <iostream>
using namespace std;

int main()
{
    int hours,mins;
    while(true)
    {
        cout<<"Enter hours: ";
        cin>>hours;
        cout<<"Enter minutes: ";
        cin>>mins;
        mins=mins+15;
        if(mins>=60)
        {
            mins=mins-60;
            hours++;
        }
        if(hours>=24)
        {
            hours=0;
        }
        cout<<"Time after 15 minutes would be "<<hours<<":"<<mins<<endl;
    }
}