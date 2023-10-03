#include"main.h"

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int *) * width);
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	if (arr == NULL)
		return (NULL);
	else
		return (arr);
}
