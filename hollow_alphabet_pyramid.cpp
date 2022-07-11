#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value: ";
    cin>>n;
    cout<<endl;
    int alp=65;
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i+1;j--)
        {
            cout<<" ";
        }

        for(int k=0;k<2*i+1;k++)
        {
            if(i==0 || i==n-1)
            {
                cout<<(char(alp+count++));
            }
            else{
                if(k==0 || k==2*i)
                {
                    cout<<(char(alp+count++));
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}

