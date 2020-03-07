/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeoithd <aeoithd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 18:16:04 by aeoithd           #+#    #+#             */
/*   Updated: 2020/03/07 20:26:40 by aeoithd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

extern	int		ft_strlen(char *str);
extern	char	*ft_strcpy(char *dest, const char *src);
extern	int		ft_strcmp(const char *s1, const char *s2);
extern	int		ft_write(int fd, char *str, size_t len);
extern	int		ft_read(int fd, char *str, size_t len);

void	test_ft_strlen()
{
	printf("My ft_strlen = {%d}\n", ft_strlen("Hello, World!"));
	printf("Real  strlen = {%lu}\n", strlen("Hello, World!"));

}

void	test_ft_strcpy()
{
	printf("My ft_strscpy = {%s}\n", ft_strcpy(strdup("123456789101112"), "Hello, World!"));
	printf("Real strscpy = {%s}\n", strcpy(strdup("123456789101112"), "Hello, World!"));
}

void	test_ft_strcmp()
{
	printf("with 12345 and 12345 test\n");
	printf("My ft_strcmp = {%d}\n", ft_strcmp("12345", "12345"));
	printf("Real  strcmp = {%d}\n", strcmp("12345", "12345"));
	printf("with 12345 and 1234567 test\n");
	printf("My ft_strcmp = {%d}\n", ft_strcmp("12345", "1234567"));
	printf("Real  strcmp = {%d}\n", strcmp("12345", "1234567"));
	printf("with 1234567 and 12345 test\n");
	printf("My ft_strcmp = {%d}\n", ft_strcmp("1234567", "12345"));
	printf("Real  strcmp = {%d}\n", strcmp("1234567", "12345"));
}

void	test_ft_write()
{
	printf("  My ft_write = {%d}\n", ft_write(1, "Fsalut toi", 5));
	printf("  Real write  = {%lu}\n", write(1, "Vsalut toi", 5));
}

void	test_ft_read()
{
	int fd;
	int len = 15;
	char Vstr[len + 1];
	char Fstr[len + 1];
	
	fd = open("Makefile", O_RDONLY);
	ft_read(fd, Fstr, len);
	close(fd);
	fd = open("Makefile", O_RDONLY);
	read(fd, Vstr, len);
	close(fd);
	printf("My ft_read = {%s}\n", Fstr);
	printf("Read  read = {%s}\n", Vstr);
}

int 	main(int ac, char **av)
{
	test_ft_strlen();
	printf("\n");
	test_ft_strcpy();
	printf("\n");
	test_ft_strcmp();
	printf("\n");
	test_ft_write();
	printf("\n");
	test_ft_read();
}
