// oerators are used for calculations .
// here is the result of operators


#include<iostream>
using namespace std;

int main()
{

int a ,b,c;
cin>>a;
cin>>b;

c= a +b;
cout<<c<<endl;

c=a-b;
cout<<c<<endl;

c=a*b;
cout<<c<<endl;

c=a/b;
cout<<c<<endl;

c=a%b;  // modulo operator is used to tell remainder
cout<<c<<endl;

c=a++;  // post incrementer it is used to increase the value by 1 but before executing next expression 
// the value will not change
cout<<c<<endl;


c=++a; // pre incrementer is used to increase the value by 1 but immediately

cout<<c<<endl;

c=a<b; //bolean operators it give us return value of 0 and 1  0 is for true   1 is for false
cout<<c<<endl;










}