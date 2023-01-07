#include <iostream>
#include <cmath>
using namespace std;

float positiveQuadraticFormula(float a,float b,float c);
float negativeQuadraticFormula(float a,float b,float c);
int main()
{
  float a,b,c;
  while(true)
  {
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    cout<<positiveQuadraticFormula(a,b,c)<<",";
    cout<<negativeQuadraticFormula(a,b,c)<<endl;
  }
}
float positiveQuadraticFormula(float a,float b,float c)
{
  float temp0=pow(b,2)-(4*a*c);
  float temp1=sqrt(temp0);
  return ((-b)+temp1)/(2*a);
}
float negativeQuadraticFormula(float a,float b,float c)
{
  float temp0=pow(b,2)-(4*a*c);
  float temp1=sqrt(temp0);
  return ((-b)-temp1)/(2*a);
}