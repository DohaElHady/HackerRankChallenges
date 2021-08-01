#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int count_unique_char(char* str) {
    int hash[128] = { 0 };
    int i, c = 0;
    for (i = 0; i < strlen(str); ++i) {
        hash[str[i]] = 1;
    }
    for (i = 0; i < 128; ++i) {
        c += hash[i];
    }

    return c;

}

int lexicographic_sort(const char* a, const char* b) {
    return strcmp(b,a);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(a,b);
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int x=count_unique_char(a);
    int y=count_unique_char(b);
    if (x>y){
        return 0;
    }
    else if(y>x){
        return 1;
    }
    else {
        return lexicographic_sort(a,b);
    }
}

int sort_by_length(const char* a, const char* b) {
    if (strlen(a)>strlen(b)){
        return 0;
    }
    else if(strlen(a)<strlen(b)){
        return 1;
    }
    else {
        return lexicographic_sort(a,b);
    }
}


void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    char* holder;
    for (int i=0;i<len;++i){
          for (int j=0;j<len;++j)
              if(cmp_func(arr[i],arr[j])>0){
                  holder=arr[i];
                  arr[i]=arr[j];
                  arr[j]=holder;
              }
      }

}


int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}
