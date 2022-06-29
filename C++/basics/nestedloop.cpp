//nested loops means loop is combination of two loops



#include<iostream>



using namespace std;

int main()
{
//print all prime nos between  two numbers

cout<<"prime nos between two numbers \n ";
int i;
cout<<" from : \n ";
cin>>i;
int count =0;


int b;

cout<<"till : \n";
cin>>b;

cout<<"the numbers are";
for(i;i<=b;i++) // the first loop for increasing the number
{

for(int k=2;k<=i;k++) // to check prime number
{

   

    if(i%k==0)

    {
       if(k<i)
       {
        break;
       }

       if(k==i)
       {

        cout<<k<<" ";
        ++ count;
        
        
        
        
       }


    }
    


}


}



cout << "\n the total numbers of prime numbers are "<<  count;


}