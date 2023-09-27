#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

bool is_palindromic(char *string);
bool do_is_palindromic(char *string, int left_index, int right_index);

// !!! DO NOT MODIFY THE MAIN FUNCTION !!! /////////////////////////////
int main(void) {
	char string[MAX_LINE_LENGTH];
	printf("Enter a line: ");
	fgets(string, MAX_LINE_LENGTH, stdin);
	string[strlen(string) - 1] = '\0';		// remove trailing newline

	bool status = is_palindromic(string);

	if (status) {
		printf("The line is a palindrome!\n");
	} else {
		printf("The line is not a palindrome!\n");
	}
	return 0;
}

////////////////////////////////////////////////////////////////////////
// Your task

// return true if the string is palindromic, else return false.
bool is_palindromic(char *string) {
	int right_bound = strlen(string) - 1;
	if (right_bound < 0) {
		return true;		// empty string is palindromic
	}
	return do_is_palindromic(string, 0, right_bound);
}

bool do_is_palindromic(char *string, int left_index, int right_index) {
	// why have two base cases? in our recursion we decrement right and increment left, so the difference goes down by 2 each time.
	// then to have exhaustive base cases, we need our base cases to cover both odd and even case.
	if (left_index == right_index) {
		return true;										// a single-character string is always palindromic
	} else if (right_index - left_index == 1) {
		return string[left_index] == string[right_index];	// a two-character string is palindromic iff the characters are the same
	}

	// a string is palindromic iff the "inner" substring is palindromic, and the outer two character are the same.
	return string[left_index] == string[right_index] &&
		   do_is_palindromic(string, left_index + 1, right_index - 1);
}
