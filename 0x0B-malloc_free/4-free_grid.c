/**
 * free_grid - main
 * @grid: input1
 * @height: input2
 */
void free_grid(int **grid, int height)
{
	int h_idx; /* height index */

	for (int h_idx = 0; h_idx < height; h_idx++)
	{
		free(grid[h_idx]);
	}
	free(grid);
}
