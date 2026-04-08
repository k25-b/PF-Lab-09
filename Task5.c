#include <stdio.h>
float toMegajoules(float kwh) {
   return kwh*3.6;
}
float toBTU(float kwh) {
   return kwh*3412.14;
}
float toCalories(float kwh) {
   return kwh*859845;
}
int main() {
   float kwh;
   printf("Enter the power in kWh: ");
   scanf("%f", &kwh);
   printf("Megajoules: %f\n", toMegajoules(kwh));
   printf("BTU: %f\n", toBTU(kwh));
   printf("Calories: %f\n", toCalories(kwh));
}
