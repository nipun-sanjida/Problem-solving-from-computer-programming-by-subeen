#include <stdio.h>
int main()
{
    int i, testCase, largest, small, j, number;

    scanf("%d", &testCase);

    for(i = 0; i <testCase; i++)
    {
        largest = 0;
        small = 111;

        for(j = 0; j <5; j++)
        {
            scanf("%d", &number);

            if(largest <number)
            {
                largest = number;
            }
            if(small >number)
            {
                small = number;
            }
        }
        printf("%d %d\n", largest, small);
    }
    return 0;
}
