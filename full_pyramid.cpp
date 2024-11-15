#include<iostream>
using namespace std;

int main()
{
    int row,i,j,k,t;
    cout<<"Enter value of Row"<<endl;
    cin>>row;
    
    for( i=0;i<row;i++)
    {
        for( j =1;j<=row-i;j++)
        {
            cout<<" ";

          
        }
        for(k=1;k<=i;k++)
        {
            cout<<k;
            // cout<<"*";
        }
        for(t=i+1;t>=1;t--)
        {
            cout<<t;
        }
        cout<<endl;
    }
    return 0;
}


