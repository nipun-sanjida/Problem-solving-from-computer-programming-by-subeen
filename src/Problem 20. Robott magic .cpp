#include <stdio.h>
void makeRobotUnderstandMagic(char bag[])
{
    int i,counto = 0;

    for(i = 0; bag[i] != '\0'; i++)
    {
        if(bag[i] == '1')
        {
            counto++;
        }
        else
        {
            counto--;
            if(counto <0)
            {
                break;
            }
        }
    }

  if(counto <0)
  {
      printf("Magic\n\n");
  }

  else
  {
      printf("Normal\n\n0");
  }
}


int main()
{
    int testCase, i, j;
    char bag[50];

    scanf("%d", &testCase);

    for(i = 0; i <testCase; i++)
    {
        scanf("%s", bag);
        makeRobotUnderstandMagic(bag);
    }
    return 0;
}
