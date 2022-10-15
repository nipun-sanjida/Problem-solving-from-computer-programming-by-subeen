#include <stdio.h>
double currentRunRate(int presentRun, int remaingBall);
double neededRunRate(int presentRun, int remainBall, int target);
int main()
{
    int testCase, i, target, presentRun, remaingBall;
    double rate, need;

    scanf("%d", &testCase);

    for(i = 0; i <testCase; i++)
    {
        scanf("%d %d %d", &target, &presentRun, &remaingBall);
        rate = currentRunRate(presentRun, remaingBall);
        need =  neededRunRate(presentRun, remaingBall,target);

        printf("%0.2lf %0.2lf\n\n", rate, need);

    }
    return 0;
}

double currentRunRate(int presentRun, int remaingBall)
{
    int totalBall = 300;
   /* we try like this
    int BallsIsDone = totalBall - remaingBall;
    double oversDone = BallsIsDone / 6.00;
    double rate = currentRun / oversDone;*/

    double oversDone = (totalBall - remaingBall) /6.00;
    double rate = presentRun / oversDone;
    return rate;


}

double neededRunRate(int currentRun, int remainingBalls, int target)
{
    double neededRun = target - currentRun + 1;
    double runRate = neededRun/ (remainingBalls / 6.0);

      return runRate;

}
