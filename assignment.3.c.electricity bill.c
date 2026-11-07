#include <stdio.h>

// This is like the KPLC office. You tell them units, they tell you the bill.
float calculateBill(float units) {
    float bill;

    // Small usage - 100 units and below
    if (units <= 100) {
        bill = units * 10;
    }
    // Medium usage - 101 to 200 units
    else if (units <= 200) {
        // 1000 for first 100, plus 15 for the rest
        bill = (100 * 10) + (units - 100) * 15;
    }
    // Big usage - above 200 units
    else {
        // 1000 for first 100, 1500 for next 100, plus 20 for the rest
        bill = (100 * 10) + (100 * 15) + (units - 200) * 20;
    }

    return bill;
}

int main() {
    float units, bill;

    // Ask the customer: "How many units did you use?"
    printf("Enter number of units consumed: ");
    scanf("%f", &units);

    // Call KPLC to calculate the bill
    bill = calculateBill(units);

    // Show the receipt
    printf("\nUnits Consumed: %.0f units\n", units);
    printf("Total Electricity Bill: KSh %.2f\n", bill);

    return 0;
}