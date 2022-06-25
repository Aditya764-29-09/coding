#include <iostream>
using namespace std;

int main()
{
 int a;
 cout <<"enter a natural no : \n";
 cin>>a;
//i want to check if the no is odd or even 

if(a %2 == 0) //first condition == means equal to
{
    cout <<"the no is even ";
}

else 
{
  cout << "the no is odd";
}
   return 0;
}