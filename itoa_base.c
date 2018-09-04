#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char		*ft_itoa_base(int n, int base)
{
	char	*str;
	char 	*hex;


	hex = "0123456789ABCDEF";
	if (!(str = (char *)malloc(sizeof(char) * 2)))
		return (NULL);
	// if (n == -2147483648)
	// 	return (ft_strcpy(str, "-2147483648"));
	if (n < 0)
	{
		str[0] = '-';
		str[1] = '\0';
		str = ft_strjoin(str, ft_itoa(-n));
	}
	else if (n >= 10)
		str = ft_strjoin(ft_itoa(n / base), ft_itoa(n % base));
	else if (n < 10 && n >= 0)
	{
		str[0] = hex[n % base];//n + '0';
		str[1] = '\0';
	}
	return (str);
}
int main(){
	printf("%s\n", ft_itoa_base(42, 16));
}