
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void ChenChuoiTaiVitriK(char s[], char s1[], int k);

int main()
{
	char s[MAX], s1[MAX];
	fgets(s, MAX, stdin);
	fgets(s1, MAX, stdin);
	int k;
	cin >> k;
	if (k < 0 || k > myStrlen(s, 0))
		cout << "Vi tri " << k << " khong thoa dieu kien." << endl;
	else
	{
		int slen = myStrlen(s, 0);
		int s1len = myStrlen(s1, 0);
		for (int i = 0; i < k; i++)
			cout << s[i];
		for (int i = 0; i < s1len; i++)
			cout << s1[i];
		for (int i = k; i < slen; i++)
			cout << s[i];
	}
}

int myStrlen(char s[MAX], int k)
{
	for (int i = 0; s[i] != '\0'; i++)
		k++;
	return k - 1;
}