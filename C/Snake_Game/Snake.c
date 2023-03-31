#include<stdio.h>

#define m 40
#define n 20

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

   printf("\n");

   for(i = 0;i<n;i++) //number of row
   {
      printf("%c",186);

      for(j = 0; j<m;j++) //number of coloum
      {
         if( j == m-1)
         {
            printf(" %c\n",186);
         }
         else
         {
            printf(" ");
         }
      }

   }

   for(i = 0;i<=m+1;i++)
   {
      if(i== 0)
      {
         printf("%c",200);
      }

      else if(i == m+1)
      {
         printf("%c",188);
      }

      else
      {
         printf("%c",205);
      }
   }
}