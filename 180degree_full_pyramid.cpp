#include<iostream>
using namespace std;

int main()
{
    int i,j,row;
    cout<<"enter rows"<<endl;
    cin>>row;

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=row-1;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;

}