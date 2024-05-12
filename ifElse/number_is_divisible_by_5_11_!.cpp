// Wap to check if number is divisible by 5 and 11
#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x%5==0&&x%11==0)
    {
        cout<<x<<" is divisible by 11 and 5";
    }
    else
    {
        cout<<x<<" is not divisible by 11 and 5";
    }
    return 0;
}