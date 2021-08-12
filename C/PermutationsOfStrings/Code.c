#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char **s,int x,int y)
{
    char *holder;
    holder = s[x];
    s[x] = s[y];
    s[y] = holder;
}
int next_permutation(int n, char **s){
    int i = n-1,j=n-1;
    while(i>0 && strcmp(s[i-1],s[i])>=0) 
        i--;
    if (i<=0) 
        return 0;
    
    while(strcmp(s[i-1],s[j])>=0) 
        j--;
    swap(s, i-1, j);
    
    
    j = n-1;
    while(i<j) {
        swap(s, i, j);
        i++;
        j--;
    }
    return 1;
    }

int main()
