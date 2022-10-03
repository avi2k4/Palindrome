/*
Palindrome by Avighnash Kumar. 9/30/22.
Input a series of characters and the program will tell you if its a palindrome.
*/

#include <iostream>
#include <cstring>

using namespace std;

int main() {
	cout << "Enter your word, phrase, or sentence. Let's see if it's a palindrome!" << endl;

	char input[80], processedInput[80];
	cin.get(input, 80); cin.get();
	int processedCount = 0, result = 0;
	
	for (int i = 0; input[i] != '\0'; i++) { // Iterate until null terminator is reached
		if (isalpha(input[i])) { // If char at index is alphabetic
			processedInput[processedCount] = tolower(input[i]); // Add to processed array
			processedCount++; // Increment count
		}
	}
	
	for (int i = 0; i <= processedCount / 2; i++) { // Iterate until index is = to midpoint (rounded down)
		if (processedInput[i] != processedInput[processedCount - i - 1]) { // If char at index and reverse index is not equal
			result = 1; break; // Set result to not palindrome and exit scope
		}
	}
	
	cout << (result == 0 ? "Palindrome." : "Not a palindrome.") << endl;
	
	return 0;
};
