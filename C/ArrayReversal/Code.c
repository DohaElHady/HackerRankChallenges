#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    int arr_reversed[num];
    int reverse_index=0;
    for (int j=num-1;j>=0;j--){
        arr_reversed[reverse_index]=arr[j];
        reverse_index++;
    }
    for(i = 0; i < num; i++)
        printf("%d ", *(arr_reversed + i));
    return 0;
}
