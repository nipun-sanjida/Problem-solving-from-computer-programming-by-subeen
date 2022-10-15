#include <stdio.h>
int main()
{
    int testCase, i,day;

    scanf("%d", &testCase);

    for(i = 0; i <testCase; i++)
    {
        scanf("%d", &day);

        if(day % 2 == 0)
        {
            printf("red\n\n");
        }
        else
        {
            printf("blue\n\n");
        }
    }
    return 0;
}
