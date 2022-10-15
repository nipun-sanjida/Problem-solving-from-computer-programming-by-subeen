#include <stdio.h>
#include <math.h>
int primeFactor(int number);

int main()
{
    int number;

    while(1)
    {
        scanf("%d", &number);

        if(2 > number)
        {
          break;
        }
        else
        {
            printf("%d = ", number);
           primeFactor(number);
        }
    }
    return 0;
}


int primeFactor(int number)
{
   int i = 2, counter = 0, root;
   bool printfStar = false;

   while(1)
   {
       root = sqrt(number);
       if(number % i == 0)
       {
           number = number / i;
           counter++;
       }
       else
       {
         if(counter != 0)
           {
             printf("%d^%d ", i, counter);
             printfStar = true;
           }
           counter = 0;

           if(i > root)
           {
               if(number >1)
               {
                   printf("%d^1 ", number);
                   if(printfStar)
                   {
                       printf("* ");
                   }
               }

               printf("\n\n");
               break;
           }
           if(printfStar)
           {
               printf("* ");
               printfStar = false;
           }

           i++;

   }
 }

}
