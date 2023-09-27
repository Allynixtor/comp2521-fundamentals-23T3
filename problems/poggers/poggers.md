# Poggers?

An list is poggers if every node matches the following criteria:
- If the node is even, then the next node must be of strictly greater value.
- If the node is odd, then the next node must be of strictly lesser value.

Implement the `listIsPoggers` function in `listIsPoggers.c` to return true if the input list is poggers, and false otherwise.
**But we have a problem, our computer is a tsundere and doesn't want you to use any loops at all!**

So, we must implement `listIsPoggers` without any loops. Though you are free to make any extra functions you want (provided they also do not contain loops). For this exercise though, extra functions should not be necessary!

The output from your program should look **exactly** like this:

```bash:~/2521-fundamentals/poggers
$ gcc listIsPoggers.c -o listIsPoggers
$ ./listIsPoggers
Enter list size: 5
Enter list values: 3 2 3 2 3
List: [3, 2, 3, 2, 3]
POGGERS POGU POG
```

```bash:~/2521-fundamentals/poggers
$ ./listIsPoggers
Enter list size: 0
List: []
POGGERS POGU POG
```

```bash:~/2521-fundamentals/poggers
$ ./listIsPoggers
Enter list size: 5         
Enter list values: 3 2 3 2 1
List: [3, 2, 3, 2, 1]
NOT POG
```

```bash:~/2521-fundamentals/poggers
$ ./listIsPoggers
Enter list size: 9
Enter list values: 2 4 8 9 3 -5 -6 -4 0
List: [2, 4, 8, 9, 3, -5, -6, -4, 0]
POGGERS POGU POG
```

## Assumptions/Restrictions/Clarifications

- You are allowed to make other functions, but **must not use any loops**.

## Solution

You can view the solution code to this problem [here](https://github.com/Allynixtor/comp2521-fundamentals-23T3/blob/main/solutions/poggers/poggers.c).
