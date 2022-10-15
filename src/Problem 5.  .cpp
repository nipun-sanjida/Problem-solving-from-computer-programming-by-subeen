#include <stdio.h>
int main()
{
    int testCase, i,j, big, small;
    int num[5];

    scanf("%d", &testCase);

    for(i = 0; i <testCase; i++)
    {
        for(j = 0; j <5; j++)
        {
            scanf("%d", &num[j]);
        }

        for(j = 0; j <4; j++)
        {
          if(num[j] <num[j+1])
          {

          }
        }

    }
    return 0;
}
