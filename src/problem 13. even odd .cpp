#include <stdio.h>
int main()
{
    int testCase, i, number;
    scanf("%d", &testCase);

    for(i = 0; i <testCase; i++)
    {
        scanf("%d", &number);

        if(number % 2 == 0)
        {
            printf("even\n\n");
        }
        else
        {
            printf("odd\n\n");
        }
    }
    return 0;
}

