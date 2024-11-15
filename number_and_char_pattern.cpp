#include<iostream>
using namespace std;

int main()
{

    int i,j,row,k;
    // char k;
    cout<<"Enter the rows"<<endl;
    cin>>row;
    int count = 1;
    char ch = 'A';

    for(i=1;i<=row;i++)
    {
        count =1;
        ch = 'A';
        for(j=1;j<=i;j++)
        {
            

            if(j%2==1)
            {
                
                cout<<count;
                ++count;
            }
            else
            {
                cout<<ch;
                ch++;
            }

           
        }
        cout<<endl;



        
    }



    return 0;
}