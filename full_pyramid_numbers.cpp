#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter value"<<endl;
    cin>>num;
    int i,j,k,t;
    int term =1;

    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num-i;j++)
        {
            cout<<"  ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<term<<" ";
            term++;
        }
        // for(t=)
        cout<<endl;
    }

    return 0;
}