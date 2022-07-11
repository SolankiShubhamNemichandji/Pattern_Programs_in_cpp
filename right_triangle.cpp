#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value: ";
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i+1;j--)
        {
            cout<<" ";
        }
        for(int k=0;k<=i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

