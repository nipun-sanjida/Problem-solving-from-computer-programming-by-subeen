#include <stdio.h>
int secondPrint(int time);
int minutPrint(int secound);
int hourPrint(int minute);
int dayPrint(int hour);
int monthPrint(int day);
int yearPrint(int month);

int main()
{
    int testCase, i, time;

    scanf("%d", &testCase);

    for(i = 0; i <testCase; i++)
    {
        scanf("%d", &time);

        printf("Case %d: ", i+1);
        secondPrint(time);
        printf("\n\n");
    }
    return 0;
}

int secondPrint(int time)
{
    int second = time;

   while(1)
   {
       if(second == 0)
       {
           break;
       }
       else if(second == 1)
       {
           printf("%d second.\n", second);
           break;
       }
       else if (second < 60)
       {
           printf("%d seconds.\n", second);
           break;
       }
       else
       {
           second = minutPrint(second);
       }
   }
}

int minutPrint(int secound)
{
    int minute = 0;

    while(60 <= secound)
    {
        secound = secound - 60;
        minute++;
    }

    while(1)
    {
        if(60 <= minute)
        {
            minute = hourPrint(minute);
        }
        else if(minute < 60 && minute != 0)
        {
            printf("%d minutes ", minute);
            break;
        }
        else if(minute == 1)
        {
            printf("%d minute ", minute);
            break;
        }
        else if (minute == 0)
        {
            break;
        }
    }

     return secound;
}

int hourPrint(int minute)
{
    int hour = 0;

    while(60 <= minute)
    {
        minute = minute - 60;
        hour++;
    }

    while(1)
    {
        if(hour == 0)
        {
            break;
        }
        else if(hour == 1)
        {
            printf("%d hour ", hour);
            break;
        }
        else if (hour <24)
        {
            printf("%d hours ", hour);
            break;
        }
        else
        {
            hour = dayPrint(hour);
        }
    }
    return minute;
}

int dayPrint(int hour)
{
    int day = 0;

    while(24 <= hour)
    {
        hour = hour - 24;
        day++;
    }

    while(1)
    {
        if(day == 0)
        {
            break;
        }
        else if(day == 1)
        {
            printf("%d day ", day);
            break;
        }
        else if(day < 30)
        {
            printf("%d days ", day);
            break;
        }
        else
        {
            day = monthPrint(day);
        }
    }
    return hour;

}

int monthPrint(int day)
{
    int month = 0;

    while(30 <= day)
    {
        day = day - 30;
        month++;
    }

    while(1)
    {
        if(month == 0)
        {
            break;
        }
        else if(month == 1)
        {
            printf("%d month ", month);
            break;
        }
        else if(month <12)
        {
            printf("%d months ", month);
            break;

        }
        else
        {
            month = yearPrint(month);
        }

    }
    return day;

}

int yearPrint(int month)
{
    int year = 0;

    while(12 <= month)
    {
       month = month - 12;
       year++;
    }

    while(1)
    {
        if(year == 1)
        {
            printf("1 year ");
            break;
        }
        printf("%d years ", year);
        break;
    }
  return month;
}
