#include <iostream>
#include <cmath>
using namespace std;
 int calculateAvailableHours(float hoursNeeded,float days,float numberOfWorkers);
 int main()
 {
    float hoursNeeded=99,days=3,numberOfWorkers=1;
    int result;
    cout<<"Enter the number of hours needed: ";
    cin>>hoursNeeded;
    cout<<"Enter the number of days: ";
    cin>>days;
    cout<<"Enter the number of workers: ";
    cin>>numberOfWorkers;
    result = calculateAvailableHours(hoursNeeded,days,numberOfWorkers);
    if(result>=0){
        cout<<"Yes!"<<result<<" hours left"<<endl;
    }
        if(result<0){
        cout<<"not enough time!"<<(result*-1)<<" hours needed"<<endl;
    }
 }
 int calculateAvailableHours(float hoursNeeded,float days,float numberOfWorkers)
 {
    float actualDays=days*90/100;
    return round((actualDays*numberOfWorkers*10)-hoursNeeded);
 }