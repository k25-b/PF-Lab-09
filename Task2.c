#include <stdio.h>
int applyDiscount(float price, int tier) {
    if (tier == 1) {
        return price*0.95;
    }
    else if (tier == 2) {
        return price*0.90;
    }
    else if (tier == 3) {
        return price*0.80;
    }
    else if (tier == 4) {
        return price*0.70;
    }
}
void printInvoice(float original, float discounted) {
    printf("    ORIGINIAL AMOUNT: %.2f\n", original);
    if (discounted < 2000) {
        printf("    DELIVERY CHARGES: Rs150\n");
    }
    printf("    DISCOUNTED AMOUNT: %.2f\n", discounted);
    printf("    PAYABLE AMOUNT:%.2f\n",discounted+150);
}
int main() {
    float price;
    int tier;
    printf("Enter your bill: ");
    scanf("%f", &price);
    printf("Enter your tier Bronze(1), Silver(2), Gold(3) or Platinum(4)\n");
    scanf("%d", &tier);
    int new_price = applyDiscount(price, tier);
    printInvoice(price, new_price);
}
