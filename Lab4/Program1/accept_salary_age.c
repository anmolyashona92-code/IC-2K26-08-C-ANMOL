#include <stdio.h>

int main()
{
    float salary;
    int age;

    printf("Enter salary: ");
    scanf("%f", &salary);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Salary = %.2f\n", salary);
    printf("Age = %d", age);

    return 0;
}