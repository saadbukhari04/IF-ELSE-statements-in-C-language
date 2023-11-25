#include <stdio.h>

int main() {
    float mainSalary, gross, medicalAllowance, conveyanceAllowance, houseRent, tax, netSalary;
    
    printf("Enter Basic Salary: ");
    scanf("%f", &mainSalary);
    
    medicalAllowance = 0.10 * mainSalary;
    conveyanceAllowance = 0.15 * mainSalary;
    houseRent = 0.45 * mainSalary;
    gross = mainSalary + medicalAllowance + conveyanceAllowance + houseRent;
    
    float annualGross = 12 * gross;
    
    if (annualGross <= 200000)
        tax = 0;
    else if (annualGross <= 400000)
        tax = 0.10 * gross;
    else if (annualGross <= 600000)
        tax = 0.15 * gross;
    else if (annualGross <= 800000)
        tax = 0.20 * gross;
    else
        tax = 0.25 * gross;
	netSalary = gross - tax;
    printf("\nMedical Allowance: %f\n", medicalAllowance);
    printf("Conveyance Allowance: %f\n", conveyanceAllowance);
    printf("House Rent: %f\n", houseRent);
    printf("Gross Salary: %f\n", gross);
    printf("Tax: %f\n", tax);
    printf("Net Salary: %f\n", netSalary);
    return 0;
}
