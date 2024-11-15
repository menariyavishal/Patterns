#include<iostream>
using namespace std;
int main()
{
    int row,i,j;
    cout<<"Enter Row no"<<endl;
    cin>>row;
    char alp = 'A';
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<alp<<" ";
        }
        alp++;
        cout<<endl;
    }
    return 0;
}