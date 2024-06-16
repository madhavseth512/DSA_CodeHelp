#include<iostream>
using namespace std;

int getFact(int n)
{
    //base condition
    if(n==1)
        return 1;
    
    //reursive call
    int prod = n*getFact(n-1);
}

int main()
{
    int n;
    cout<<"Enter the number of which you want to find factorial\n";
    cin >> n;

    int ans = getFact(n);
    cout<<"The factorial of "<<n<<" is "<<ans;
    return 0;
}