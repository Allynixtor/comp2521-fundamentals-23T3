# Palindrome?

An palindrome is a string which contains the same characters going forward and backwards.

Implement the `is_palindromic` function in `is_palindromic.c` to return true if a given input line is a palindrome, and false if it is not.
**But we have a problem, our computer is a tsundere and doesn't want you to use any loops at all!**

So, we must implement `is_palindromic` without any loops. Though you are free to make any extra functions you want (provided they also do not contain loops).

The output from your program should look **exactly** like this:

```bash:~/2521-fundamentals/palindrome
$ gcc is_palindromic.c -o is_palindromic
$ ./is_palindromic
Enter a line: racecar
The line is a palindrome!
```

```bash:~/2521-fundamentals/palindrome
$ ./is_palindromic
Enter a line: 
The line is a palindrome!
```

```bash:~/2521-fundamentals/palindrome
$ ./is_palindromic
Enter a line: racecars
The line is not a palindrome!
```

## Assumptions/Restrictions/Clarifications

- The main function handles replacing the newline with a null-terminator
- The input line string will be of length $N$ ($0 ≤ N ≤ 1024$)
- You are allowed to make other functions, but **must not use loops**.

## CSE Autotest

When you think your program is working, you can use CSE autotest to test your solution if anyone can be bothered to make it.

```bash:~/2521-fundamentals/palindrome
$ 2521 csesoc-autotest palindrome
```

## Solution

You can view the solution code to this problem [here](https://github.com/Allynixtor/comp2521-fundamentals-23T3/blob/main/problems/palindrome/solution.c).
