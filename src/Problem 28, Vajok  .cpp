#include <stdio.h>
#include <math.h>
void gunitokNumber(int number)
{
    int i, j;
    int root = sqrt(number);

    for(i = 1; i <=number; i++)
    {
            if(number % i == 0)
            {
                printf("%d ",i);
            }
    }
    printf("\n");
}
int main()
{
    int i, j, testCase, number;

    scanf("%d", &testCase);

    for(i = 0; i <testCase; i++)
    {
        scanf("%d", &number);
        printf("Case %d: ", i+1);

        gunitokNumber(number);
    }
    return 0;
}
