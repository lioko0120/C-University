#include <stdio.h>
#include <stdlib.h>

int main (void) {
  unsigned int frequency1=0;
  unsigned int frequency2=0;
  unsigned int frequency3=0;
  unsigned int frequency4=0;
  unsigned int frequency5=0;
  unsigned int frequency6=0;
  
  for(unsigned int roll=1; roll<= 60000000; roll++){
   srand(time(NULL))
   int face = 1 + rand()%6;
    switch(face) {
        case 1:
        ++frequency1;
        break;
        case 2:
        ++frequency1;
        break;
        case 3:
        ++frequency1;
        break;
        case 4:
        ++frequency1;
        break;
        case 5:
        ++frequency1;
        break;
        case 6:
        ++frequency1;
        break; }
  }
  printf("%s%13s\n", "face", "frequency");
  printf(" 1%13u\n", frequency1);
  printf(" 2%13u\n", frequency2);
  printf(" 3%13u\n", frequency3);
  printf(" 4%13u\n", frequency4);
  printf(" 5%13u\n", frequency5);
  printf(" 6%13u\n", frequency6);
}
