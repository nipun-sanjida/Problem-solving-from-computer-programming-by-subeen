#include <stdio.h>
#include <math.h>
int addNumber(int number);
int digitCount(int number);

int main()
{
    int sizee,numberOfDigit = 0;

    scanf("%d", &sizee);
    int number = -1;

    while(1)
    {
       number = addNumber(number);
       numberOfDigit = digitCount(number);

       if(sizee == numberOfDigit)
       {
           printf("%d\n", number);
       }
       else if(numberOfDigit > sizee)
       {
           break;
       }
    }

    return 0;
}

int addNumber(int number)
{
    int newNumber, digit, sum = 0, i = 0;
    int carry = 1;

    if(number == -1)
    {
        return 0;
    }
    while(1)
    {
      newNumber = number /10;
      digit = number - (newNumber * 10);

      if(digit == 1 && carry == 1)
      {
          digit = 0;
      }
      else if(digit == 0 && carry == 1)
      {
          digit = 1;
          carry = 0;
      }

      sum = sum+ digit * pow(10,i);

      if(newNumber == 0 && carry == 0)
      {
          break;
      }
       number = newNumber;
       i++;
    }



   return sum;
}

int digitCount(int number)
{
    int i = 0;

    while(1)
    {
        number = number /10;
        i++;
        if(number == 0)
        {
            return i;
        }
    }
}
