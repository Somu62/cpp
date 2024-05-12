//Wap  to check if the alphabet is lower or upper case
#include<iostream>
using namespace std;
int main()
{
    char x;
    cin>>x;
    if(x>='a'&&x<='z')
    { 
        cout<<x<<" Character is lower case ";
    }
   else if(x>='A'&&x<='Z')
    {
        cout<<x<<" Character is upper case";
    }
    else
    {
        cout<<x<<" invalid input";
    }
    return 0;
}