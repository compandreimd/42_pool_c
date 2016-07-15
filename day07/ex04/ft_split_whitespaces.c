#include <stdlib.h>

int	spc(char *c)
{
	int i;
	int k;
			
	k = 0;
	i = 0;
	while (c[i])
	{
		if (c[i] == ' ' || c[i] == '\t' || c[i] == '\n')
		{
			k++;
		}	
		i++;
	}
	k++;
	return (k);
}

char	*getstr(int n, int m, char *str)
{
	char 	*rs;
	int 	i;
	
	rs = malloc(sizeof(char) * (m - n + 1));
	if (rs)
	{
		i = n;
		while (m > i)
		{	
			rs[i - n] = str[i];
			i++;				
		}
		rs[i - n] = '\0';
	}
	return rs;
}

char	**ft_split_whitespaces(char *str)
{
	char 	**rs;
	int 	i;
	int 	k;
	int 	last;
	
	if(!str)
		return (0);			
	rs = (char**)malloc(spc(str) * sizeof(char*)); 
	if (rs)
	{
		i = 0;
		last = -1;
		k = 0;
		while (str[i])
		{
			if(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			{	
				rs[k] = getstr(last + 1,i,str);		
				last = i;
				k++;
			}
			i++;
		}	
		rs[k] = getstr(last + 1,i,str);	
	}
	return rs;
}
