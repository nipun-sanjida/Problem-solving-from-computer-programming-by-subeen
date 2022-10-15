#include <stdio.h>
#include <math.h>
int NumberChange(int number);
int main()
{
    int testCase, i,number;

    scanf("%d", &testCase);



    for(i = 0; i <testCase; i++)
    {
        scanf("%d", &number);
        number = NumberChange(number);

        printf("%d\n\n", number);
    }
    return 0;
}

int NumberChange(int number)
{
    int i = 0, sum = 0, digit, newNumber;

    while(1)
    {
        newNumber = number / 10;
        digit = number - (newNumber * 10);
        number = newNumber;

        if(digit % 2 == 0)
        {
            digit += 1;
        }
        else
        {
            digit -= 1;
        }

        sum += digit * pow(10,i);

        if(newNumber == 0)
        {
            break;
        }
        i++;

    }

    return sum;
}
