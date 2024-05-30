#include<iostream>
using namespace std;

void convert_to_binary(int deci_num)
{
    int rem=0;
    while(deci_num!=0)
    {
        rem = deci_num % 2;
        
    }
}

int main()
{
    int n;
    cout<<"Enter the value of number you want to convert\n";
    cin >> n;
    convert_to_binary(n);
    return 0;
}