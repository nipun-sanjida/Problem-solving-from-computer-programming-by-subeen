#include <stdio.h>
int main()
{
    int result, i, testcase;
    char acsii[4];

    scanf("%d", &testcase);


    for(i =  0; i< testcase; i++)
    {
         scanf("%s", acsii);
         result = acsii[0] + acsii[1] + acsii[2];

         printf("%d\n", result);
    }
    return 0;
}
