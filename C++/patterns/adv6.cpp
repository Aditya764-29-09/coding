#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;

for(int r=1;r<=n;r++)
{
    for(int c=1;c<=n-r;c++)
    {
        cout<<"  ";
    }

    for(int c=1;c<=2*r-1;c++)
    {
        cout<<"*"<<" ";
    }
    
    cout<<endl;
}
for(int r=n;r>=1;r--)
{
    for(int c=1;c<=n-r;c++)
    {
        cout<<"  ";
    }

    for(int c=r;c>=1;c--)
    {
        cout<<"*"<<" ";
    }
    for(int c=2;c<=r;c++)
    {
        cout<<"*"<<" ";
    }
    cout<<endl;
}





}