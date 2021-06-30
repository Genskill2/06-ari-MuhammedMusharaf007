#include<stdio.h>
#include<math.h>
#include<string.h>
#include<cs50.h>
#include<ctype.h>

string ari(string s)
{
	int characters=0, words=0, sentences=0;
	for(int i=0;i<strlen(s);i++)
	{
		if (isalnum(s[i]))
		{
			characters++;
		}
		else if (s[i] == ' ')
		{
			words++;
		}
		else if (s[i] == '.' || s[i] == '?' || s[i] == '!')
		{
			sentences++;
		}
		else
		{
			continue;
		}
	}
	float answer = (4.71 * characters/words)+(0.5*words/sentences)-21.43;
	int real = ceil(answer);
	
	switch (real)
	{
	case 1:
		return "Kindergarten";
	case 2:
		return "First/Second Grade";
	case 3:
		return "Third Grade";
	case 4:
		return "Fourth Grade";
	case 5:
		return "Fifth Grade";
	case 6:
		return "Sixth Grade";
	case 7:
		return "Seventh Grade";
	case 8:
		return "Eighth Grade";
	case 9:
		return "Ninth Grade";
	case 10:
		return "Tenth Grade";
	case 11:
		return "Eleventh Grade";
	case 12:
		return "Twelfth grade";
	case 13:
		return "College Student";
	case 14:
		return "Professor";
	}
} 
