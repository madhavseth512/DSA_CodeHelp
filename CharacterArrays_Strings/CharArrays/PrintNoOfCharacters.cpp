#include<iostream>
using namespace std;

//here we are taking the input of a string and storing it in a character array using cin.getline() function
//and then printing the number of character we have entered

int getcharacters(char name[], int size)
{
    int count = 0;
    int i = 0;

    while (name[i] != '\0')
    {
        count ++;
        i++;
    }
    return count;
}

int main()
{
    char name[100];
    cout<<"Enter the name\n";
    cin.getline(name,50);

    cout<<"The number of characters that you entered : "<<getcharacters(name,100) <<endl;
    return 0;

}