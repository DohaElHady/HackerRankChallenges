#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int calculate_digit_frequency(char *str, int digit,int len){
    int count=0;
    char digit_char=digit+'0';
    for (int j=0;j<len;j++){
        if(digit_char==str[j]) ++count;
    }
    return count;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char str[1000];
    scanf("%s",str);
    int len= strlen(str);
    for (int i=0;i<10;i++){
        printf("%d ",calculate_digit_frequency(str,i,len));
    }
    return 0;
}
