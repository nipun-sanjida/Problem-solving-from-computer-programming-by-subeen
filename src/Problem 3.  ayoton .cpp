#include <stdio.h>
int main()
{
    int testCase, i,j,into;
    int num;
    scanf("%d", &testCase);

    for(i = 0; i <testCase; i++)
    {
        into = 1;
        j = 0;
        while(j <3)
        {
            scanf("%d", &num);
            into = num * into;
            j++;
        }
        printf("%d\n", into);
    }
    return 0;
}
