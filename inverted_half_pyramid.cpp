#include<iostream>
using namespace std;

int main()
{
    int i,j,row;
    cout<<"Enter row"<<endl;
    cin>>row;

    for(i=row;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}