#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int r=1;r<=n;r++)
    {
        for(int c=1;c<=r;c++)
        {
            if((r+c) % 2==0)
            {
                cout<<1<<" ";

            }
            else{
                cout<<0<<" ";
            }

        }
        cout<<endl;
    }






}