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
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<2*(n-i)-1;k++)
        {
            cout<<k+1;
        }
        cout<<endl;
    }

}
