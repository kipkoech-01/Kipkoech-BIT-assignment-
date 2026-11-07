#include <stdio.h>

// This is like KRA. You give them gross salary, they tell you tax.
float calculateTax(float grossSalary) {
    if (grossSalary < 30000) {
        return grossSalary * 0.05;
    }
    else if (grossSalary <= 59999) {
        return grossSalary * 0.10;
    }
    else {
        return grossSalary * 0.15;
    }
}

int main() {
    float grossSalary, tax, netSalary;

    printf("Enter employee's gross salary (KSh): ");
    scanf("%f", &grossSalary);

    tax = calculateTax(grossSalary);
    netSalary = grossSalary - tax;

    printf("\nGross Salary: KSh %.2f\n", grossSalary);
    printf("Tax Amount: KSh %.2f\n", tax);
    printf("Net Salary: KSh %.2f\n", netSalary);
    return 0;
}