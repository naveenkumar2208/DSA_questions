Generate all passwords from given character set

Given a set of characters generate all possible passwords from them. This means we should generate all possible permutations of words using the given characters, 
with repetitions and also upto a given length. 
  
Example: 
Input : arr[] = {a, b}, 
          len = 2.
Output :
a b aa ab ba bb

// code

#include <bits/stdc++.h>
using namespace std;

void generate(char* arr, int i, string s, int len)
{
	if (i == 0) // when len has been reached
	{
		cout << s << "\n";
		return;
	}

	for (int j = 0; j < len; j++) {
    
		string appended = s + arr[j];
		generate(arr, i - 1, appended, len);
	}

	return;
}

void crack(char* arr, int len)
{
	for (int i = 1; i <= len; i++) {
		generate(arr, i, "", len);
	}
}

int main()
{
	char arr[] = { 'a', 'b', 'c' };
	int len = sizeof(arr) / sizeof(arr[0]);
	crack(arr, len);
	return 0;
}


