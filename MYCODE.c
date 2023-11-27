#include <unistd.h>
/*before using function check if first char in string is newline
if it is new line then we must return regardless of this function output
this function output will be 0 if no newline found*/
int	*find_newline (char *txt)
{
	size_t	i;

	i = 0;
	while (txt[i])
	{
		if (txt[i] == '\n')
			return (i);
		txt++;
	}
	return (0);
}


int	router(char *txt, char *to_return, char *to_remain)
{
	size_t	i;

	i = find_newline(txt);
	if (find_newline != 0)
	{
		to_return = ft_substr(txt, 0, (i + 1));
		to_remain = ft_substr(txt, (i + 1), ft_strlen (&txt[i + 1]));
	}
	else if (*txt == '\n')
	{
		to_return = ft_substr(txt, 0, (1));
		to_remain = ft_substr(txt, 1, ft_strlen(&txt[1]));
	}
	else
		//continue reading
}
