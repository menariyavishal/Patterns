#include<iostream>

using namespace std;
int main()
{
    int row;
    cout<<"Enter row"<<endl;
    cin>>row;

    for(int i=1;i<=row;i++)
    {
        int term =1;
        for(int j=1;j<=i;j++)
        {
            cout<<term<<" ";
            term++;
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=row;i>=1;i--)
    {
        int term =1;
        for(int j=1;j<=i;j++)
        {
            cout<<term<<" ";
            term++;
        }
        cout<<endl;
    }

    return 0;
}