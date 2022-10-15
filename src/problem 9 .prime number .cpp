#include <stdio.h>
#include <math.h>
int primeNumber(int result[]);
int main()
{
    int i, j, root, testCase;
    int result[10];

    scanf("%d", &testCase);

    for(i = 0; i <testCase; i++)
    {
      for(j = 0; j <10; j++)
       {
           scanf("%d", &result[j]);
       }
       primeNumber(result);
    }
    return 0;
}
int primeNumber(int result[])
{
    int i, root, j, counto = 0;

    for(i = 0; i <10; i++)
    {
        if(result[i] <2)
        {
            counto++;
        }
        else
        {
            root = sqrt(result[i]);


            for(j = 2; j <= root; j++)
            {
                if(result[i] % j == 0)
                {
                    break;
                }
                if(j == root)
                {
                     counto++;
                }
            }
        }
    }
    printf("%d\n", counto);
}
