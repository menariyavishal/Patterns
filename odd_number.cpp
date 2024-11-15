#include<iostream>
using namespace std;

int main()
{
    int i,j,num;
    cout<<"enter the num"<<endl;
    cin>>num;
    int x = 1;

    for(i=1; i<=num; i++)
    {
        x=1;
        for(j=1; j<=i; j++)
        {
            cout<<x;
            x+=2;
        }
        cout<<endl;
    }



    return 0;

}