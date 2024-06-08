#include<iostream>
using namespace std;

//Getting the size of the entered string as we need information about the sizein string reversal
//Instead of this function we could have used the predefined function of strlen(char_array_name);
int get_count(char words[])
{
    int count = 0;
    int i = 0;
    while (words[i] != '\0')
    {
        count ++;
        i++;
    }
    return count;
}

int main()
{
    char words[100];
    cout<<"Enter your words\n";
    cin.getline(words,100); 

    int k=0;
    int j=get_count(words)-1;

    while (k<=j)
    {
        //swapping the elements 
        swap(words[k],words[j]);
        k++;
        j--;
    }

    //printing the reversed string
    //We could have simply printed the char array through  -- cout << words << endl;
    for(int i=0;i<get_count(words);i++)
    {
        cout<<words[i];
    }

    return 0;

}