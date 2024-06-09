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

## STRINGS

- This is a data type and char array was a data structure with character type of data stored in it.
- To use strings, you must include an additional header file in the source code, the string library : #include<string>
```C++
#include<iostream>
#include<string>
using namespace std;
int main()
{
    //creation of string variable
    string str = "Hello";

    string btr;

    //Using cin we can only take the input untill the first 
    //whitespace character is encountered
    cin >> str;

    //To also include the white space character we should use
    //this particular syntax
    getline(cin,str);

    //changing the elements of string str
    str[0]='B';
    str[1]='A';
}
``` 
## Predefined Functions of String<br>

- strlen(char_array_name) function is used for getting the number of characters in the character array before the null character and it is used only for char arrays and not for strings.

### String Append/Concatenation
 Time complexity of Append() in string is O(n). The character concatenation and string concatenation are the same process.
```C++
//String concatenation using append function
string s="Ujjal";
string s1="Roy";
string s3=s.append(s1);
cout<<s3<<endl;

//string concatenation using +
s=s+' ';//"Ujjal ";
s+=s1;// "Ujjal Roy";
cout<<s<<endl;
```

### Function - size()/length() 

In C++ there is actually no difference between these two and its just a matter of preference and readability. 
```C++
string s="Hello HSTU";
cout<<s.size()<<endl;//output :10
cout<<s.length()<<endl;//output :10
```

### String Traversing 
We can traverse a string just like other sequential containers like arrays or vectors. We can traverse the string using loops and the syntax would be **variable_name_of_string[index]**.

### Function - reverse() 
reverse() function used for reverse a string. We need to provide the beginning and ending iterators of the string. This reverses the characters within the string, effectively reversing the entire string.
```C++
string s="Ujjal";
reverse(s.begin(),s.end());
cout<<s<<endl; //output : lajjU
```
### Function - empty()
This is Boolean function returns whether the string is empty if it is empty return true (1) otherwise false.
```C++
string s="HSTU";
cout<<s.empty()<<endl;//output : 0

//Here clear() function clears out the string. It takes no parameters and returns the string with zero characters
s.clear();
cout<<s.empty()<<endl;//output : 1
```

### Function - push_back() & pop_back()
push_back() function adds a character to the end of the string increasing its length by one.<br>
pop_back() function erases the last character of the strig reducing its length by one.<br>
```C++
string s="Wassup Cutie"
s.push_back("s") //output - Wassup Cuties
s.pop_back();//output - Wassup Cutie
```
### Function - erase()
Understand the below code to know how this function works
```C++
string s="Hello ujjal";
s.erase();//Erase all character
cout<<s<<endl;//output : 
s="Hello";
s.erase(2);//erase all element from poition 2(ZERO base index).
cout<<s<<endl; //output : He
s="Hello, Ujjal";
s.erase(2,4);//From index 2 and erase 4 characters(zero base)
cout<<s<<endl; //output : He Ujjal
s="Hello, Ujjal";
s.erase(s.begin()+5);// Erase the single character at iterator s.begin()+5
cout<<s<<endl;//output : Hello Ujjal
s="Hello, Ujjal";
s.erase(s.begin(),s.begin()+4);//erase the elements from begin() to 
before begin()+4
cout<<s<<endl;// output: o, Ujjal
 
string s="Hello, coders";
s.erase(remove(s.begin(),s.end(),'o'),s.end());//erase all 'o' from s
cout<<s<<endl;// output : Hell, cders
```
### Function - substr()
This function is used to extract a sub string from a given string object. It does not modifies the original string and it make changes in a copy.
```C++
string greetings = "Hello World";

//Here substr(starting_index,length_of_sub_string)
cout<< greeting.substr(0,5); //output will be Hello

//substr(strting_index_of_subtring_till_end)
cout<<greetings.substr(6); //ouput will be World
```
### Function - compare()
There are three cases in this function based on the return value- <br>

- **Return value of 0** - This returned value means that both of the strings are same

- **Negative return value** - Either the value of the first character that does not match is lower in the compared string, or all compared characters match but the compared string is shorter.

- **Positive return value** - Either the value of the first character that does not match is greater in the compared string, or all compared characters match but the compared string is longer.

SYNTAX VARIATIONS -

```C++
string str1;
string str1;

//Comparing the entire str1 with str2 character by character
str1.compare(str2);

//Compares a substring of str1 starting at a position pos with a length 
//of len characters, with the entire string str2
str1.compare(pos, len, str2)

//Compares a substring of str1 starting at position pos with a 
//length of len characters, with a substring of str2 
//starting at position pos2 with a length of len2 characters.
str1.compare(pos, len, str2, pos2, len2)
```