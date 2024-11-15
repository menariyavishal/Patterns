#include<iostream>
using namespace std;

int main()
{
    int i,j,row;
    cout<<"Enter rows"<<endl;
    cin>>row;
    for(i=0;i<row;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"  ";
        }
        for(int k=1;k<=row-i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}