#include <stdio.h>
char numberCommontest(char number[]);

void Numbersorting(char common[])
{
    if(common[0] > common[1])
    {
        char i = common[0];
        common[0] = common[1];
        common[1] = i;
    }
    printf("%s\n", common);
}

int main()
{
    int i, testCase, j;
    char number[6];

    scanf("%d", &testCase);

    for(i = 0; i <testCase; i++)
    {
      getchar();
      scanf("%[^\n]",number);
      numberCommontest(number);
     }

    return 0;
}

char numberCommontest(char number[])
{
    int i,j, index = 0;
    char common[3] ={'\n', '\n'};

    for(i = 0; number[i] != 32; i++)
    {
        for(j = 6; number[j] != 32; j--)
        {
            if(number[i] == number[j])
            {
                common[index] = number[i];
                index++;
            }
        }
    }

   if(common[0] == common[1])
   {
       printf("%c", common[0]);
   }
   else +if(index == 0)
   {
       printf("N\n");
   }
   else if(index == 1)
   {
       printf("%s", common);
   }
   else
   {
       Numbersorting(common);
   }
}
