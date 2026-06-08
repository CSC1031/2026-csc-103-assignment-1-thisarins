
#include <stdio.h>

int main() {
    float math, science, english;
    float total, average;
    char grade;

    // 1. Input Section
    printf("Enter marks for Mathematics (out of 100): ");
    scanf("%f", &math);

    printf("Enter marks for Science (out of 100): ");
    scanf("%f", &science);

    printf("Enter marks for English (out of 100): ");
    scanf("%f", &english);

    // 2. Processing Section
    total = math + science + english;
    average = total / 3.0;

    // Determine Grade based on Average
    if (average >= 80.0 && average <= 100.0) {
        grade = 'A';
    } else if (average >= 70.0) {
        grade = 'B';
    } else if (average >= 60.0) {
        grade = 'C';
    } else if (average >= 50.0) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // 3. Output Section
    printf("\n--- Results ---\n");
    printf("Total: %.2f\n", total);
    printf("Average: %.2f\n", average);
    printf("Grade: %c\n", grade);

    // Pass/Fail Rule: ALL subjects must be >= 40 to pass
    if (math >= 40 && science >= 40 && english >= 40) {
        printf("Result: PASS\n");
    } else {
        printf("Result: FAIL (Subject mark below 40)\n");
    }

    return 0;
}
