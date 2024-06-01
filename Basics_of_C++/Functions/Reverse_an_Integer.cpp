#include<iostream>
using namespace std;

int find_digits(int n)
{
    int count = 0;
    while (n>0)
    {
        n=n/10;
        count++;
    }
    return count;
}

void reverse_digits(int n, int digits)
{
    int divisor = 10;
    cout<<"The reversed integer is ";
    while(n>0)
    {
        int ans = n%divisor;
        cout<<ans;
        n=n/10;
    }
}

int main()
{
    int n;
    cout<<"Enter the integer you want to reverse\n";
    cin >> n;

    int digits = find_digits(n);
    reverse_digits(n,digits);
}