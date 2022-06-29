#include<iostream>
using namespace std;

int main()
{
int n;
int count =1;
cin>>n;

for(int r=1;r<=n;r++)
{

    
    
        for(int j=1;j<=n+1-r;j++)
        {
            cout<<j<<" ";
            count++;
        }
        cout<<endl;

    }
}






