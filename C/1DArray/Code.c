#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num,*arr,sum=0;
    scanf("%d",&num);
    arr=(int*) malloc(num*sizeof(int));
    for(int i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    for(int i = 0; i < num; i++) {
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}
