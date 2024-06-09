# STRINGS

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
<br>

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

### Function - replace()
```C++
  string base="this is a test string.";
  string str2="n example";
  string str3="sample phrase";
  string str4="useful.";

  //Here the changes are made in the actual string
  // Using positions:               
  string str=base;           // "this is a test string."
  str.replace(9,5,str2);          // "this is an example string." 
  str.replace(19,6,str3,7,6);     // "this is an example phrase."
  str.replace(8,10,"just a");     // "this is just a phrase."   
  str.replace(8,6,"a shorty",7);  // "this is a short phrase."  
  str.replace(22,1,3,'!');        // "this is a short phrase!!!" 
  cout << str << '\n';
```

### Function - find()
```C++
 string sentence = "Hello cuties how are you";
 string target = "hello"
 cout<< sentence.find(target)<<endl;

 if(sentence.find(target) == string::npos )
 {
  cout<<"Target not found\n";
 }
```