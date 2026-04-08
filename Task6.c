#include <stdio.h>
float bills[] = {35, 50, 70, 250, 90000};
int totalRevenue(float bill[], int n) {
   int total = 0;
   for (int i = 0; i < n; i++) {
       total = total + bill[i];
   }
   return total;
}
int bestTable(float bill[], int n) {
   int best = 0;
   for (int i = 0; i < n; i++) {
       if (best < bill[i]) {
           best = i;
       }
   }
   return best;
}
int isProfitable(float bill[], int n) {
   int profit = 0;
   for (int i = 0; i < n; i++) {
       profit = profit + bill[i];
   }
   if (profit > 10000) {
       return 1;
   }
   else {
       return 0;
   }
}
int main() {
   printf("TOTAL REVENUE: %d\n", totalRevenue(bills, 5));
   printf("PROFITABLE: %d\n", isProfitable(bills, 5));
   printf("BEST_TABLE: %d", bestTable(bills, 5));
