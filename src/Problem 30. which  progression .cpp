#include <stdio.h>
int progressionFinder(double number[]);

int main()
{
    int i, testCase, j,result;
    double number[3];

    scanf("%d", &testCase);

    for(i = 0; i <testCase; i++)
    {
       for(j = 0; j <3; j++)
       {
           scanf("%lf", &number[j]);
       }
       printf("Case %d: ", i+1);
       progressionFinder(number);
    }

    return 0;
}

int progressionFinder(double number[])
{
    double resultOfDivition, resultOfMinus;

    resultOfDivition = number[1] / number[0] ;
    resultOfMinus    = number[1] - number[0];



    if(number[2] / number[1] == resultOfDivition && number[2] - number[1] == resultOfMinus)
    {
        printf("Both\n\n");
    }
    else if(number[2] / number[1] == resultOfDivition)
    {
        printf("Geometric Progression\n\n");

    }
    else if(number[2] - number[1] == resultOfMinus)
    {
        printf("Arithmetic Progression\n\n");

    }

    else
    {
        printf("None\n\n");
    }
}
