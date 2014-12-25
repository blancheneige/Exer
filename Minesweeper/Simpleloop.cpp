#include <stdio.h>

#define N 100
#define M 100

void main(void)
{
	char row[M + 1];
	int n, m, filed_id;

	char field[N + 2][N + 2];

	filed_id = 1;
	scanf_s("%d %d", &n, &m);

	while (n || m)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				field[i][j] = '0';
			}
		}

		for (int i = 1; i <= m; i++)
		{
			scanf_s("%s", row);
			for (int j = 1; j <= n; j++)
			{
				if (row[j - 1] == '*'){
					for (int i2 = i - 1; i2 <= i + 1; i2++)
					{
						for (int j2 = j - 1; j2 <= j + 1; j2++)
						{
							if (field[i2][j2] != '*')
								field[i2][j2]++;
						}
					}
					field[i][j] = '*';
				}
			}

			if (filed_id > 1) putchar('\n');
			printf("Field #%d\n", filed_id++);
			for (int i = 1; i <= n; i++)
			{
				for (int j = 1; j <= m; j++)
				{
					putchar(field[i][j]);
				}
			}
			scanf("%d %d", &n, &m);
		}
	}


}