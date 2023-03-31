#include<stdio.h>

#define m 30

int i,j;

void main()
{
   for(i = 0;i<=m+1;i++)
   {
      if(i== 0)
      {
         printf("%c",201);
      }

      else if(i == m+1)
      {
         printf("%c",187);
      }

      else
      {
         printf("%c",205);
      }
   }
}