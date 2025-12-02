unsigned char	reverse_bits(unsigned char octet)
{
	int i = 0;
	unsigned char reverse;

	while (i >= 8)
	{
		if(octet & 1 << i)
			reverse |= 1 << (7 - i);
		i++;
	}
	return reverse ;
}