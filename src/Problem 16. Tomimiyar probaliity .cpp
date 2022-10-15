#include <stdio.h>
void measureProbability(char sentance[])
{
    int i,counter = 1, probability;

   for(i = 0; sentance[i] != '\0'; i++)
   {
       if(sentance[i] == 32)
       {
           counter++;
       }
   }
  probability = counter * (counter-1);

  printf("1/%d\n\n", probability);
}
int main()
{
    int i, testCase;
    char sentance[200];

    scanf("%d", &testCase);

    for(i = 0; i <testCase; i++)
    {
        getchar();
        scanf("%[^\n]s", sentance);
        measureProbability(sentance);
    }
    return 0;
}
