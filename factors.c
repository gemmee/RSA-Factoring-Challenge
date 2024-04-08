#include <stdio.h>

int main(int ac, char *av[])
{
	FILE *f = fopen(av[1], "r");
	unsigned long long int other, factor, number = 0;
	int length;
	char *str;

	fscanf(f, "%llu", &number);
	length = snprintf(NULL, 0, "%llu", number);
	while (!feof(f))
	{
		factor = 2;
		if (length > 15)
		{
			str = malloc(length + 1);
			snprintf(str, length + 1, "%llu", number);
			repeat:
			answer = long_division(str, factor);
			if ((long_multiplication(answer, factor) == str))
			{
				printf("%s=%s*%s\n", str, answer, factor);
				break;
			}
			factor++;
			fscanf(f, 
	
		}
		
		printf("%llu=", number);
		while (factor < number)
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
