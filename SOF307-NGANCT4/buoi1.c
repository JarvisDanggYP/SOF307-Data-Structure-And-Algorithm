
#include <stdio.h>
void sapXepNoiBot()
{
	int i, j;
	int arrNumber[] = {3, 4, 2, 1, 0, 5, 7, 9, 8, 6};
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (arrNumber[i] > arrNumber[j])
			{
				int temp;
				temp = arrNumber[i];
				arrNumber[i] = arrNumber[j];
				arrNumber[j] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arrNumber[i]);
	}
}

void timKiem()
{
	int arrNumber[] = {3, 4, 2, 1, 0, 5, 7, 9, 8, 6};
	for (int i = 0; i < 10; i++)
	{
		if (arrNumber[i] == 1)
		{
			printf("%d\n", arrNumber[i]);
			printf("vi tri la : %d", i);
		}
	}
	{
		/* code */
	}
}

int main()
{

	timKiem();
	// sapXepNoiBot();
}