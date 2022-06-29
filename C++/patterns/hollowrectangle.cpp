#include<iostream>
using namespace std;

int main()
{


int row , column;
cin>>row>>column;
for(int i=1;i<=row;i++)//yaha rows ki loop
{
for(int j=1;j<=column;j++) // yaha column ki loop
{

    if(i==1||i==row||j==1||j==column) //  only need to have full column fill in the first and the last row. That is why we are using.The logical operator or
    {

           cout<<"*"; //yaha maine 1condition lagayi hai row wise aur column wise jaha meko stars cahiye
           //to yaha pe pehle aur last row me aur cilumn me star bharna compulsory hai
    }
    else{

        cout<<" ";
    }
}
cout<<endl;
}



}