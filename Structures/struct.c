#include <stdio.h>

// Define a structure to store student information
struct Student {
    char name[50];  // Member to store the student's name
    int age;        // Member to store the student's age
    float gpa;      // Member to store the student's GPA
    int a;          // Member to store an integer value (used as a coordinate)
    int b;          // Member to store another integer value (used as a coordinate)
} coords;           // Declare a structure variable named coords

int main() {
    // Declare a structure variable of type Student
    struct Student student1;

    // Prompt and read the student's name
    printf("Enter student's name: ");
    fgets(student1.name, 50, stdin);

    // Prompt and read the student's age
    printf("Enter student's age: ");
    scanf("%d", &student1.age);

    // Prompt and read the student's GPA
    printf("Enter student's GPA: ");
    scanf("%f", &student1.gpa);

    // Display the values of the members of student1
    printf("\nStudent Information:\n");
    printf("Name: %s", student1.name); // Note: fgets() includes the newline character
    printf("Age: %d\n", student1.age);
    printf("GPA: %.2f\n\n", student1.gpa);

    // Assign values to the coordinates and print them
    coords.a = 10;
    coords.b = 20;
    printf("The coordinate a: %d\n", coords.a);
    printf("The coordinate b: %d", coords.b);

    return 0;
}
