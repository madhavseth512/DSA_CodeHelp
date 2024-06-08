#include<iostream>
#include<string.h>
using namespace std;

//Here alternatively we can make another array which would contain the reversed format of this 
//and then compare each of the indexes but it would have a space complexity of O(n)
//This solution has a space complexity of O(1).

int main()
{
    char words[100];
    cout<<"Enter the word for which you want to check palindrome\n";
    cin.getline(words,100);
    int length = strlen(words);

    //Now checking for Palindrome
    int i=0;
    int j=length-1;

    bool palindrome = true;
    while(i<=j)
    {
        if(words[i] != words[j])
            palindrome = false;
    
        i++;
        j--;
    }

    cout<<"The truth value for the string you entered to be a palindrome is "<<palindrome<<endl;

    return 0;
}