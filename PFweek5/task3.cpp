#include <iostream>
using namespace std;
bool isSymmetrical(int number);
int main()
{
  int number;
  bool symmetrical;
  while(true)
  {
    cout<<"Enter a three digit number:  ";
    cin>>number;
    symmetrical=isSymmetrical(number);
    if(symmetrical==true)
    {
      cout<<"the number is symmetrical"<<endl;
    }
    if(symmetrical==false)
    {
      cout<<"the number is Not symmetrical"<<endl;
    }
  }
}
bool isSymmetrical(int number)
{
  int firstDigit=number%1000/100;
  int lastDigit=number%10;
  if(firstDigit==lastDigit)
  {
    return true;
  }
  return false;
}