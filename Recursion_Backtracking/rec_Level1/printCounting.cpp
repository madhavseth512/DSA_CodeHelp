#include<iostream>
using namespace std;

//Here we have printed the counting through recursion both in the ascending and descending order. 
//Notice how in both functions the position of recursive call and processing are swapped to get different results

//Also if we were given a number of who's digits we have to print then also we should take care of the 
//position of printing the digits(processing) and recursive calling as it would make the difference in output in that problem.

void printCount(int n)
{
    //Base condition
    if(n==0)
        return;
    
    printCount(n-1);
    cout<<n<<" ";
    
}

void reversePrintCount(int m)
{
    //base condition 
    if(m==0)
        return;
    
    cout<<m<<" ";
    reversePrintCount(m-1);
}

int main()
{
    int n;
    cout<<"Enter the number till which you want to print counting from 1\n";
    cin >> n;

    printCount(n);

    int m;
    cout<<"\nEnter the number from which you want to print counting till 1\n";
    cin >> m;

    reversePrintCount(m);
    return 0;
}