#include<iostream>
using namespace std;
int main()
{
     int n;
    cout<<"enter the value: ";
    cin>>n;
    cout<<endl;
    int alp=65;
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i+1;j--)
        {
            cout<<" ";
        }
        for(int k=0;k<2*i+1;k++)
        {
            cout<<(char(alp+k));
        }
        cout<<endl;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<2*(n-i)-1;k++)
        {
            cout<<(char(alp+k));
        }
        cout<<endl;
    }
}

