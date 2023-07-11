#include <stdio.h>

int main() 
{
    printf("------------------------------------------------------------------------\n");
    printf("    School name\n");
    printf("Annual Report Card\n");

    // User input
    char name[100];
    int standard;
    char section[2];
    int mathMarks, engMarks, hindiMarks, sciMarks, socialSciMarks;

    printf("Enter student name: ");
    scanf("%s",name);
    
    printf("Enter standard (Class): ");
    scanf("%d", &standard);

    printf("Enter section: ");
    scanf("%s", section);

    printf("Enter marks secured in Mathematics: ");
    scanf("%d", &mathMarks);

    printf("Enter marks secured in English: ");
    scanf("%d", &engMarks);

    printf("Enter marks secured in Hindi: ");
    scanf("%d", &hindiMarks);

    printf("Enter marks secured in Science: ");
    scanf("%d", &sciMarks);

    printf("Enter marks secured in Social Science: ");
    scanf("%d", &socialSciMarks);

    // Calculate total marks
    int totalMarks = mathMarks + engMarks + hindiMarks + sciMarks + socialSciMarks;

    // Check for valid total marks
    if (totalMarks < 0 || totalMarks > 500) {
        printf("Invalid total marks! Please check the entered marks.\n");
        return 0;
    }

    // Assign grade based on total marks
    char grade;
    if (totalMarks >= 450 && totalMarks <= 500)
        grade = 'A';
    else if (totalMarks >= 400 && totalMarks <= 449)
        grade = 'B';
    else if (totalMarks >= 350 && totalMarks <= 399)
        grade = 'C';
    else if (totalMarks >= 300 && totalMarks <= 349)
        grade = 'D';
    else if (totalMarks >= 200 && totalMarks <= 299)
        grade = 'E';
    else
        grade = 'F';

    // Print report card
    printf("\nName: %s\n", name);
    printf("Standard: %d\n", standard);
    printf("Section: %s\n", section);
    printf("Marks Secured out of 100\n");
    printf("Mathematics: %d\n", mathMarks);
    printf("English: %d\n", engMarks);
    printf("Hindi: %d\n", hindiMarks);
    printf("Science: %d\n", sciMarks);
    printf("Social Science: %d\n", socialSciMarks);
    printf("Total marks secured: %d\n", totalMarks);
    printf("Grade: %c\n", grade);

    return 0;
}
