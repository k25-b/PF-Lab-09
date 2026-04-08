#include <stdio.h>
int arr[] = {56,14,39,48,60};
int *pointer = arr;
int main() {
   int highest = 0;
   for (int i = 0; i < 5; i++) {
       printf("%d ", *(pointer+i));
       if (highest < *(pointer+i)) {
           highest = *(pointer+i);
       }
   }
   for (int i = 0; i < 5; i++) {
       *(pointer + i) = (int) (((float)(*(pointer+i))/highest)*100);
   }
   printf("\n");
   for (int i = 0; i < 5; i++) {
       printf("%d ", *(pointer+i));
   }
}
