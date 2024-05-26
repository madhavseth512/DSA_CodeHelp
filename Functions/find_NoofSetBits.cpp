#include<iostream>
using namespace std;

//we have used right shift operator and bitwise and operator in this code as the core logic. Any number with a setbit at place value of 1 will
//give output as 1 when operated with bitwise and with 1. 

int get_set_bits(int x)
{
    int counter=0;
    while(x!=0)
    {
        if(x&1==1)
        {
            counter++;
        }
        x=x>>1;
    }
    cout<<"The number of set bits are "<<counter<<endl;
}

int main()
{
    int n;
    //a set bit refers to a specific position within a binary number that has a value of 1
    cout<<"Enter the number for which you want to find number of set bits\n";
    cin >> n;
    get_set_bits(n);
    return 0;
}