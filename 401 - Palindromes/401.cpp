#include "iostream"
#include "string.h"
using namespace std;

char Mirror(char);

int main(int argc, char const *argv[])
{
	while(true)
	{
		char s[20];
		char mirror[20];
		bool IsPal = true, IsMirrored = true;

		cin>>s;
		int i = 0, len =strlen(s), j = len-1;

		//checking if srting is palindrome or not
		int mid = strlen(s)/2;
		for ( ; i < mid; ++i, --j)
			if (s[i] != s[j])
			{
				IsPal = false;
				break;
			}
		//making mirrored string to compaire
		for (int i = 0; i <= len; ++i)
			mirror[i] = Mirror(s[len - i]);
		mirror[strlen(s)] = '\0';
		//strrev(mirror);
		//compairing mirror whith main string
		cout<< s << endl << mirror << endl;
			for(int i = 0 ; i< len; i++)
				if(s[i] != mirror[i])
					IsMirrored = false;

		//OUTPUT
		cout<<s;
		if (IsPal == false && IsMirrored == false)
			cout<< " -- is not a palindrome." << endl;
		else 
			if (IsPal && IsMirrored == false)
				cout<< " -- is a regular palindrome." << endl;
			else
				if(IsPal == false && IsMirrored)
					cout<< " -- is a mirrored string." << endl;
				else
					if(IsPal && IsMirrored)
						cout<< " -- is a mirrored palindrome." << endl;
	}
	return 0;
}

char Mirror(char CHR)
{
	switch(CHR)
	{
		case 'A' : return 'A';
		case 'H' : return 'H';
		case 'I' : return 'I';
		case 'E' : return '3';
		case 'J' : return 'L';
		case 'L' : return 'J';
		case 'M' : return 'M';
		case 'O' : return 'O';
		case 'T' : return 'T';
		case 'U' : return 'U';
		case 'V' : return 'V';
		case 'W' : return 'W';
		case 'X' : return 'X';
		case 'S' : return '2';
		case 'Y' : return 'Y';
		case 'Z' : return '5';
		case '1' : return '1';
		case '2' : return 'S';
		case '3' : return 'E';
		case '5' : return 'Z';
		case '8' : return '8';
		default: return CHR;
	}
}
