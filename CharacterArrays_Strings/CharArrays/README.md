# Character Arrays & Strings

### Important Points 
- In many programming languages, a null character (\0) is automatically added to the end of a string when you take input. Without a null terminator, the program wouldn't know where the string ends in memory.
```C++
#include<iostream>
using namespace std
int main()
{
    //defining a character array of size 100
    char name[100];

    //taking input of a particular element and it stores the character at that particular index
    cin >> name[index];

    //Taking input of the string 
    //This will take the input of string untill it encounters a space, newline character (enter), tab
    char string[100];
    cin >> string;

    //Besides these method we can also take input in the char array by using for loop
}
```
### Taking input of multiple words seperated with whitespace character
**METHOD 1 :** <br>

- Using getline function - This function **works only with the strings.** <br> 
- getline(cin, sentence); reads characters from cin until it encounters a newline character (\n) and stores them in the sentence string.<br>
- Remember to include the <string> header file for using string objects.
```C++
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string sentence;
    cout<<"Enter the string\n";

    getline(cin,sentence);
    cout << "The string entered is " << sentence
<<endl;

}
```

**METHOD 2 :**

- Using the cin.getline() function to enter the input with whitespace character
- In this we can also set out delim. It refers to the delimiter character. It specifies the character that marks the end of the user's input for getline. By default, delim is set to the newline character (\n). This means getline will read everything the user types until they press Enter and include that newline character. 
```C++
#include<iostream>
using namespace std;
int main()
{
    char arr[100];
    char brr[100];
    //here 50 is the maximum no of characters that we can enter in the input
    cin.getline(arr,50,delim);

    //here we have set the delim character to space so getline will take input till it encounters space character
    cin.getline(brr,50,' ');

    return 0;
}
```

### Do we need to pass array size info to the function in case of character array as we did in the case of integer array ?

Character arrays in C++ are a bit different. They are essentially strings terminated by a null character (\0). This null character indicates the end of the string. Because of this null terminator, the function can iterate through the character array until it encounters the null character, effectively determining the size of the string.<br>
There are two main scenarios:<br>

**Scenario 1 -**
```C++
char greeting[] = "Hello";
```
Here, the size of the array greeting is automatically determined by the compiler based on the string literal "Hello" (including the null terminator). No need to explicitly specify the size when passing this array to a function.<br>

**Scenario 2 -** <br>
This is the case when the character array is declared with a size<br>
```C++
char name[20];
```
This declares a character array name with a size of 20 bytes. You can still pass this array to a function without specifying the size explicitly. The function can rely on the null terminator to determine the actual length of the string stored in the array (up to a maximum of 19 characters in this case).

**NOTE** - If we declare the char array of size 5 and then we enter 4 out of 5 elements then on the last index a null character will be stored. Also in this case if we take input of 5 out of 5 elements then also in the last index a null character will be stored and not the character we entered. <br>

