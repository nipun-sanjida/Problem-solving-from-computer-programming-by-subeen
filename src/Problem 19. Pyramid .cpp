#include <stdio.h>
void pyramidlinePrint(int pyramid)
{
    int i;

    for(i = 1; i <= pyramid; i++)
    {
        for(int j =0; j < pyramid-i; j++)
        {
            printf(" ");
        }
        for(int j = 0; j <2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int testCase, i, pyramidLine;

    scanf("%d", &testCase);

    for(i = 0; i <testCase; i++)
    {
        scanf("%d", &pyramidLine);
        pyramidlinePrint(pyramidLine);
    }
    return 0;
}
