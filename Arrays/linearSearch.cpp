#include<iostream>
using namespace std;

//Linear search in the array is an algorithm. It can also be used to find the number of 0's and 1's in an array that is made up of 0,1 only

int findKey(int arr[],int size, int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    
    return 0;
}


int main()
{
    int arr[]={4,2,5,7,1,9,13,6,28,47};
    int size = 10;

    int key;
    cout<<"Enter the key you want to find\n";
    cin>>key;

    int result=findKey(arr,size,key);
    
    if(result==1)
    {
        cout<<"Key is in the array\n";
    }
    else
        cout<<"Key is not in the array\n";

    return 0;    

}
