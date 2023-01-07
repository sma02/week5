#include <iostream>
using namespace std;

int add(int number1, int number2);
float divide(float number1, float number2);
int isGreater(int number1,int number2);

int main()
{
  int  number1,number2,totalSum;
  float divisionResult;
  cout<<"Enter first number: ";
  cin>>number1;
  cout<<"Enter second number: ";
  cin>>number2;
  totalSum=add(number1,number2);
  cout<<"total sum :"<<totalSum<<endl;
  cout<<"division result: "<<divide(number1,number2)<<endl;
  cout<<isGreater(number1,number2)<<" is  greatest of two numbers entered."<<endl;
}
int add(int number1, int number2)
{
  return number1+number2;
}
float divide(float number1, float number2)
{
  return number1/number2;
}
int isGreater(int number1,int number2)
{
  if(number1>number2)
  {
    return number1;
  }
  if(number1<number2)
  {
    return number2;
  }
  return 0;
}