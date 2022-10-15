#include <stdio.h>
int timeMinus(int startingTime[],int finishingTime[]);
int ConvertToSec(int totalTime[]);
int stepCoutFaction(int totalSec);


int main()
{
    int i, testCase,j;
    int startingTime[3], finishingTime[3];

    scanf("%d", &testCase);

    for(i = 0; i <testCase; i++)
    {
        for(j = 0; j <3; j++)
        {
            scanf("%d",&startingTime[j]);
        }
        for(j = 0; j <3; j++)
        {
            scanf("%d",&finishingTime[j]);
        }
        timeMinus(startingTime,finishingTime);
    }
    return 0;
}

int timeMinus(int startingTime[],int finishingTime[])
{
    int i, totalTime[3];

    if(finishingTime[2] < startingTime[2])
    {
        finishingTime[2] = finishingTime[2] + 60;
        finishingTime[1] = finishingTime[1] -1;

    }


    if(finishingTime[1] < startingTime[1])
    {
        finishingTime[1] = finishingTime[1] + 60;
        finishingTime[0] = finishingTime[0] -1;
    }

    if(finishingTime[0] < startingTime[0])
    {
        finishingTime[0] = finishingTime[0] + 24;
    }

    totalTime[0] = finishingTime[0] - startingTime[0];
    totalTime[1] = finishingTime[1] - startingTime[1];
    totalTime[2] = finishingTime[2] - startingTime[2];

   ConvertToSec(totalTime);

}

int ConvertToSec(int totalTime[])
{

    while(1)
    {
        if(totalTime[0] == 0)
        {
            break;
        }
        else
        {
            totalTime[0] = totalTime[0] -1;
            totalTime[1] = totalTime[1] + 60;
        }
    }

    while(1)
    {
        if(totalTime[1] == 0)
        {
            break;
        }
        else
        {
            totalTime[1] = totalTime[1] -1;
            totalTime[2] = totalTime[2] + 60;
        }
    }
    stepCoutFaction(totalTime[2]);
}

int stepCoutFaction(int totalSec)
{
    int step, stepCounter;

    scanf("%d", &step);

    stepCounter = step * totalSec;

    printf("%d\n\n", stepCounter);
}
