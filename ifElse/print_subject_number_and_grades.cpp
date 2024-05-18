// Wap to Print number, grade of 5 subjects in cpp  
#include<iostream>
using namespace std;
int main()
{
    int phy, chem, math, hindi, english, total=0, avg=0, per=0;
    cin>>phy;
    cout<<phy<<" enter number of phy";
    cin>>chem;
    cout<<chem<<" enter number of chem";
    cin>>math;
    cout<<math<<" enter number of math";
    cin>>hindi;
    cout<<hindi<<" enter number of hindi";
    cin>>english;
    cout<<english<<" enter number of english";
    total=phy+chem+math+hindi+english;
    cout<<" total marks ="<< total;
    avg=total/5.0;
    per=total*100/500.0;
    cout<<" average marks ="<< avg;
    cout<<" percentage ="<< per;

    if(per>=90)
    {
        cout<<" grade A";
    }
    else if(per>=80)
    {
        cout<<" garde B";
    }
    else if(per>=70)
    {
        cout<<" grade C";

    }
    else if(per>=60)
    {
        cout<<" grade D";
    }
    else if(per>=50)
    {
        cout<<" garde E";
    }
    else
    {
        cout<<" grade F";
    }
    
    return 0;
}