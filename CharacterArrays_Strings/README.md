## Key differences between character arrays and strings
There are some key differences between character arrays and strings - <br>

-  Character arrays are declared using suqare brackets, while strings are decalred using double quotes or using string class 
```C++
char arr[] = {'f','4','a','A'};
string str = "Hello Variable";
```

- The size of the character array must be specified at the time of declaration, while the size of the string can be changed dynamically as needed

<br>

- In character arrays declaration and in case of strings we dont have to manually add the null character to show the termination
```C++
char arr[] = {'a','f','A','4'};
string str = "Samplestring";
```
However in the case of **C style character arrays** we need to manually add the null character. For Example - 
```C++
char greetings[20] = "Hello";
greetings[5] = '\0'; //Manually add null character
```
<br>

- Strings have several built in features which can be used to manipulate them. Character arrays do not have these kinds of built-in functions so string manipulation must be done manually.<br>

The strings are more easy to handle while the character arrays are faster and more memory efficient. The choice depends according to the use.<br>