#include<stdio.h>
#include<string.h>

int ** allocateMatrix(int rows, int col)
{
	int **mat = (int **)malloc(row*sizeof(int *));
	for(int i = 0; i < rows; i++)
	{
		matrix[i] = (int *)malloc(col*sizeof(int));
	}
	
	return mat;
}

int ** matrixMultiply(int **A, int rowsA, int colA, int **B, int rowsB, int colB)
{
	if(colA != rowsB)
	{
		return NULL:
	}
	
	int** result = allocateMatrix(rowsB, colA);
	for(int i = 0; i < rowsB; i++)
	{
		for(int j = 0; j < colA; j++)
		{
			result[i][j] = 0;
		}
		for(int k = 0; k < colA; k++)
		{
			
		}
	}
	return result;
}

void main()
{
	matrixMulti
}


