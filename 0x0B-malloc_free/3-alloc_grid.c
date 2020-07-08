#include <stdlib.h>
/**
 * alloc_grid - main
 * @width: input2
 * @height: input1
 * Return: return value
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int col, row;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(*p) * height);
	if (!p)
		return (NULL);
	for (row = 0; row < height; row++)
	{
		p[row] = malloc(sizeof(**p) * width);
		if (!*p)
			return (NULL);
		for (col = 0; col < width; col++)
			p[row][col] = 0;
	}
	return (p);
}
