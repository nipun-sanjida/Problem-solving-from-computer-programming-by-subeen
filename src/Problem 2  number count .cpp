#include <stdio.h>
int main()
{
    int testCase, num, counter,i;
    char test;

    scanf("%d", &testCase);

    for(i = 0; i <testCase; i++)
    {
        counter = 0;

        while(1)
        {
            scanf("%d", &num);
            test = getchar();
            counter++;

            if(test == '\n')
            {
               printf("%d\n", counter);
               break;
            }
        }
    }
    return 0;
}
