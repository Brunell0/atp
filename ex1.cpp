#include <stdio.h>
#include <stdlib.h>

int count = 0;

int main(){
     count++;
     printf("%d\n", count);
     if (count < 100)
          return main();

     return 0;
}