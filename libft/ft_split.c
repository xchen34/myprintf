/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leochen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:49:20 by leochen           #+#    #+#             */
/*   Updated: 2023/11/22 14:10:54 by leochen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<stdlib.h>
#include "libft.h"

static char	**malloc_fail(char **split, int word)
{
	while (word > 0)
		free(split[word--]);
	free(split);
	return (NULL);
}

static int	count_words(char const *s, char c)
{
	int	count;
	int	flag;

	count = 0;
	flag = 0;
	while (*s)
	{
		if (*s == c && flag == 1)
			flag = 0;
		else if (*s != c && flag == 0)
		{
			count++;
			flag = 1;
		}
		s++;
	}
	return (count);
}

static char	*write_word(char *word, char const *s, int end, int word_len)
{
	int	i;

	i = 0;
	while (word_len > 0)
	{
		word[i] = s[end - word_len];
		i++;
		word_len--;
	}
	word[i] = '\0';
	return (word);
}

static char	**ft_split_words(char const *s, char c, char **s2, int count)
{
	int	i;
	int	j;
	int	word_len;

	i = 0;
	j = 0;
	word_len = 0;
	while (j < count)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			word_len++;
			i++;
		}
		s2[j] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (s2[j] == NULL)
			return (malloc_fail(s2, j));
		write_word(s2[j], s, i, word_len);
		word_len = 0;
		j++;
	}
	s2[j] = 0;
	return (s2);
}

char	**ft_split(char const *s, char c)
{
	char			**s2;
	unsigned int	count;

	if (!s)
		return (0);
	count = count_words(s, c);
	s2 = (char **)malloc(sizeof(char *) * (count + 1));
	if (!s2)
		return (0);
	s2 = ft_split_words(s, c, s2, count);
	return (s2);
}

/*static chadr	**malloc_fail(char **split, int word)
{
	while (word > 0)
		free(split[word--]);
	free(split);
	return (NULL);
}

static int	count_words(char *s, char c)
{
	int	count;
	int	flag;

	count = 0;
	flag = 0;
	while (*s)
	{
		if (*s == c && flag == 1)
			flag = 0;
		else if (*s != c && flag == 0)
		{
			count++;
			flag = 1;
		}	
		s++;
	}
	return (count);
}

char	*write_word(char *s, size_t start, size_t end)
{
	char	*word;

	word = (char *)malloc(sizeof(char) * (end - start + 2));
	if (word == NULL)
		return (NULL);
	if (start <= end)
		ft_memcpy(word, s + start, end - start + 1);
	word[end - start + 1] = '\0';
	return (word);
}
*/
