#include <stdio.h>
int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    int i, testCase;


    scanf("%d", &testCase);

    for(i = 0; i <testCase; i++)
    {
        bool overLape = true;

        scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
        printf("Case %d: ", i+1);

        if(x4 < x1 || y4 < y1 || x2 < x3 || y2 < y3)
        {
            overLape = false;
        }
        if(overLape == false)
        {
            printf("No\n\n");
        }
        else
        {
            printf("Yes\n\n");
        }
    }
    return 0;
}
