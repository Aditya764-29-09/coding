#include<iostream>
using namespace std;

int main(){
int a;
cout<<"enter a number";
cin>>a;
//i have to find if the given no is prime no or not
for(int i=2;i<=a;i++)// here we have to find a counter and thats i here , we have set the limit , we have used increment operator
{

    if(a%i==0)  //checking for remainder 0
    {
        if(i<a) //as soon as remainder is 0 then we check if no is smaller than the given no or not
        {
            cout<<"no is non prime";
            
            break;
            
            
            
        }
        if(i==a) //if no has same factor its non prime
        {

            cout<<"no is  prime";
        }
        

    }
    

}

return 0;
}
