#include <stdio.h>

int main(int ac, char *av[])
{
	FILE *f = fopen(av[1], "r");
	unsigned long long int other, factor, i = 0;
	
	fscanf(f, "%llu", &i);
	while (!feof(f))
	{
		factor = 2;
		printf("%llu=", i);
		while (factor < (i / 2) + 1)
		{
			if (!(i % factor))
			{
				other = i / factor;
				printf("%llu*%llu\n", other, factor);
				break;
			}
			factor++;
		}
		fscanf(f, "%llu",  &i);
	}
	fclose(f);
}
