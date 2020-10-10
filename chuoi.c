#include <stdio.h>
#define MAX 1000
int main()
{
	char str[MAX];
	printf("Nhap chuoi: ");
	gets(str);
	int i = 0;
	int do_dai;
	int bat_dau = 0;
	int ngan = MAX;
	int dai = 0;
	while (str[i] != '\0')
	{
		
		if (str[i] == ' ')
		{
			do_dai = i - bat_dau;
			bat_dau = i + 1;
			if (do_dai < ngan)
			{
				ngan = do_dai;
			}
			if (do_dai > dai)
			{
				dai = do_dai;
			}
		}
		if (str[i + 1] == '\0')
		{
			do_dai = i + 1 - bat_dau;
			if (do_dai < ngan)
			{
				ngan = do_dai;
			}
			if (do_dai > dai)
			{
				dai = do_dai;
			}
		}
		i++;
	}
	i = 0;
	do_dai = -1;
	bat_dau = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			do_dai = i - bat_dau;
			bat_dau = i + 1;
		}
		if (str[i + 1] == '\0')
		{
			do_dai = i + 1 - bat_dau;
			i++;
		}
		if (do_dai == dai)
		{
			int j;
			for (j = i - do_dai; j < i; j++)
			{
				printf("%c", str[j]);
			}
			printf(" ");
			break;
		}
		i++;
	}
	i = 0;
	do_dai = -1;
	bat_dau = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			do_dai = i - bat_dau;
			bat_dau = i + 1;
		}
		if (str[i + 1] == '\0')
		{
			do_dai = i + 1 - bat_dau;
			i++;
		}
		if (do_dai == ngan)
		{
			int j;
			for (j = i - do_dai; j < i; j++)
			{
				printf("%c", str[j]);
			}
			break;
		}
		i++;
	}
	return 0;
}
