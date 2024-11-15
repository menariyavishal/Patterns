#include<iostream>

using namespace std;
int main()
{
    int num;
    cout<<"Enter value"<<endl;
    cin>>num;
    int i,j,k,t;

    for(i=0;i<num;i++)
    {
        for(j=1;j<=num-i;j++)
        {
            cout<<"  ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<"* ";
        }
        for(t=i+1;t>=1;t--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }


    return 0;

}