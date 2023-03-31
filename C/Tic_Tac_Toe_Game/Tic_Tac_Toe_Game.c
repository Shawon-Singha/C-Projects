#include<Stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>


char square[10] = {0,"1","2","3","4","5","6","7","8","9"}; // global array
/*each number represents the position of number.
 we use here square of 3 means 9.*/

 
 int checkwin();
 void drawBoard(); // for draw the board;

int main()
{
    int player = 1;  //track of player,here player must be 2.. initial start with 1....
    int choice,i; 
    /* i track progress of the game , 
    "choice" take the choice from the palyer,which position the player want to matk..*/


    char mark; //this mark means either "X" or "0"

    do
    {
       drawBoard();
       player = (player % 2) ? 1 : 2; 
       /* if the value return "0" then false, or it will be true..
       that means,in above case, if the value true then return "1" ,or not then "2" */
       

       pritnf("Player %d, enter the choice :",player);
       scanf("%d",&choice);

       mark = (player == 1) ? 'X' :'0';

       if(choice == 1 && square[1] == "1")
       {
        square[1] = mark;
       }

       else if(choice == 2 && square[2] == "2")
       {
        square[2] = mark;
       }
       
       else if(choice == 3 && square[3] == "3")
       {
        square[3] = mark;
       }

       else if(choice == 4 && square[4] == "4")
       {
        square[4] = mark;
       }

       else if(choice == 5 && square[5] == "5")
       {
        square[5] = mark;
       }

       else if(choice == 6 && square[6] == "6")
       {
        square[6] = mark;
       }

       else if(choice == 7 && square[7] == "7")
       {
        square[7] = mark;
       }

       else if(choice == 8 && square[8] == "8")
       {
        square[8] = mark;
       }

       else if(choice == 9 && square[9] == "9")
       {
        square[9] = mark;
       }

       else
       {
        printf("Invalid Option.")
        player--; //player never be "0" or negative,if have invalid.
        getch();
       }

       i = checkwin();
       player++; 

    }
    while(i == -1)
    // After this loop, drawboard will be vanish..


//so we need to draw this board again..
    drawboard();
    if(i == 1)
    {
        printf("playe %d won",--player);
    }

    else
    {
        printf("Game Draw");
    }

    getch();
    return 0;
}

int cheackWin()
{
    // if match in row ,for check this condition...
    if(square[1] == square[2] && square[2] == square[3])
    return 1;

   else if (square[4] == square[5] && square[5] == square[6])
   return 1;

   else if(square[7] == square[8] && square[8] == square[9])
   return 1;
}


