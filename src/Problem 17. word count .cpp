#include <stdio.h>
int wordCount(char word[]);
int main()
{
    int i, testCase,totalCost;
    char word[1000];

    scanf("%d", &testCase);

    for(i = 0; i <testCase; i++)
    {
        getchar();
        scanf("%[^\n]s", word);

        int totalWords = wordCount(word);
        totalCost = totalWords * 420;
        printf("%d\n", totalCost);
    }
    return 0;
}
int wordCount(char word[])
{
    int i, counter = 1, number;

    for(i = 0; word[i] != '\0'; i++)
    {
        if(word[i] == 32 && word[i+1] != '.' && word[i+1] != 32)
        {
            counter++;
        }

    }


    return counter;
}
