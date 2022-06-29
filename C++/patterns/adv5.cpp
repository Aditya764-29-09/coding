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
        cout<< "  ";
    }

    for(int c=r;c>=1;c--)
    {
        cout<<c<<" ";

    }
     for(int c=2;c<=r;c++)
    {
        cout<<c<<" ";

    }
     
     
    cout<<endl;
}





}