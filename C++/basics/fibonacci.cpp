#include<iostream>
using namespace std;

int main()
{

int n,a=0,b=1,c;
cin>>n;
int i;

cout<<a<<""<<b<<"";

for(i=3;i<=n;i++)
{
c = a+b;

cout<<c<<" ";


a=b;
b=c;



}

}