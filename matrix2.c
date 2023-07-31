#include  <stdio.h>
int main() {
   int i,j,n=7;
   for(i=1;i<=n;i=i+1) {
     for(j=1;j<=n;j=j+1) {
      if(i==1 || i==n || j==1 || j==n)
   
      printf("x ");  
   else
    printf("  ");
    }
  printf(" \n");
}
  return 0;
 }
