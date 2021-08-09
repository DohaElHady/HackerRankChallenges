#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


int max_within_range(int arr[],int k,int n){
    int maxofarr=0;
    for (int i=0;i<(n*n);i++){
        if (arr[i]<k){
            if(arr[i]>maxofarr){
                maxofarr=arr[i];}
        }
    }
    return maxofarr;
}
void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int andOp[n*n];
  int xorOp[n*n];
  int orOp[n*n];
  int x=0;
  for (int a=1;a<n;a++){
      for (int b=a+1;b<=n;b++){
          andOp[x]=a&b;
          orOp[x]=a|b;
          xorOp[x]=a^b;
          ++x;
      }
  }

      printf("%d\n",max_within_range(andOp,k,n));
      printf("%d\n",max_within_range(orOp,k,n));
      printf("%d\n",max_within_range(xorOp,k,n));

}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
