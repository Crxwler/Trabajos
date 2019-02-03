#include <stdio.h>
#include <stdlib.h>

/*
Given an image represented by an NxN matrix, where each pixel in the image is 5 bytes,
 write a method to rotate the image by 90 degrees. Can you do this in place?
 */

int main()
{
	int n=5,aux=0;
	//scanf("%i",&n);
	int a[n][n];
	int x=1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j]=x;
			x++;
		}
	}
	for (int i = 0; i < n/2; ++i)
	{
		for (int j = i; j < n-i-1; ++j)
		{
		aux=a[i][j];
        a[i][j]=a[j][n-i-1];
        a[j][n-i-1]=a[n-i-1][n-j-1];
        a[n-i-1][n-j-1]=a[n-j-1][i];
        a[n-j-1][i]=aux;
        	
		}
	}
	//imprimir
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%i ",a[i][j]);
		}
		printf("\n");
	}

    return 0;
}
