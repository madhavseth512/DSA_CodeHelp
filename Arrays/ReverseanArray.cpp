#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//Here we have used the swap function to swap the elements at the start and end pointers. 
//This is used to arrange the function in reverse order. 


int main()
{
    int n;
    cout<<"Enter the size of array\n";
    cin>>n;

    vector <int> array(n);

    cout<<"Enter the elements of array\n";
    for(int i=0;i<array.size();i++)
    {
        cin>>array[i];
    }

    int start = 0;
    int end = array.size()-1;

    while(start<=end)
    {
        //Syntax to write swap function 
        swap(array[start],array[end]);
        start++;
        end--;
    }

    for(int i=0;i<array.size();i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}
