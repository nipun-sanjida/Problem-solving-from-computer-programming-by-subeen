#include <stdio.h>
int main()
{
    int i, testCase, negetiveCounter =0, possetiveCounter =0;

    scanf("%d", &testCase);
    int num[testCase];

    for(i = 0; i <testCase; i++)
    {
        scanf("%d", &num[i]);
    }

    for(i = 0; i <testCase; i++)
    {
        if(num[i] < 0)
        {
            negetiveCounter++;
        }
        else
        {
            possetiveCounter++;
        }
    }

    printf("%d %d", possetiveCounter, negetiveCounter);
    return 0;
}
