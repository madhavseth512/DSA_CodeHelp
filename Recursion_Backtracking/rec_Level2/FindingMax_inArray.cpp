#include<iostream>
#include<limits.h>
using namespace std;

//creating the reference variable for max_num
int findMax(int array[], int size, int iterator,int& max_num)
{
    //base condition
    if(iterator == size)
        return max_num;

    //recursive call to find max number
    if(array[iterator]>max_num)
        max_num = array[iterator];
    
    iterator++;
    findMax(array,size,iterator,max_num);

}

int main()
{
    int array[]={-23,-5,0,-21,4,-34,-8,-11};
    int size = 8;
    int iterator = 0;
    int max_num = INT_MIN;
    int answer = findMax(array,size,iterator,max_num);
    cout<<"The max number of the array is :"<<answer;
    return 0;
}