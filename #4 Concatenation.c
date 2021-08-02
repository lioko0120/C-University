#include <stdio.h>
#define DIM 5

int main() {
  int i=0;
  int a[DIM], b[DIM], c[2*DIM];
  printf("Fulfill 2 array of %d dimension", DIM);
  while (i<DIM){
    printf("\nArray a, position %d\n", i);
    scanf ("%d", &a[i]);
    printf("\nArray b, position %d\n", i);
    scanf ("%d", &b[i]);
    i++;}
  i=0;
  while (i<DIM){
    c[i]=a[i];
    c[i+DIM]=b[i];
    i++;}
  printf("\nFusioned Array is ");
  i=0;
  while (i<2*DIM){
    printf("%d", c[i]);
    i++;}
}
    
