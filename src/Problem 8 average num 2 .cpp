#include <stdio.h>
int main()
{
    int testCase, i, j, number, student;
    double averagenum;

    scanf("%d", &testCase);

    for(i = 0; i <testCase; i++)
    {
        scanf("%d", &student);
        averagenum = 0;

        for(j = 0; j <student; j++)
        {
            scanf("%d", &number);
            averagenum = number + averagenum;
        }
        averagenum = averagenum / student;

        printf("%0.2lf\n", averagenum);
    }
    return 0;
}
