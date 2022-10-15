#include <stdio.h>
int printbox(int box);

int main()
{
    int testCase, i, j, box;

    scanf("%d", &testCase);

    for(i = 0; i <testCase; i++)
    {
        scanf("%d", &box);
        printbox(box);

    }

    return 0;
}
int printbox(int box)
{
    int i,j;

    for(i = 0; i < box; i++)
    {
        for(j = 0; j <box; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
