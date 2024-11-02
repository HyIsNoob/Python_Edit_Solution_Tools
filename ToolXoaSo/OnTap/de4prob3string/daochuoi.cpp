#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 300

int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void StringReverse(char st[]);

int main()
{
	char s[MAX];
	char s2[MAX] = "";
	fgets(s, MAX, stdin);
	if (myStrcmp(s, s2) == 0)
		cout << "Chuoi rong." << endl;
	else
	{
		StringReverse(s);
		cout << s << endl;
	}
	return 0;
}

void StringReverse(char a[MAX])
{
	string s1[MAX], s2[MAX];
	string temp;
	int slen = myStrlen(a, 0);
	int k = 0;
	for (int i = 0; i <= slen; i++)
	{
		if (a[i] == ' ' || a[i] == '\n')
		{
			s1[k++] = temp;
			temp = "";
		}
		else
			temp = temp + a[i];
	}
	int temp1 = k;
	k--;
	int u = 0;
	for (int i = 0; i < temp1; i++)
		s2[i] = s1[k--];
	for (int i = 0; i < temp1; i++) {
		for (int j = 0; s2[i][j] != '\0'; j++)
			a[u++] = s2[i][j];
		a[u++] = ' ';
	}
}

int myStrlen(char s[MAX], int k)
{
	for (int i = 0; s[i] != '\0'; i++)
		k++;
	return k;
}

int myStrcmp(char s1[MAX], char s2[MAX])
{
	int s1len = 0, s2len = 0;
	for (int i = 0; s1[i] != '\0'; i++)
		if (s1[i] != '\n')
			s1len++;
	for (int i = 0; s2[i] != '\0'; i++)
		if (s2[i] != '\n')
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