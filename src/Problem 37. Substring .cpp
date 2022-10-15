#include <stdio.h>
int factionSubstring(char stri[], char substring[]);
int main()
{
    int i, testCase, index;
    char stri[130], substring[130];

    scanf("%d", &testCase);

    for(i = 0; i <testCase; i++)
    {

        scanf("%s", stri);
        scanf("%s", substring);
      index = factionSubstring(stri,substring);

      printf("%d\n", index);
    }
    return 0;
}

int factionSubstring(char stri[], char substring[])
{
    int i, j = 0, index;
    bool subs = true;

    for(i = 0; stri[i] != '\0'; i++)
    {
        j = 0;

        if(stri[i] == substring[j])
        {
          for(j = 1, index = i+1; substring[j] != '\0'; j++, index++)
          {
              if(substring[j] != stri[index])
              {
                  subs = false;
                  break;
              }
          }
          if(subs)
          {
            return i;
          }
          subs = true;
        }
    }
 return 0;
}

