/*Find this idea in Bangla coding tutor.Thanks to sir ..First i see this then try myself*/

#include<stdio.h>

int FirstDayOftheYear(int year)
{
    /*Calculation for finding the year star*/
    int day = (year*365 + ((year - 1)/4) - ((year-1)/100) + ((year-1)%400)) % 7;
}
int main()
{
   char *month[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int week=0,space = 0,year;

    printf("Enter your Year:");
    scanf("%d",&year);

    if((year%4==0 &&year%100!=0) || (year % 400 ==0))
    {
        days[1] =29;
    }

    for(int i =0;i<12;i++)
    {
        printf("\n\n-----------------%s-----------------\n",month[i]);
        printf("\n  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

        for(space = 1;space<=week;space++)
        {
            printf("     ");
        }

        int totalDays = days[i];

        for(int j = 1;j<=totalDays;j++)
        {
           printf("%5d",j);
           week++;
           if(week>6)
           {
            week = 0;
            printf("\n");
           }
        }
    }

    
}