#include<iostream>
#include<vector>
using namespace std;

//In an array if there all the elements except one element are present two times then to find the unique element we would use
//bitwise XOR because (x^x=0) and (x^0=x) 
//(x^y^z^x^y^w=z^w) -- Here we can directly cancel out those elements which are occuring in pairs and then simplify the expression.

//here we write all the attributes of the vector which are same as when we are declaring it 
int findUnique(vector <int> array)
{
    //initializing with zero because (x^0=x)
    int ans=0;
    for(int i=0;i<array.size();i++)
    {
        ans=ans^array[i];
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the size of array you want to create\n";
    cin >> n;

    vector <int> array(n);

    for(int i=0;i<array.size();i++)
    {
        cin>>array[i];
    }

    //No need to pass the size here because in vector we can access the size information through size() function
    int result = findUnique(array);
    cout <<"The unique element of the array is "<<result<<endl;

    return 0;
}