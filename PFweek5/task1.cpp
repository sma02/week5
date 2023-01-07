#include <iostream>
#include <cmath>
using namespace std;
float heightFromTree(float degrees,float base);
int main()
{
  float degrees;
  float base;
  while(true)
  {
    cout<<"Enter angle of elevation in degrees: ";
    cin>>degrees;
    cout<<"Enter distance from tree in feet: ";
    cin>>base;
    cout<<"height of tree is: "<<heightFromTree(degrees,base)<<endl;
}
}
float heightFromTree(float degrees,float base)
{
  float radians;
  radians=degrees/57.2958;
  return tan(radians)*base;
}
