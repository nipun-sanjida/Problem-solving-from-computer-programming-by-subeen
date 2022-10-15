#include <stdio.h>
void gunitokAndPrint(int start, int finish)
{
   int i = 1;

   while(1)
   {
       if(finish < start*i)
       {
           break;
       }

       printf("%d ", start * i);
       i++;
   }
}
int main()
{
    int i, testCase, start, finish;

    scanf("%d", &testCase);

    for(i = 0; i<testCase; i++)
    {
        scanf("%d %d", &start, &finish);
        printf("Case %d: ", i +1);

        gunitokAndPrint(start,finish);
        printf("\n\n");
    }
    return 0;
}
