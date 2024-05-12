// Wap to check wether the character is albhabet, digit or special character
#include<iostream>
using namespace std;
int main()
{
    char x;
    cin>>x;

    if((x>='a'&&x<='z')||(x>='A'&&x<='Z'))
    {
        cout<<x<<" Character is Albhabet";

    }
    else if(x>='0'&&x<='9')
    {
        cout<<x<<" Character is number";
    }
    else
    {
        cout<<x<<" Character is special character";
    }
    return 0;
}