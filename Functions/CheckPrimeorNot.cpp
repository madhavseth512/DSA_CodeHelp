#include<iostream>
using namespace std;

//can add special cases of 0,1 which would state the output as "Neither Prime nor composite" by using if-else statement.

int checkPrime(int num)
{
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            cout<<"The number entered is not Prime\n";
            break;
        }
        else 
            cout<<"The number entered is Prime\n"; 
            break;   
    }
}

int main()
{
    int n;
    cout<<"Enter the number to be checked\n";
    cin>>n;
    checkPrime(n);
    return 0;
}