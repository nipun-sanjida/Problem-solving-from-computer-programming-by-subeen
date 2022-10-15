#include <stdio.h>
int substingFindandSubstringCount(char stri[], char substring[]);
int main()
{
    int i, testCase, counter;
    char stri[130], substring[130];

    scanf("%d", &testCase);

    for(i = 0; i <testCase; i++)
    {
        scanf("%s", stri);
        scanf("%s", substring);
        counter = substingFindandSubstringCount(stri,substring);

        printf("%d\n\n", counter);
    }
    return 0;
}

int substingFindandSubstringCount(char stri[], char substring[])
{
    int i,j, index, sum = 0;
    bool subs = true;

    for(i = 0; stri[i] != '\0'; i++)
    {
       j = 0;
       if(substring[j] == stri[i])
       {
           for(j = 1, index = i+1; substring[j] != '\0'; j++, index++)
           {
               if(substring[j] != stri[index])
               {
                 subs = false;
                 break;
               }
           }
           if(subs == true)
           {
               sum++;
           }
           subs = true;
       }
    }
    return sum;
}
