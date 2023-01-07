#include <iostream>
#include <cmath>
using namespace std;

float pyramidVolume(float length,float width,float height,string unit); 

int main()
{
    cout<<pyramidVolume(4, 6, 20, "centimeters")<<" cubic centimeters"<<endl;
    cout<<pyramidVolume(1843, 1823, 923, "kilometers")<<"cubic kilometers"<<endl;
    cout<<pyramidVolume(18, 412, 93, "millimeters")<<"cubic millimeters"<<endl;
}
float pyramidVolume(float length,float width,float height,string unit)
{
float volumeOfPyramid = length*width*height/3;
if(unit=="centimeters")
{
    volumeOfPyramid=volumeOfPyramid*pow(10,6);
}
if(unit=="millimeters")
{
    volumeOfPyramid=volumeOfPyramid*pow(10,9);
}
if(unit=="kilometers")
{
    volumeOfPyramid=volumeOfPyramid/pow(10,9);
}
return volumeOfPyramid;
}