#include <stdio.h>

int main()
{
    char name[50];
    int age;
    float temperature;
    int is_student;

    printf("Enter the name: ");
    scanf("%49s", name);

    printf("Enter the age: ");
    scanf("%d", &age);

    printf("Enter the temperature: ");
    scanf("%f", &temperature);

    printf("Is the student (1 = yes, 0 = no): ");
    scanf("%d", &is_student);

    if (temperature > 30)
    {
        printf("High temperature of: %.2f\n", temperature);
    }
    else
    {
        printf("Low temperature of: %.2f\n", temperature);
    }
    if (is_student==1){printf("True");}
    else{printf("False");}

    return 0;
}
