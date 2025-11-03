#include <stdio.h>

int main() {
    int totalCustomers, items, code, qty;
    float total, grandTotal = 0, price, discount;
    char name[50];

    printf("===== Smart Canteen Billing System =====\n\n");
    printf("Enter total number of customers: ");
    scanf("%d", &totalCustomers);

    for (int i = 1; i <= totalCustomers; i++) {
        printf("\n--- Customer %d ---\n", i);
        printf("Enter customer name: ");
        scanf("%s", name);

        printf("Enter number of items: ");
        scanf("%d", &items);

        total = 0;

        for (int j = 1; j <= items; j++) {
            printf("\nMenu:\n");
            printf("1. Sandwich - 80\n");
            printf("2. Burger - 120\n");
            printf("3. Pizza Slice - 150\n");
            printf("4. Coffee - 60\n");
            printf("5. Juice - 50\n");

            printf("Enter item code: ");
            scanf("%d", &code);
            printf("Enter quantity: ");
            scanf("%d", &qty);

            if (code == 1) {
                price = 80 * qty;
                printf("Sandwich x %d = ₹%.2f\n", qty, price);
            } 
            else if (code == 2) {
                price = 120 * qty;
                printf("Burger x %d = ₹%.2f\n", qty, price);
            } 
            else if (code == 3) {
                price = 150 * qty;
                printf("Pizza Slice x %d = ₹%.2f\n", qty, price);
            } 
            else if (code == 4) {
                price = 60 * qty;
                printf("Coffee x %d = ₹%.2f\n", qty, price);
            } 
            else if (code == 5) {
                price = 50 * qty;
                printf("Juice x %d = ₹%.2f\n", qty, price);
            } 
            else {
                printf("Invalid code, skipping...\n");
                price = 0;
            }

            total = total + price;
        }

        printf("\nTotal Bill: ₹%.2f\n", total);

        if (total > 500) {
            discount = total * 0.10;
            printf("Discount (10%%): ₹%.2f\n", discount);
            total = total - discount;
        }

        printf("Final Bill for %s: ₹%.2f\n", name, total);
        grandTotal = grandTotal + total;
    }

    printf("\n========= Canteen Summary =========\n");
    printf("Total Customers Served: %d\n", totalCustomers);
    printf("Total Revenue: ₹%.2f\n", grandTotal);
    printf("===================================\n");

    return 0;
}
