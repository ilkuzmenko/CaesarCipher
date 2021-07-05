#include <unistd.h>

#define ROT 13 
#define LOW_CASE_MIN 97
#define UP_CASE_MIN 65
#define ENG_ALPH_SIZE 26

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void Rotate(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
	    if (str[i] >= 'a' && str[i] <= 'z')
	    {
	        ft_putchar((((str[i] - LOW_CASE_MIN) + ROT) % ENG_ALPH_SIZE) + LOW_CASE_MIN); // (((n - 97) + m) % 26) + 97
	    }
	    else if (str[i] >= 'A' && str[i] <= 'Z')
	    {
	        ft_putchar((((str[i] - UP_CASE_MIN) + ROT) % ENG_ALPH_SIZE) + UP_CASE_MIN); // (((n - 65) + m) % 26) + 65
	    }
	    else
	        ft_putchar(str[i]);
	    	i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
{
	Rotate(argv[1]);
}
	ft_putchar('\n');
	return (0);
}
