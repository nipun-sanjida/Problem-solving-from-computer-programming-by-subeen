#include <stdio.h>
#include <math.h>
bool testPrimeNumber(int number);
int main()
{
    int i, testCase;
    int number;
    bool test;

    scanf("%d", &testCase);

    for(i = 0; i <testCase; i++)
    {
        scanf("%d", &number);

      test = testPrimeNumber(number);

      if(test == true)
      {
          printf("%d is a prime number\n\n", number);
      }
      else
      {
          printf("%d is not a prime number\n\n", number);
      }
    }
    return 0;
}

bool testPrimeNumber(int number)
{
    if(number <= 3)
    {
        return true;
    }

    int root, i;
    root = sqrt(number);

    for(i = 2; i <= root; i++)
    {
        if(number  % i == 0)
        {
            return false;
        }
    }
    return true;
}
