
#include <stdio.h>
#include <string.h>

int main(void)
{


	char string1[50] = "whatwelearntinlastweek";
	char* pStr = string1;
	char toFind = 'w';
	printf("Find '%c' and its index in string\"%s\"\n", toFind, string1);
	do
	{
		pStr = strchr(pStr, toFind);
		if (pStr == NULL)
		{
			break;
		}
		int index = pStr - string1;

		printf("%s,%d\n", pStr, index);

		pStr++;
	} while (pStr != NULL);

	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
