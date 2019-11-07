#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	for (int i = 0; i < 5; i++)
	{
		for (int j = 5; j > 0; j--)
		{

			if (j > i + 1) 
			{
				printf(" ");
			}
			else 
			{
				printf("%d", j);
			}

	
		}
		printf("\n");
	}
}