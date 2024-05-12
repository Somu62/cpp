// Wap to check wether the year is leap year or not
#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>> x;
    if(x%400==0||x%4==0&&x%100!=0)
    {
        cout<<x<< " is leap year ";
    }
    else
    {
        cout<<x<< "is not a leap year";
    }
    return 0;
}