#include<iostream>
#include<cmath>
using namespace std;


//code is not working for three digit and five digit number and nine digit number when we use pow function
//This is happening because of the pow function we are using for making divisor and explicitly typecasting it into int data type for division 
//purposes which ultimately results in precision problems and divisor becomes 99 instead of 100 in case of three digit numbers.

int count_digits(int num)
{
    int count=0;
    for(int i=0;num>0;i++)
    {
        num=num/10;
        count = count+1;
    }
    return count;
}

void printDigits(int x , int y)
{
    int divisor = 1;
    for(int i=1;i<=y-1;i++)
    {
        divisor = divisor*10;
    }
    // double base = 10;
    // int exponent = y-1;
    // int divisor = pow (base,exponent);
    for(int i=0;x>0;i++)
    {
        int isolate_num = x/divisor;
        cout << isolate_num <<endl;
        x=x % divisor;
        divisor = divisor / 10;
    }
}

int main()
{
    int n;
    cout<<"Enter your number\n";
    cin>>n;
    int num_of_digits = count_digits(n);
    printDigits(n,num_of_digits);
    return 0;
}