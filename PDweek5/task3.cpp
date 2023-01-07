#include <iostream>
using namespace std;
float taxCalculator(char type, float price);
int main()
{
float price,finalPrice;
char type;
cout<<"Enter price of vehicle: ";
cin>>price;
cout<<"Enter type of vehicle: ";
cin>>type;
finalPrice=price+taxCalculator(type,price);
cout<<"The final price on a vehicle of type "<<type<<" after adding the tax is "<<finalPrice<<endl;
}
float taxCalculator(char type, float price)
{
    if(type=='m')
    {
        return price*6/100;
    }
    if(type=='e')
    {
        return price*8/100;
    }
    if(type=='s')
    {
        return price*10/100;
    }
    if(type=='v')
    {
        return price*12/100;
    }
    if(type=='t')
    {
        return price*15/100;
    }
}