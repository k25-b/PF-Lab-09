#include <stdio.h>
#include <sec_api/stdlib_s.h>
int main() {
   void * sensor_pointer;
   int vibrations = 99;
   float temperature = 88.9;
   char system_message = 'C';
   sensor_pointer = &vibrations;
   printf("Vibrations: %d\n", *((int *)(sensor_pointer)));
   printf("ADDRESS: %p\n", sensor_pointer);
   sensor_pointer = &temperature;
   printf("Temp: %.1f\n", *((float *)(sensor_pointer)));
   printf("ADDRESS: %p\n", sensor_pointer);
   sensor_pointer  = &system_message;
   printf("%c\n", *((char *)(sensor_pointer)));
   printf("ADDRESS: %p\n", sensor_pointer);
   if (*(char*)(sensor_pointer) == 'N') {
       printf("Normal Conditions!");
   }
   else if (*(char*)(sensor_pointer) == 'W') {
       printf("Warning Conditions!");
   }
   else if (*(char*)(sensor_pointer) == 'C') {
       printf("Critical Conditions!");
   }


}
