int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int     hv_necklace(char *s1, char *s2)
{
	char *temp, aux;
	int	index1, cont, rotate, len1;

	index1 = 0;
	rotate = 0;
	cont = 0;
	if (ft_strlen(s1) != ft_strlen(s2))
		return (0);
	if (s1 == s2)
		return (1);
	if (!(temp = (char *)malloc(ft_strlen(s1))))
		return (0);
	while (s2[index1])
	{
		temp[index1] = s2[index1];
		index1++;
	}
	temp[index1] = '\0';
	while (index1 > 0)
	{
		if (temp[index1 - 1] == s1[index1 - 1])
		{
			if (index1 - 1 == 0)
				return (1);
			else
				;			
		}
		else if (cont < ft_strlen(s1))
		{
			cont++;
			while (rotate < cont && cont <= ft_strlen(s1))
			{
				len1 = ft_strlen(s1);
				aux = temp[len1 - 1];
				while (len1 > 0)
				{
					while (len1 - 1 > 0)
					{
						temp[len1 - 1] = temp[len1 - 2];
						len1--;
					}
					len1--;
				}
				temp[len1] = aux;
				rotate++;
				index1 = ft_strlen(s1) + 1;
			}
		}
		else
			return (0);
		
		index1--;		
	}
	return (0);
}
