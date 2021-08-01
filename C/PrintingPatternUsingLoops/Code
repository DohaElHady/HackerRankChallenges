#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void arr_draw(int n)
{
    int arr_dim = (n-1)*2+1;
    int arr [arr_dim][arr_dim];
    int center=n-1;
    for (int k=0;k<n;k++)
    {
        for(int r=center-k;r<=center+k;r++)
        {
            arr[r][center-k]=k+1;
            arr[r][center+k]=k+1;
        }
        for(int c=center-k;c<=center+k;c++)
        {
            arr[center-k][c]=k+1;
            arr[center+k][c]=k+1;
        }
    }
    for (int i = 0; i < arr_dim; i++)
    {
        for (int j = 0; j < arr_dim; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

}
int main()
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    arr_draw(n);
    return 0;
}
