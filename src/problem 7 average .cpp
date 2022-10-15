#include <stdio.h>
int main()
{
    int testCase, i, j,averageNum, number;

    scanf("%d", &testCase);

    for(i = 0; i <testCase; i++)
    {
        averageNum = 0;

        for(j = 0; j <5; j++)
        {
            scanf("%d", &number);
            averageNum = averageNum + number;
        }
        averageNum = averageNum /5;
        printf("%d\n", averageNum);
    }
    return 0;
}
