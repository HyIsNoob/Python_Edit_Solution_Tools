#include <iostream>
using namespace std;
#define MAX 300

int myStrlen(char s[MAX], int k);

int main()
{
	char S[MAX];
	cin.getline(S, MAX);
	char lower[] = { 'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k'
		,'l','z','x','c','v','b','n','m' };
	char upper[] = { 'Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K',
		'L','Z','X','C','V','B','N','M' };
	for (int i = 0; i < myStrlen(S, 0); i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (S[i] == lower[j])
				S[i] = upper[j];
			else if (S[i] == upper[j])
				S[i] = lower[j];
		}
	}
	cout << S;
}

int myStrlen(char s[MAX], int k)
{
	for (int i = 0; s[i] != '\0'; i++)
		k++;
	return k;
}