#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 255

int myStrcmp(char s1[], char s2[]);

int main()
{
	char s1[MAX], s2[MAX];
	fgets(s1, MAX, stdin);
	fgets(s2, MAX, stdin);
	int kt = myStrcmp(s1, s2);
	cout << kt << endl;
	return 0;
}

int myStrcmp(char s1[MAX], char s2[MAX])
{
	int s1len = 0, s2len = 0;
	for (int i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (int i = 0; s2[i] != '\0'; i++)
		s2len++;

	int demequal = 0, demhigh = 0, demlow = 0;
	if (s1len < s2len)
		return -1;
	else if (s1len > s2len)
		return 1;
	else
	{
		for (int i = 0; i < s1len; i++)
		{
			if (s1[i] == s2[i])
				demequal++;
			if (s1[i] > s2[i])
				demhigh++;
			if (s1[i] < s2[i])
				demlow++;
		}
		if (demequal == s1len)
			return 0;
		else if (demhigh - demlow > 0)
			return 1;
		else if (demhigh - demlow < 0)
			return -1;
	}
}