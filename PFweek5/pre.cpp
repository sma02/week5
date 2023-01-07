#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  float number1,number2,total;
  cout<<"Enter First Number: ";
  cin>>number1;
  cout<<"Enter Second Number: ";
  cin>>number2;
  total = max(number1,number2);
  cout<<total<<" is  greatest of two numbers"<<endl;
  total = min(number1,number2);
  cout<<total<<" is  smallest of two numbers"<<endl;
  total=sqrt(number1);
  cout<<"square root of "<<number1<<" is: "<<total<<endl;
  total=pow(number1,number2);
  cout<<number1<<" to power "<<number2<<" is: "<<total<<endl;
  total=cbrt(number1);
  cout<<"cube root of "<<number1<<" is: "<<total<<endl;
  total=ceil(number1);
  cout<<"ceil of "<<number1<<" is:"<<total<<endl;
    total=floor(number1);
  cout<<"floor of "<<number1<<" is:"<<total<<endl;
}