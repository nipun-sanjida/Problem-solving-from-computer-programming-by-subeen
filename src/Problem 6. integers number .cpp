#include <stdio.h>
#include <math.h>
int main()
{
    int testCase, i, number, root1;
    double root2;

    scanf("%d", &testCase);
    printf("\n\n");
    for(i = 0; i <testCase; i++)
    {
        scanf("%d", &number);
        root2 = sqrt(number);
        root1 = root2;

        if(root1 == root2)
        {
            printf("Yes\n\n");
        }
        else
        {
            printf("No\n\n");
        }

    }
    return 0;
}
