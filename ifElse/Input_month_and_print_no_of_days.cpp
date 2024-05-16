// Wap to input month and print no of days
#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    {
        cout<<m<<" Month has 31 days";
    }
    else if(m==4||m==6||m==9||m==11)
    {
        cout<<m<<" Month has 30 days";
    }
    else if(m==2)
    {
        cout<<m<<" Month has 28 days";
    }
    else
    {
        cout<<m<<" Invalid input";
    }
    return 0;
}