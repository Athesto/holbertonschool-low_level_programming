/**
 * infinite_add - description
 * @n1: input
 * @n2: input
 * @r: input
 * @size_r: input
 * Return: char
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1_idx, n2_idx, r_idx, carry;
	int sumdig, new_len;
	char tmp_c;

	n1_idx = n2_idx = r_idx = carry = 0;

	while (n1[n1_idx] && n1[n1_idx + 1])
		n1_idx++;

	while (n2[n2_idx] && n2[n2_idx + 1])
		n2_idx++;

	while (n2_idx >= 0 || n1_idx >= 0)
	{
		sumdig = carry;
		if (n2_idx >= 0)
		{
			sumdig += n2[n2_idx] - '0';
			--n2_idx;
		}
		if (n1_idx >= 0)
		{
			sumdig += n1[n1_idx] - '0';
			--n1_idx;
		}
		r[r_idx] = (sumdig) % 10 + '0';
		carry = sumdig / 10;
		r_idx++;
		if (r_idx >= size_r - 1)
			return (0);
	}
	if (carry > 0)
		r[r_idx++] = carry + '0';
	new_len = r_idx - 1;
	for (r_idx = 0; r_idx < new_len / 2; r_idx++)
	{
		tmp_c = r[r_idx];
		r[r_idx] = r[new_len - r_idx];
		r[new_len - r_idx] = tmp_c;
	}
	r[new_len + 1] = '\0';
	return (r);
}
