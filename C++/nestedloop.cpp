#include<iostream>
using namespace std;

int main()
{
//print all prime nos between 

int i;
cin>>i;
int b;
cin>>b;
for(i;i<=b;i++)
{

for(int k=2;k<=i;k++){

   

    if(i%k==0)

    {
       if(k<i)
       {
        break;
       }

       if(k==i)
       {

        cout<<k;
        
        
       }


    }
    


}


}






}