// Wap to check if the alphabet is constant or vowel
#include<iostream>
using namespace std;
int main()
{

    char x;
    cin>>x;
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
    {
        cout<<x<<" is vowel";
    }
    // else if(x>=0||x<=9)
    // {
    //     cout<<x<<" invalid input";
    // }
    else
    {
        cout<<x<<" constant";
    }
    return 0;
}