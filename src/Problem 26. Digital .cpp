#include <stdio.h>
void printTriangle(int height, int base)
{
    int i, j;

    for(i = 0; i <height; i++)
    {
        for(j = 0; j <=i; j++)
        {
            printf("%d", base);
        }
        printf("\n");
    }
}
int main()
{
  int i, testCase, height, base;

  scanf("%d", &testCase);

  for(i = 0; i <testCase; i++)
  {
    scanf("%d %d",&base, &height);
    printf("Case %d: \n", i+1);
    printTriangle(height, base);
    printf("\n\n");
  }

   return 0;
}
