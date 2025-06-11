#include "libft.h"
#include <stdio.h>

int	main(void)
{
	// isalpha test
	printf("isalpha('A'): %d\n", ft_isalpha('A')); // 1 beklenir
	printf("isalpha('1'): %d\n", ft_isalpha('1')); // 0 beklenir

	// isdigit test
	printf("isdigit('3'): %d\n", ft_isdigit('3')); // 1 beklenir
	printf("isdigit('A'): %d\n", ft_isdigit('A')); // 0 beklenir

	// isalnum test
	printf("isalnum('A'): %d\n", ft_isalnum('A')); // 1
	printf("isalnum('3'): %d\n", ft_isalnum('3')); // 1
	printf("isalnum('@'): %d\n", ft_isalnum('@')); // 0

	// isascii test
	printf("isascii(65): %d\n", ft_isascii(65)); // 1
	printf("isascii(200): %d\n", ft_isascii(200)); // 0

	// isprint test
	printf("isprint(32): %d\n", ft_isprint(32)); // 1
	printf("isprint(10): %d\n", ft_isprint(10)); // 0

	// toupper test
	printf("toupper('a'): %c\n", ft_toupper('a')); // 'A'
	printf("toupper('A'): %c\n", ft_toupper('A')); // 'A'

	// tolower test
	printf("tolower('A'): %c\n", ft_tolower('A')); // 'a'
	printf("tolower('a'): %c\n", ft_tolower('a')); // 'a'

	// strlen test
	printf("strlen(\"hello\"): %zu\n", ft_strlen("hello")); // 5

	// strlcpy test
	char dest1[10];
	printf("strlcpy: %zu\n", ft_strlcpy(dest1, "world", 10));
	printf("dest1: %s\n", dest1);

	// strlcat test
	char dest2[20] = "hello ";
	printf("strlcat: %zu\n", ft_strlcat(dest2, "world", 20));
	printf("dest2: %s\n", dest2);

	// memset test
	char buffer[10];
	ft_memset(buffer, 'A', 5);
	buffer[5] = '\0';
	printf("memset buffer: %s\n", buffer);

	// bzero test
	char buffer2[10] = "abcdef";
	ft_bzero(buffer2, 3);
	printf("bzero buffer2: %s\n", buffer2); // ilk 3 char '\0' olacak

	// memcpy test
	char src[10] = "12345";
	char dst[10];
	ft_memcpy(dst, src, 6);
	printf("memcpy dst: %s\n", dst);

	// strchr test
	printf("strchr(\"hello\", 'e'): %s\n", ft_strchr("hello", 'e'));

	// strrchr test
	printf("strrchr(\"hello\", 'l'): %s\n", ft_strrchr("hello", 'l'));

	// strncmp test
	printf("strncmp(\"abc\", \"abd\", 2): %d\n", ft_strncmp("abc", "abd", 2)); // 0

	// memchr test
	char memstr[] = "abcdef";
	printf("memchr: %s\n", (char *)ft_memchr(memstr, 'd', 6));

	// memcmp test
	printf("memcmp: %d\n", ft_memcmp("abc", "abc", 3)); // 0

	// strnstr test
	printf("strnstr(\"Hello World\", \"World\", 11): %s\n", ft_strnstr("Hello World", "World", 11));

	// atoi test
	printf("atoi(\"   -1234abc\"): %d\n", ft_atoi("   -1234abc")); // -1234

	// calloc test
	int *arr = (int *)ft_calloc(5, sizeof(int));
	for (int i = 0; i < 5; i++)
		printf("calloc arr[%d]: %d\n", i, arr[i]);
	free(arr);

	// strdup test
	char *dup = ft_strdup("hello");
	printf("strdup: %s\n", dup);
	free(dup);

	return (0);
}
