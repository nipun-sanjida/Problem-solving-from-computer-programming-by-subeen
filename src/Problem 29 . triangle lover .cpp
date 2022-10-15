#include <stdio.h>
int main()
{
    int testCase, i;
    int base, height, triangle;

    scanf("%d", &testCase);

    for(i = 0; i <testCase; i++)
    {
        scanf("%d %d", &base, &height);
        triangle = 2 * (1/2.0 * base * height);
       //triangle = triangle * 2;

        printf("Case %d: %d\n\n",i+1, triangle);

    }
    return 0;
}
