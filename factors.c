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
		/*this code has a logical error*/
		/*it can't really handle big numbers*/
		/*so I will get back to it and make it work*/
		/*because it's much faster than the python code*/
		while (factor < (unsigned long long)(i / 2) + 1)
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
