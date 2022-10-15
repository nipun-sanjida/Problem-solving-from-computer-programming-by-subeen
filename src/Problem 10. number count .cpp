#include <stdio.h>
int main()
{
    int testCase, i, j, number;

    scanf("%d", &testCase);

    for(i = 0; i <testCase; i++)
    {
        scanf("%d", &number);
        int counto = 0;

        while(1)
        {
            number = number / 10;
            counto++;

            if(number == 0)
            {
                printf("%d\n\n", counto);
                break;
            }


        }
    }
    return 0;
}
