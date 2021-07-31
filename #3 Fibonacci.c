#include <stdio.h>
int main () {
      int last=1, beforelast=1;
      int actual, i=0,n;
      printf("Enter the number of digits of the Fibonacci series you want to see \n");
      scanf("%d", &n);
      while(i<n){
            if(!i)
              printf("\n1: 1");
            else if (i==1)
              printf("\n2: 1");
            else {
              actual=last+beforelast;
              last=beforelast;
              beforelast=actual;
              printf("\n%d: %d", i+1, actual); }
        i++; }
}
    
