#include<stdio.h>
#include<string.h>

char* ari(char *s)
{
	int character=0, words=0, sentences=0;
	for(int i=0;i<strlen(s);i++)
	{
		if isalnum(s[i])
		{
			character++;
		}
		else if (s[i] == " ")
		{
			words++;
		}
		else if (s[i] == "." || s[i] == "?" || s[i] == "!")
		{
			sentences++;
		}
	}
	int answer = (4.71 * characters/words)+(0.5*words/sentences)-21.43;
	if (round(answer)-answer)<0
	{
		answer= round(answer+1);
	}
	else
	{
		answer= round(answer);
	}
	return final(answer);
}

char* final(int answer)
{
	switch (answer)
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
	return 0;
} 
