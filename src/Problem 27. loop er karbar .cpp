#include <stdio.h>
int printLexicographicalNumbar(int a, int b, int c);
int main()
{
    int i,testCase;
    int a, b,c;

    scanf("%d", &testCase);

    for(i = 0; i <testCase; i++)
    {
       scanf("%d %d %d", &a, &b, &c);
       printf("Case %d: \n", i+1);
       printLexicographicalNumbar(a,b,c);

       printf("\n\n");
    }
    return 0;
}

int printLexicographicalNumbar(int a, int b, int c)
{
    int x, y, z;

    for(x = 0; x <=a; x++)
    {
        if(x > b)
        {
            break;
        }
        for(y = 0; y <=b; y++)
        {
            if(y > c)
            {
                break;
            }
            if(y <= x)
            {
                y = x + 1;
                if(y > b)
                {
                    break;
                }
            }

            for(z = 0; z <=c; z++)
            {
                if(z <= y)
                {
                    z = y+1;
                    if(z > c)
                    {
                        break;
                    }
                }
                printf("%d %d %d\n", x, y, z);
            }
        }
    }
}
