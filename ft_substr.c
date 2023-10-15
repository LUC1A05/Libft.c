
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
  char  *str;
  size_t  i;
  size_t  j;
  
  str = (char *)malloc(sizeof(*s)*(len+1));
  if (!str)
    return (NULL);
  i = 0;
  j = 0;
  while (s[i])
    {
      if (i >= size && j < len)
      {
        str[j] = s[i];
        j++;
      }
      i++;
    }
  str[j] = 0;
  return (str);
}
