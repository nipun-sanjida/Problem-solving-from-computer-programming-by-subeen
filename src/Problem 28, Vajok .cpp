#include <stdio.h>
#include <math.h>
void gunutokNumber(int number)
{
    int i, j;
    int root = sqrt(number);

    for(i = 1; i <=root; i++)
    {
        for(j = 0; j <=root; j++)
        {
            if(i * j == number)
            {
                printf("%d ", j);
            }
        }
    }
    printf("\n");
}
int main()
{
    int i, j, testCase, number,

    scanf("%d", &testCase);

    for(i = 0; i <testCase; i++)
    {
        scanf("%d", &number);
        gunutokNumber(number);
    }
    return 0;
}
