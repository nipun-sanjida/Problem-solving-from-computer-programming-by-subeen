#include <stdio.h>
void printGrad(int number)
{

    if(number < 44)
    {
        printf("F\n");
    }
    if(number >= 45 && number <=49)
    {
        printf("D\n");
    }
    if(number >= 50 && number <= 54)
    {
        printf("C\n");
    }
    if(number >= 55 && number <= 59)
    {
        printf("B-\n");
    }
    if(number >= 60 && number <=64)
    {
        printf("B\n");
    }
    if(number >= 65 && number <= 69)
    {
        printf("B+\n");
    }
    if(number >= 70 && number <= 74)
    {
        printf("A-\n");
    }
    if(number >= 75 && number <= 79)
    {
        printf("A\n");
    }
    if(number >= 80 && number <= 100)
    {
        printf("A+\n");
    }

}

int main()
{
    int i, testCase, number;

    scanf("%d", &testCase);

    for(i = 0; i <testCase; i++)
    {
        scanf("%d", &number);
        printf("case %d: ", i+1);

        printGrad(number);
    }
    return 0;
}
