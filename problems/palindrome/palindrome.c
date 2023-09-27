#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

bool is_palindromic(char *string);
// TODO: any other function prototypes here

// !!! DO NOT MODIFY THE MAIN FUNCTION !!! /////////////////////////////
int main(void) {
	char string[MAX_LINE_LENGTH];
	printf("Enter a line: ");
	fgets(string, MAX_LINE_LENGTH, stdin);
	string[strlen(string) - 1] = '\0';		// remove trailing newline

	bool status = is_palindromic(string);

	if (status) {
		printf("The line is a palindrome!");
	} else {
		printf("The line is not a palindrome!");
	}
	return 0;
}

////////////////////////////////////////////////////////////////////////
// Your task

// return true if the string is palindromic, else return false.
bool is_palindromic(char *string) {
	// TODO: make this function return true if and only if the string is a palindrome
	return false;
}

// TODO: any other functions here