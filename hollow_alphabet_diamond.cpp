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
        int count=0;
        for(int k=0;k<2*i+1;k++)
        {
            if(i==0)
            {
                cout<<(char(alp+count++));
            }
            else
            {
                if(k==0 || k==2*i)
                {
                    cout<<(char(alp+count++));
                }
                else
                {
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        int count=0;
        for(int k=0;k<2*(n-i)-1;k++)
        {
            if(i==n-1)
            {
                cout<<(char(alp+count++));
            }
            else
            {
                if(k==0 || k==2*(n-i)-2)
                {
                    cout<<(char(alp+count++));
                }
                else
                {
                    cout<<" ";
                }
            }

        }
        cout<<endl;
    }
}


