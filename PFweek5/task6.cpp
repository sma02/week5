#include <iostream>
using namespace std;

string digitsToWords(int number);

int main()
{
    int number;
    while(true)
    {
        cout<<"Enter a number between 1-99(excluding 11-19): ";
        cin>>number;
        cout<<digitsToWords(number)<<endl;
    }

}
string digitsToWords(int number)
{
    int firstDigit=number%100/10;
    int lastDigit=number%10;
    string numberInWords;
     if(number==10)
    {
        numberInWords="ten";
        return numberInWords;
    }
    if(firstDigit==2)
    {
        numberInWords="twenty";
    }
    if(firstDigit==3)
    {
        numberInWords="thirty";
    }
    if(firstDigit==4)
    {
        numberInWords="fourty";
    }
    if(firstDigit==5)
    {
        numberInWords="fifty";
    }
    if(firstDigit==6)
    {
        numberInWords="sixty";
    }
    if(firstDigit==7)
    {
        numberInWords="seventy";
    }
    if(firstDigit==8)
    {
        numberInWords="eighty";
    }
    if(firstDigit==9)
    {
        numberInWords="ninty";
    }
    if(number>10){
        numberInWords=numberInWords+" ";
    }
    if(lastDigit==1)
    {
        numberInWords=numberInWords+"one";
    }
    if(lastDigit==2)
    {
        numberInWords=numberInWords+"two";
    }
    if(lastDigit==3)
    {
        numberInWords=numberInWords+"three";
    }
    if(lastDigit==4)
    {
        numberInWords=numberInWords+"four";
    }
    if(lastDigit==5)
    {
        numberInWords=numberInWords+"five";
    }
    if(lastDigit==6)
    {
        numberInWords=numberInWords+"six";
    }
    if(lastDigit==7)
    {
        numberInWords=numberInWords+"seven";
    }
    if(lastDigit==8)
    {
        numberInWords=numberInWords+"eight";
    }
    if(lastDigit==9)
    {
        numberInWords=numberInWords+"nine";
    }
    return numberInWords;
}