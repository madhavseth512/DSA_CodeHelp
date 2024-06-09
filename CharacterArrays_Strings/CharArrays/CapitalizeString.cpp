#include<iostream>
#include<string.h>
using namespace std;

//here we have converted all the lowercase letters into uppercase. We can do vice-versa also 
//but only the formula used will be changed in that case

int main()
{
    char words[100];
    cout<<"Enter the string you want to capitalize\n";
    cin.getline(words,100);
    int length = strlen(words);

    for(int i=0;i<length;i++)
    {
        //check if a character is in lowercase or not
        if(words[i]>='a' && words[i]<='z')
        {
            words[i] = words[i] + ('A'-'a');
        }
    }

    //Print the uppercase string
    cout<<words<<endl;
    return 0;
}