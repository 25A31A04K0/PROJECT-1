#include <stdio.h>

struct Attendance {
    int roll;
    char name[30];
    int daysPresent;
    float percentage;
};

int main() {
    struct Attendance s[50];
    int n, totalDays, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter total number of working days: ");
    scanf("%d", &totalDays);

    for(i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Number of days present: ");
        scanf("%d", &s[i].daysPresent);

        // Calculate attendance percentage
        s[i].percentage = ((float)s[i].daysPresent / totalDays) * 100;
    }

    // Display attendance record with percentage
    printf("\n--- Attendance Record ---\n");
    printf("Roll\tName\tDays Present\tPercentage\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%-10s\t%d\t\t%.2f%%\n",
               s[i].roll,
               s[i].name,
               s[i].daysPresent,
               s[i].percentage);
    }

    return 0;
}
