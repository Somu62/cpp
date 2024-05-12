// WAP to chck if the character is albhabet or not 
#include<iostream>
using namespace std;
int main()
{
    char x;
    cin>> x;
    if((x>='a'&&x<='z')||(x>='A'&&x<='Z'))
    {
        cout<<x<<" character is Alphabet";
    }
    else
    {
        cout<<x<<" character is not Alphabet";
    }
    return 0;
}