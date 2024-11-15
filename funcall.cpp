#include<iostream>
using namespace std;

void fun(int &a)

{
    cout<<"the value of a is:\n"<<a;



}
int main()
{
    int t;

    cin>>t;
    // *k=&t;
    fun(t);
    return 0;
}