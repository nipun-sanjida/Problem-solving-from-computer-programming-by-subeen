#include <stdio.h>
int main()
{
    int testCase, i,j;
    char str[50];

    scanf("%d", &testCase);

    for(i = 0; i <testCase; i++)
    {
        scanf("%s", str);

        for(j = 0; str[j] != '\0'; j++)
        {
            if(str[j] == 'L' || str[j] == 'l')
            {
                str[j] = str[j-1];
            }
            if(str[j] == 'R' || str[j] == 'r')
            {
                str[j] = str[j+1];
            }
        }
        printf("%s\n", str);
    }
    return 0;
}
