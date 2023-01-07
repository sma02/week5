#include <iostream>
using namespace std;

string evenishOddish(int number);
int main()
{
  int number;
  while(true)
  {
    cout<<"Enter a five digit number: ";
    cin>>number;
    cout<<"The number is "<<evenishOddish(number)<<endl;
  }
}
string evenishOddish(int number)
{
  int sumOfDigits=(number%10)+(number%100/10)+(number%1000/100)+(number%10000/1000)+(number%100000/10000);
  bool isOddish=sumOfDigits%2;
  if(isOddish==true)
  {
    return "Oddish";
  }
  if(isOddish==false)
  {
    return "Evenish";
  }
}