/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:40:51 by fsoria            #+#    #+#             */
/*   Updated: 2024/02/28 16:07:37 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	to_upper(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (ft_toupper(c));
	else
		return (c);
}

void	print_char(unsigned int i, char *c)
{
	printf("Carácter en la posición %d: %c\n", i, *c);
}

void	print_list(t_list *lst)
{
	while (lst != NULL)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
}

void	delete_content(void *content)
{
	free(content);
}

void	*duplicate_content(void *content)
{
	return (ft_strdup((char *)content));
}

int	main(void)
{
	// Prueba de la función ft_isalpha
	printf("Prueba de ft_isalpha con 'a': %d\n", ft_isalpha('a'));
		// Debería imprimir 1
	printf("Prueba de ft_isalpha con '1': %d\n", ft_isalpha('1'));
		// Debería imprimir 0

	// Prueba de la función ft_isdigit
	printf("Prueba de ft_isdigit con '1': %d\n", ft_isdigit('1'));
		// Debería imprimir 1
	printf("Prueba de ft_isdigit con 'a': %d\n", ft_isdigit('a'));
		// Debería imprimir 0

	// Prueba de la función ft_strlen
	printf("Prueba de ft_strlen con 'hola': %d\n", ft_strlen("hola"));
		// Debería imprimir 4

	// Prueba de la función ft_strdup
	char *str = ft_strdup("hola");
	printf("Prueba de ft_strdup con 'hola': %s\n", str);
		// Debería imprimir "hola"
	free(str);                                          
		// Recuerda liberar la memoria

	// Prueba de la función ft_isascii
	printf("Prueba de ft_isascii con 'a': %d\n", ft_isascii('a'));
		// Debería imprimir 1
	printf("Prueba de ft_isascii con '1': %d\n", ft_isascii('1'));
		// Debería imprimir 1

	// Prueba de la función ft_isprint
	printf("Prueba de ft_isprint con 'a': %d\n", ft_isprint('a'));
		// Debería imprimir 1
	printf("Prueba de ft_isprint con '1': %d\n", ft_isprint('1'));
		// Debería imprimir 1

	// Prueba de la función ft_toupper
	printf("Prueba de ft_toupper con 'a': %c\n", ft_toupper('a'));
		// Debería imprimir 'A'

	// Prueba de la función ft_tolower
	printf("Prueba de ft_tolower con 'A': %c\n", ft_tolower('A'));
		// Debería imprimir 'a'

	// Prueba de la función ft_strchr
	printf("Prueba de ft_strchr con 'hola' y 'a': %s\n", ft_strchr("hola",
			'a')); // Debería imprimir "a"

	// Prueba de la función ft_strrchr
	printf("Prueba de ft_strrchr con 'hola' y 'o': %s\n", ft_strrchr("hola",
			'o')); // Debería imprimir "ola"

	// Prueba de la función ft_strncmp
	printf("Prueba de ft_strncmp con 'hola' y 'hola': %d\n", ft_strncmp("hola",
			"hola", 4)); // Debería imprimir 0

	// Prueba de la función ft_memchr
	char arr[] = "hola";
	printf("Prueba de ft_memchr con 'hola' y 'a': %s\n", (char *)ft_memchr(arr,
			'a', 4)); // Debería imprimir "a"

	// Prueba de la función ft_memcmp
	char arr1[] = "hola";
	char arr2[] = "hola";
	printf("Prueba de ft_memcmp con 'hola' y 'hola': %d\n", ft_memcmp(arr1,
			arr2, 4)); // Debería imprimir 0

	// Prueba de la función ft_strnstr
	printf("Prueba de ft_strnstr con 'hola' y 'la': %s\n", ft_strnstr("hola",
			"la", 4)); // Debería imprimir "la"

	// Prueba de la función ft_atoi
	printf("Prueba de ft_atoi con '123': %d\n", ft_atoi("123"));
		// Debería imprimir 123

	// Prueba de la función ft_calloc
	int *nums = (int *)ft_calloc(4, sizeof(int));
	if (nums != NULL)
	{
		for (int i = 0; i < 4; i++)
		{
			printf("Prueba de ft_calloc: nums[%d] = %d\n", i, nums[i]);
				// Debería imprimir 0
		}
		free(nums);
	}

	// Prueba de la función ft_substr
	char *substr = ft_substr("hola mundo", 0, 4);
	printf("Prueba de ft_substr con 'hola mundo', 0, 4: %s\n", substr);
		// Debería imprimir "hola"
	free(substr);

	// Prueba de la función ft_strjoin
	char *strjoin = ft_strjoin("hola ", "mundo");
	printf("Prueba de ft_strjoin con 'hola ' y 'mundo': %s\n", strjoin);
		// Debería imprimir "hola mundo"
	free(strjoin);

	// Prueba de la función ft_strtrim
	char *strtrim = ft_strtrim("   hola mundo   ", " ");
	printf("Prueba de ft_strtrim con '   hola mundo   ' y ' ': %s\n", strtrim);
		// Debería imprimir "hola mundo"
	free(strtrim);

	// Prueba de la función ft_split
	char **split = ft_split("hola mundo", ' ');
	printf("Prueba de ft_split con 'hola mundo' y ' ': %s, %s\n", split[0],
		split[1]); // Debería imprimir "hola", "mundo"
	free(split[0]);
	free(split[1]);
	free(split);

	// Prueba de la función ft_itoa
	char *itoa = ft_itoa(123);
	printf("Prueba de ft_itoa con 123: %s\n", itoa); // Debería imprimir "123"
	free(itoa);

	// Prueba de la función ft_strmapi
	char *strmapi = ft_strmapi("hola mundo", to_upper);
	printf("Prueba de ft_strmapi con 'hola mundo' y to_upper: %s\n", strmapi);
		// Debería imprimir "HoLa mUnDo"
	free(strmapi);

	// Prueba de la función ft_striteri
	char str1[] = "hola mundo";
	ft_striteri(str1, print_char);
		// Debería imprimir cada carácter y su posición

	// Prueba de las funciones ft_putchar_fd, ft_putstr_fd,ft_putendl_fd y ft_putnbr_fd
	ft_putchar_fd('h', 1);        // Debería imprimir "h"
	ft_putstr_fd("ola mundo", 1); // Debería imprimir "ola mundo"
	ft_putendl_fd("!", 1);        // Debería imprimir "!"
	ft_putnbr_fd(123, 1);         // Debería imprimir "123"

	// Prueba de la función ft_lstnew
	t_list *list = ft_lstnew(ft_strdup("hola"));
	printf("Prueba de ft_lstnew con 'hola': %s\n", (char *)list->content);
		// Debería imprimir "hola"

	// Prueba de la función ft_lstadd_front
	t_list *new_node = ft_lstnew(ft_strdup("mundo"));
	ft_lstadd_front(&list, new_node);
	printf("Prueba de ft_lstadd_front con 'mundo':\n");
	print_list(list); // Debería imprimir "mundo", "hola"

	// Prueba de la función ft_lstsize
	printf("Prueba de ft_lstsize: %d\n", ft_lstsize(list));
		// Debería imprimir 2

	// Prueba de la función ft_lstlast
	printf("Prueba de ft_lstlast: %s\n", (char *)ft_lstlast(list)->content);
		// Debería imprimir "hola"

	// Prueba de la función ft_lstadd_back
	t_list *another_new_node = ft_lstnew(ft_strdup("!"));
	ft_lstadd_back(&list, another_new_node);
	printf("Prueba de ft_lstadd_back con '!':\n");
	print_list(list); // Debería imprimir "mundo", "hola", "!"

	// Prueba de la función ft_lstiter
	printf("Prueba de ft_lstiter:\n");
	ft_lstiter(list, delete_content);
	print_list(list); // Debería imprimir nada

	// Prueba de la función ft_lstmap
	t_list *mapped_list = ft_lstmap(list, duplicate_content, delete_content);
	printf("Prueba de ft_lstmap:\n");
	print_list(mapped_list); // Debería imprimir nada

	// Prueba de la función ft_lstdelone
	ft_lstdelone(list, delete_content);
	printf("Prueba de ft_lstdelone:\n");
	print_list(list); // Debería imprimir nada

	// Prueba de la función ft_lstclear
	ft_lstclear(&list, delete_content);
	printf("Prueba de ft_lstclear:\n");
	print_list(list); // Debería imprimir nada

	return (0);
}