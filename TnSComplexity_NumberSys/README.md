# Time and Space Complexity

**Time Complexity** <br>
It quantifies the amount of time an algorithm takes to execute as the input size grows.

**Space Complexity**<br>
It measures the amount of extra memory an algorithm needs to run in addition to the input size.<br>
<br>
Both are expressed using the big O notation. This ignores the constant factors and lower order terms. It is the notation which represents the growth rate of complexity as the input size increases.<br>

- **Big O Notation :** This is like saying "no worse than" in terms of speed. It describes the upper bound of an algorithm's runtime.  Think of it as your worst-case scenario.  An algorithm can be O(n) (meaning it grows linearly with the input size n) even if it sometimes finishes faster. It just means there's a limit on how slow it can get as the input grows.
- **Big Omega Notation :** This is like saying "no better than" in terms of speed. It describes the lower bound of an algorithm's runtime, like your best-case scenario.  An algorithm can be Omega(n) (meaning it must grow at least as fast as n) even if it sometimes runs slower. It just means there's a limit on how fast it can get as the input grows.
- **Big Theta Notation :** Theta(n) signifies that the algorithm's execution time grows linearly in proportion to the input size (n). Imagine the time it takes to complete a task increases steadily as the amount of data you need to process increases.

**Increasing Order of Complexity**<br>
O(1), O(logN), O(sqrtN), O(N), O(NlogN), O(n^2), O(N^3), O(2^N), O(N!), O(N^N)<br>
The graph is generally plotted between the number of CPU operations and input size N.

# Number System
**Base of a system** - It is the number of symbols(digits) a number system uses.<br>
<br>
There are two methods of conversion from decimal to binary:<br>

- **Division by 2 :**   The remainder obtained by division with 2 would be the binary number. 
- **Bitwise Method :** We will obtain the bits with bitwise AND operator & then right shift N by 1 & then repeat the steps till N>0. 
<br>
<br>
**NOTE :** When an integer literal starts with a leading zero then it is interpreted as an octal value (base 8).<br>
This in the case of int a = 0647; it is considered as an octal value and it represents a decimal value of 423.<br>

