#include "libft.h"
#include <stdio.h>


/*

int main(int argc, char const *argv[])
{
	char *str = malloc(5);
	str[4] = NULL;
	ft_memset(&str[3], 'R', 1);
	ft_memset(&str[2], 'I', 1);
	ft_memset(&str[1], 'M', 1);
	ft_memset(&str[0], 'E', 1);
	return 0;
}


/*
int	main(void)
{
	// isalpha test
	printf("isalpha('A'): %d\n", ft_isalpha('A'));
	printf("isalpha('1'): %d\n", ft_isalpha('1'));

	// isdigit test
	printf("isdigit('3'): %d\n", ft_isdigit('3'));
	printf("isdigit('A'): %d\n", ft_isdigit('A'));

	// isalnum test
	printf("isalnum('A'): %d\n", ft_isalnum('A'));
	printf("isalnum('3'): %d\n", ft_isalnum('3'));
	printf("isalnum('@'): %d\n", ft_isalnum('@'));

	// isascii test
	printf("isascii(65): %d\n", ft_isascii(65));
	printf("isascii(200): %d\n", ft_isascii(200));

	// isprint test
	printf("isprint(32): %d\n", ft_isprint(32));
	printf("isprint(10): %d\n", ft_isprint(10));

	// toupper test
	printf("toupper('a'): %c\n", ft_toupper('a'));
	printf("toupper('A'): %c\n", ft_toupper('A'));

	// tolower test
	printf("tolower('A'): %c\n", ft_tolower('A'));
	printf("tolower('a'): %c\n", ft_tolower('a'));

	// strlen test
	printf("strlen(\"hello\"): %zu\n", ft_strlen("hello"));

	// strlcpy test
	char	dest1[10];
	printf("strlcpy: %zu\n", ft_strlcpy(dest1, "world", 10));
	printf("dest1: %s\n", dest1);

	// strlcat test
	char	dest2[20] = "hello ";
	printf("strlcat: %zu\n", ft_strlcat(dest2, "world", 20));
	printf("dest2: %s\n", dest2);

	// memset test
	char	buffer[10];
	ft_memset(buffer, 'A', 5);
	buffer[5] = '\0';
	printf("memset buffer: %s\n", buffer);

	// bzero test
	char	buffer2[10] = "abcdef";
	ft_bzero(buffer2, 3);
	printf("bzero buffer2: %s\n", buffer2);

	// memcpy test
	char	src[10] = "12345";
	char	dst[10];
	ft_memcpy(dst, src, 6);
	printf("memcpy dst: %s\n", dst);

	// strchr test
	printf("strchr(\"hello\", 'e'): %s\n", ft_strchr("hello", 'e'));

	// strrchr test
	printf("strrchr(\"hello\", 'l'): %s\n", ft_strrchr("hello", 'l'));

	// strncmp test
	printf("strncmp(\"abc\", \"abd\", 2): %d\n", ft_strncmp("abc", "abd", 2));

	// memchr test
	char	memstr[] = "abcdef";
	printf("memchr: %s\n", (char *)ft_memchr(memstr, 'd', 6));

	// memcmp test
	printf("memcmp: %d\n", ft_memcmp("abc", "abc", 3));

	// strnstr test
	printf("strnstr(\"Hello World\", \"World\", 11): %s\n",
		ft_strnstr("Hello World", "World", 11));

	// atoi test
	printf("atoi(\"   -1234abc\"): %d\n", ft_atoi("   -1234abc"));

	// calloc test
	int	*arr = (int *)ft_calloc(5, sizeof(int));
	for (int i = 0; i < 5; i++)
		printf("calloc arr[%d]: %d\n", i, arr[i]);
	free(arr);

	// strdup test
	char	*dup = ft_strdup("hello");
	printf("strdup: %s\n", dup);
	free(dup);

	return (0);
}
