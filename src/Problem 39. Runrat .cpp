#include <stdio.h>
double crunnetRunRate(int presentRun, int remaingBall);
double howManyRunNeeded(int target, int presentRun, int remaingBall);

int main()
{

    int testCase, i, target, presentRun, remaingBall;
    double runDone, neededRun;

    scanf("%d", &testCase);

    for(i = 0; i <testCase; i++)
    {
        scanf("%d %d %d", &target, &presentRun, &remaingBall);
        runDone = crunnetRunRate(presentRun, remaingBall);
        neededRun = howManyRunNeeded(target, presentRun, remaingBall);

        printf("%0.2lf %0.2lf\n\n", runDone, neededRun);
    }
    return 0;
}

double crunnetRunRate(int presentRun, int remaingBall)
{
    int  totalball = 300;
    double oversDone = (totalball - remaingBall) / 6.00;
    double runDone =   presentRun / oversDone;


    return runDone;
}

double howManyRunNeeded(int target, int presentRun, int remaingBall)
{
     double neededRun = (target- presentRun) +1;
     double eatchOverNeedRun = neededRun / (remaingBall / 6.00);

     return eatchOverNeedRun;

}
