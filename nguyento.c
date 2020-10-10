#include <stdio.h>
int main()
{
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	int arr[n][n];
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("arr[%d][%d] = ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	int max = arr[0][n - 1];
	for (i = 0, j = n - 1; i < n, j>= 0; i++, j--)
	{
		if (arr[i][j] > max)
		{
			max = arr[i][j];
		}
	}
	for (i = 0, j = 0; i < n, j < n; i++, j++)
	{
		if (arr[i][j] > max)
		{
			max = arr[i][j];
		}
	}
	int so_lan[max + 1];
	for (i = 0; i < max + 1; i++)
	{
		so_lan[i] = 0;
	}
	int success;
	int dem = 0;
	for (i = 0, j = n - 1; i < n, j>= 0; i++, j--)
	{
		int k;
		success = 1;
		for (k = 2; k < arr[i][j]; k++)
		{
			if (arr[i][j] % k == 0)
			{
				success = 0;
				break;
			}
		}
		if (success == 1)
		{
			if (so_lan[arr[i][j]] == 0)
			{
				dem++;
				so_lan[arr[i][j]]++;
			}
		}
	}
	for (i = 0, j = 0; i < n, j < n; i++, j++)
	{
		int k;
		success = 1;
		for (k = 2; k < arr[i][j]; k++)
		{
			if (arr[i][j] % k == 0)
			{
				success = 0;
				break;
			}
		}
		if (success == 1)
		{
			if (so_lan[arr[i][j]] == 0)
			{
				dem++;
				so_lan[arr[i][j]]++;
			}
		}
	}
	printf("%d", dem);
	return 0;
}
