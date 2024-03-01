/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsoria <fsoria@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 14:21:02 by fsoria            #+#    #+#             */
/*   Updated: 2024/03/01 14:21:02 by fsoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// Custom function for ft_strmapi
char ft_map_function(unsigned int i, char c)
{
    return c + i;
}

// Custom function for ft_striteri
void ft_print_index_char(unsigned int i, char *c)
{
    printf("Character at index %u: %c\n", i, *c);
}

// Custom function for freeing content in ft_lstclear
void ft_free_content(void *content)
{
    free(content);
}

// Custom function for printing list content in ft_lstiter
void ft_print_list_content(void *content)
{
    printf("%s\n", (char *)content);
}

// Custom function for converting characters to uppercase in ft_lstiter
void ft_to_upper(void *content)
{
    char *str = (char *)content;
    while (*str)
    {
        *str = ft_toupper(*str);
        str++;
    }
}

// Custom function for mapping content in ft_lstmap
void *ft_map_content(void *content)
{
    char *str = (char *)content;
    size_t len = ft_strlen(str);
    char *new_str = malloc((len + 1) * sizeof(char));
    if (new_str == NULL)
        return NULL;
    for (size_t i = 0; i < len; i++)
    {
        new_str[i] = str[i] * 2; // doubling each character
    }
    new_str[len] = '\0';
    return new_str;
}

int main(void)
{
    // Test ft_isalpha function
    printf("ft_isalpha('A'): %d\n", ft_isalpha('A'));
    printf("ft_isalpha('9'): %d\n", ft_isalpha('9'));
    printf("ft_isalpha('@'): %d\n\n", ft_isalpha('@'));

    // Test ft_isdigit function
    printf("ft_isdigit('A'): %d\n", ft_isdigit('A'));
    printf("ft_isdigit('9'): %d\n", ft_isdigit('9'));
    printf("ft_isdigit('@'): %d\n\n", ft_isdigit('@'));

    // Test ft_isalnum function
    printf("ft_isalnum('A'): %d\n", ft_isalnum('A'));
    printf("ft_isalnum('9'): %d\n", ft_isalnum('9'));
    printf("ft_isalnum('@'): %d\n\n", ft_isalnum('@'));

    // Test ft_isascii function
    printf("ft_isascii(65): %d\n", ft_isascii(65));
    printf("ft_isascii(128): %d\n", ft_isascii(128));
    printf("ft_isascii(32): %d\n\n", ft_isascii(32));

    // Test ft_isprint function
    printf("ft_isprint(65): %d\n", ft_isprint(65));
    printf("ft_isprint(7): %d\n", ft_isprint(7));
    printf("ft_isprint(32): %d\n\n", ft_isprint(32));

    // Test ft_memset function
    char str[15] = "Hello";
    printf("Before memset: %s\n", str);
    ft_memset(str, '*', 3);
    printf("After memset: %s\n\n", str);

    // Test ft_strlen function
    printf("Length of 'Hello': %u\n\n", ft_strlen("Hello"));

    // Test ft_bzero function
    char str_bzero[10] = "Hello";
    printf("Before bzero: %s\n", str_bzero);
    ft_bzero(str_bzero, 5);
    printf("After bzero: %s\n\n", str_bzero);

    // Test ft_memcpy function
    char dest[20] = "Destination";
    char src[20] = "Source";
    printf("Before memcpy - destination: %s, source: %s\n", dest, src);
    ft_memcpy(dest, src, 5);
    printf("After memcpy - destination: %s\n\n", dest);

    // Test ft_memmove function
    char str_memmove[] = "memmove can be very useful......";
    printf("Before memmove: %s\n", str_memmove);
    ft_memmove(str_memmove + 20, str_memmove + 15, 11);
    printf("After memmove: %s\n\n", str_memmove);

    // Test ft_strlcpy function
    char dst_strlcpy[10];
    printf("Length of copied string: %zu\n", ft_strlcpy(dst_strlcpy, "Hello", 5));
    printf("Copied string: %s\n\n", dst_strlcpy);

    // Test ft_strlcat function
    char dst_strlcat[20] = "Hello";
    printf("Length of concatenated string: %zu\n", ft_strlcat(dst_strlcat, " World", 20));
    printf("Concatenated string: %s\n\n", dst_strlcat);

    // Test ft_toupper function
    printf("Uppercase of 'a': %c\n", ft_toupper('a'));
    printf("Uppercase of 'Z': %c\n\n", ft_toupper('Z'));

    // Test ft_tolower function
    printf("Lowercase of 'A': %c\n", ft_tolower('A'));
    printf("Lowercase of 'z': %c\n\n", ft_tolower('z'));

    // Test ft_strchr function
    char *str_strchr = "Hello, World!";
    printf("String after first occurrence of 'o': %s\n", ft_strchr(str_strchr, 'o'));
    printf("String after first occurrence of 'z': %s\n\n", ft_strchr(str_strchr, 'z'));

    // Test ft_strrchr function
    char *str_strrchr = "Hello, World!";
    printf("String after last occurrence of 'o': %s\n", ft_strrchr(str_strrchr, 'o'));
    printf("String after last occurrence of 'z': %s\n\n", ft_strrchr(str_strrchr, 'z'));

    // Test ft_strncmp function
    printf("Comparison result for 'abc' and 'abd' (n=2): %d\n", ft_strncmp("abc", "abd", 2));
    printf("Comparison result for 'abc' and 'abcd' (n=3): %d\n\n", ft_strncmp("abc", "abcd", 3));

    // Test ft_memchr function
    char str_memchr[] = "Hello, World!";
    printf("String after first occurrence of 'l': %s\n", (char *)ft_memchr(str_memchr, 'l', 13));
    printf("String after first occurrence of 'z': %s\n\n", (char *)ft_memchr(str_memchr, 'z', 13));

    // Test ft_memcmp function
    char arr1_memcmp[] = "abcdef";
    char arr2_memcmp[] = "abcdeg";
    printf("Comparison result for arr1 and arr2 (n=6): %d\n", ft_memcmp(arr1_memcmp, arr2_memcmp, 6));
    printf("Comparison result for arr1 and arr2 (n=5): %d\n\n", ft_memcmp(arr1_memcmp, arr2_memcmp, 5));

    // Test ft_strnstr function
    char *big_strnstr = "Foo Bar Baz";
    char *little_strnstr = "Bar";
    printf("Substring after first occurrence of 'Bar': %s\n", ft_strnstr(big_strnstr, little_strnstr, 10));
    printf("Substring after first occurrence of 'Qux': %s\n\n", ft_strnstr(big_strnstr, "Qux", 10));

    // Test ft_atoi function
    printf("Integer value of '1234': %d\n", ft_atoi("1234"));
    printf("Integer value of '-567': %d\n\n", ft_atoi("-567"));

    // Test ft_calloc function
    int *arr_calloc = (int *)ft_calloc(5, sizeof(int));
    printf("calloc array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr_calloc[i]);
    }
    printf("\n\n");
    free(arr_calloc); // Free memory allocated by ft_calloc

    // Test ft_strdup function
    char *str_strdup = "Hello, World!";
    char *str_dup = ft_strdup(str_strdup);
    printf("Duplicated string: %s\n\n", str_dup);
    free(str_dup); // Free memory allocated by ft_strdup

    // Test ft_substr function
    char *str_substr = "Hello, World!";
    char *sub_str = ft_substr(str_substr, 7, 5);
    printf("Substring from index 7 with length 5: %s\n\n", sub_str);
    free(sub_str); // Free memory allocated by ft_substr

    // Test ft_strjoin function
    char *str1_strjoin = "Hello, ";
    char *str2_strjoin = "World!";
    char *joined_str = ft_strjoin(str1_strjoin, str2_strjoin);
    printf("Joined string: %s\n\n", joined_str);
    free(joined_str); // Free memory allocated by ft_strjoin

    // Test ft_strtrim function
    char *str_strtrim = "   Hello, World!   ";
    char *trimmed_str = ft_strtrim(str_strtrim, " ");
    printf("Trimmed string: %s\n\n", trimmed_str);
    free(trimmed_str); // Free memory allocated by ft_strtrim

    // Test ft_split function
    char *str_split = "Hello,World,Split,Function";
    char **split_str = ft_split(str_split, ',');
    printf("Split strings:\n");
    for (int i = 0; split_str[i] != NULL; i++) {
        printf("%s\n", split_str[i]);
        free(split_str[i]); // Free memory allocated for each split string
    }
    free(split_str); // Free memory allocated by ft_split

    // Test ft_itoa function
    printf("String representation of -123: %s\n", ft_itoa(-123));
    printf("String representation of 456: %s\n\n", ft_itoa(456));

    // Test ft_strmapi function
    char *str_strmapi = "hello";
    char *mapped_str = ft_strmapi(str_strmapi, &ft_map_function);
    printf("Mapped string: %s\n\n", mapped_str);
    free(mapped_str); // Free memory allocated by ft_strmapi

    // Test ft_striteri function
    char str_striteri[] = "Hello";
    ft_striteri(str_striteri, &ft_print_index_char);
    printf("\n\n");

    // Test ft_putchar_fd function
    printf("Printing character 'A' to stdout:\n");
    ft_putchar_fd('A', 1);
    printf("\n");

    // Test ft_putstr_fd function
    printf("Printing string 'Hello' to stdout:\n");
    ft_putstr_fd("Hello", 1);
    printf("\n");

    // Test ft_putendl_fd function
    printf("Printing string 'Hello' followed by a newline to stdout:\n");
    ft_putendl_fd("Hello", 1);

    // Test ft_putnbr_fd function
    printf("Printing number 123 to stdout:\n");
    ft_putnbr_fd(123, 1);
    printf("\n");

    // Test ft_lstnew function
    t_list *new_node = ft_lstnew("New Node");
    printf("New node content: %s\n\n", (char *)new_node->content);
    free(new_node); // Free memory allocated by ft_lstnew

    // Test ft_lstadd_front function
    t_list *list = NULL;
    ft_lstadd_front(&list, ft_lstnew("First Node"));
    ft_lstadd_front(&list, ft_lstnew("Second Node"));
    printf("Content of first node: %s\n", (char *)list->content);
    printf("Content of second node: %s\n\n", (char *)list->next->content);
    ft_lstclear(&list, &ft_free_content); // Free memory allocated by ft_lstadd_front

    // Test ft_lstsize function
    t_list *list_size = NULL;
    ft_lstadd_front(&list_size, ft_lstnew("First Node"));
    ft_lstadd_front(&list_size, ft_lstnew("Second Node"));
    ft_lstadd_front(&list_size, ft_lstnew("Third Node"));
    printf("Size of list: %d\n\n", ft_lstsize(list_size));
    ft_lstclear(&list_size, &ft_free_content); // Free memory allocated by ft_lstadd_front

    // Test ft_lstlast function
    t_list *list_last = NULL;
    ft_lstadd_front(&list_last, ft_lstnew("First Node"));
    ft_lstadd_front(&list_last, ft_lstnew("Second Node"));
    ft_lstadd_front(&list_last, ft_lstnew("Third Node"));
    printf("Content of last node: %s\n\n", (char *)ft_lstlast(list_last)->content);
    ft_lstclear(&list_last, &ft_free_content); // Free memory allocated by ft_lstadd_front

    // Test ft_lstadd_back function
    t_list *list_back = NULL;
    ft_lstadd_back(&list_back, ft_lstnew("First Node"));
    ft_lstadd_back(&list_back, ft_lstnew("Second Node"));
    ft_lstadd_back(&list_back, ft_lstnew("Third Node"));
    printf("Content of last node: %s\n\n", (char *)ft_lstlast(list_back)->content);
    ft_lstclear(&list_back, &ft_free_content); // Free memory allocated by ft_lstadd_back

    // Test ft_lstclear function
    t_list *list_clear = NULL;
    ft_lstadd_front(&list_clear, ft_lstnew("First Node"));
    ft_lstadd_front(&list_clear, ft_lstnew("Second Node"));
    ft_lstadd_front(&list_clear, ft_lstnew("Third Node"));
    printf("List before clearing:\n");
    ft_lstiter(list_clear, &ft_print_list_content);
    printf("\n");
    ft_lstclear(&list_clear, &ft_free_content);
    printf("List after clearing:\n");
    ft_lstiter(list_clear, &ft_print_list_content);

    // Test ft_lstiter function
    t_list *list_iter = NULL;
    ft_lstadd_front(&list_iter, ft_lstnew("First Node"));
    ft_lstadd_front(&list_iter, ft_lstnew("Second Node"));
    ft_lstadd_front(&list_iter, ft_lstnew("Third Node"));
    printf("\n\nList content before iteration:\n");
    ft_lstiter(list_iter, &ft_print_list_content);
    ft_lstiter(list_iter, &ft_to_upper);
    printf("\nList content after iteration (converted to uppercase):\n");
    ft_lstiter(list_iter, &ft_print_list_content);
    printf("\n");
    ft_lstclear(&list_iter, &ft_free_content); // Free memory allocated by ft_lstadd_front

    // Test ft_lstmap function
    t_list *list_map = NULL;
    ft_lstadd_front(&list_map, ft_lstnew("First Node"));
    ft_lstadd_front(&list_map, ft_lstnew("Second Node"));
    ft_lstadd_front(&list_map, ft_lstnew("Third Node"));
    printf("\n\nList content before mapping:\n");
    ft_lstiter(list_map, &ft_print_list_content);
    t_list *mapped_list = ft_lstmap(list_map, &ft_map_content, &ft_free_content);
    printf("\nList content after mapping (each node content doubled):\n");
    ft_lstiter(mapped_list, &ft_print_list_content);
    ft_lstclear(&list_map, &ft_free_content);     // Free memory allocated by ft_lstadd_front
    ft_lstclear(&mapped_list, &ft_free_content);  // Free memory allocated by ft_lstmap

    return 0;
}
