#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

extern	int	ft_strlen(char *str);

void	test_ft_strlen()
{
	printf("My ft_strlen = {%d}\n", ft_strlen("Hello, World!"));
	printf("Real  strlen = {%lu}\n", strlen("Hello, World!"));

}

int 	main(int ac, char **av)
{
	test_ft_strlen();
}
