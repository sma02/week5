#include <iostream>
using namespace std;

string digitsToWords(int number);

void stateOfPool(float poolTotalVolume,float pipeFlowRate1,float pipeFlowRate2,float hoursWorkerAbsent);
int pipeContributionPercentage(float pipeFlowRate,float volumeFilledPercentage,float hoursWorkerAbsent);
int main()
{
    while(true){
        float poolTotalVolume, pipeFlowRate1, pipeFlowRate2, hoursWorkerAbsent;
        cout<<"Enter total volume of pool: ";
        cin>>poolTotalVolume;
        cout<<"Enter flow rate of first pipe: ";
        cin>>pipeFlowRate1;
        cout<<"Enter flow rate of second pipe: ";
        cin>>pipeFlowRate2;
        cout<<"Enter the number of hours in which the worker is absent: ";
        cin>>hoursWorkerAbsent;
        stateOfPool(poolTotalVolume,pipeFlowRate1,pipeFlowRate2,hoursWorkerAbsent);
    }
}
int pipeContributionPercentage(float pipeFlowRate,float volumeFilledPercentage,float hoursWorkerAbsent)
{
    return pipeFlowRate/volumeFilledPercentage*hoursWorkerAbsent*10;
}
void stateOfPool(float poolTotalVolume,float pipeFlowRate1,float pipeFlowRate2,float hoursWorkerAbsent)
{
float volumeFilled=(hoursWorkerAbsent*(pipeFlowRate1+pipeFlowRate2));
float volumeFilledPercentage=volumeFilled/poolTotalVolume*100;
if(volumeFilledPercentage<=100)
{
    cout<<"The pool is "<<volumeFilledPercentage<<"% full ";
    cout<<"Pipe1: "<<pipeContributionPercentage(pipeFlowRate1,volumeFilledPercentage,hoursWorkerAbsent)<<"% ";
    cout<<"Pipe2: "<<pipeContributionPercentage(pipeFlowRate2,volumeFilledPercentage,hoursWorkerAbsent)<<"% ";
    cout<<endl;
}
if(volumeFilledPercentage>100){
    float overflow=volumeFilled-poolTotalVolume;
    cout<<"For "<<hoursWorkerAbsent<<" hours the pool overflows with "<<overflow<<" liters"<<endl;
}
}