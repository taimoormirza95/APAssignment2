/*This is solely my work*/

#include<conio.h>
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include <string>
#include <ctime>
using namespace std;


int dice_no;
string playa1 = "Player 1 ";
string playa2 = "Player 2";
int playa1_score,playa2_score = 0;
int temp;



/*void draw_line(int n,char ch)
  {
  for(int i=0;i<n;i++)
   cout<<ch;
  }  
  */

/*void win_conditions(){
	  if(playa1_score>=playa2_score)
          cout<<playa1<<" !! You are the winner of the game\n\n";
      else
          cout<<playa2<<" !! You are the winner of the game\n\n";
     draw_line(50,'+');
     getch();

	}

*/

void gamescore(int p1aya1_score, int playa2_score,string playa1,string playa2)  //this function prints score of both players after every round.
  {
   cout<<"\n";
   cout<<"\n\n==========================\n\n\n"<<endl;
   cout<<"\n\t\ScoreCard:\n"<<endl;
    cout<<"\n\n==========================\n\n\n"<<endl;
   cout<<"\n\t--->"<<playa1<<" current position is:   "<<p1aya1_score<<endl;
   cout<<"\t--->"<<playa2<<" curent position is: "<<playa2_score<<endl;
   cout<<"\n\n\n"<<endl;
   cout<<endl;
   getch();
  }


void throw_dice(int &score)   //this function throws the dice, increments the score and checks the current_position+ roll >100
	{
	 int temp;
	 srand(time(NULL));
	 dice_no=rand()%6 +1;
     cout<<"\nYou got "<<dice_no<<" Dice No.! ";
	 if(score+dice_no >100)
	 {
		 score=score-dice_no;
		 cout<<"Oh No! Your Current Position + Dice Roll >100! You are movimg down!"<<endl;
	 }
	 else{
	 temp = dice_no;
     score=score+dice_no;
	 }
     cout<<"Now you are at position\n\n\n "<<score<<endl;

	}



 void play_dice(int &score)    //this function calls the throw dice function and checks the snake and ladder conditions
 {
 throw_dice(score);

switch(score)
{
	   
       case 69 :score=33;
       cout<<"\n\n\nyou ran into a snake!\n\n\n"<<endl;

       break;
       case 64 :score=36;
       cout<<"\n\n\nyou ran into a snake!\n\n\n"<<endl;

       break;
       case 59 :score=17;
       cout<<"\n\n\nyou ran into a snake!\n\n\n"<<endl;

       break;
       case 55 :score=7;
       cout<<"\n\n\nyou ran into a snake!\n\n\n"<<endl;

       break;
       case 52 :score=11;
       cout<<"\n\n\nyou ran into a snake!\n\n\n"<<endl; 

       break;
       case 48 :score=9;
       cout<<"\n\n\nyou ran into a snake!\n\n\n"<<endl;

       break;
       case 46 :score=5;
       cout<<"\n\n\nyou ran into a snake!\n\n\n"<<endl;

       break;
       case 44 :score=22;
       cout<<"\n\n\nyou ran into a snake!\n\n\n"<<endl;
	   
       break;


       case 8 :score=26;
       cout<<"You Got ladder"<<endl;
	   cout<<"You Got the Ladder, so throw the dice again"<<endl;
	   cout<<"\n\n--->"<<" Now your Turn AGAIN >> Press any key to play "<<endl;
	   getch();
	   throw_dice(score);

       break;
       case 21 :score=82;
       cout<<"You Got ladder"<<endl;
	   cout<<"You Got the Ladder, so throw the dice again"<<endl;
	   cout<<"\n\n--->"<<" Now your Turn AGAIN >> Press any key to play "<<endl;
	   getch();
	   throw_dice(score);

       break;
       case 43 :score=77;
        cout<<"You Got ladder"<<endl;
		cout<<"You Got the Ladder, so throw the dice again"<<endl;
	   cout<<"\n\n--->"<<" Now your Turn AGAIN >> Press any key to play "<<endl;
	   getch();
	   throw_dice(score);

       break;
       case 50 :score=91;
       cout<<"You Got ladder"<<endl;
	   cout<<"You Got the Ladder, so throw the dice again"<<endl;
	   cout<<"\n\n--->"<<" Now your Turn AGAIN >> Press any key to play "<<endl;
	   getch();
	   throw_dice(score);

       break;
       case 54 :score=93;
       cout<<"You Got ladder"<<endl;
	   cout<<"You Got the Ladder, so throw the dice again"<<endl;
	   cout<<"\n\n--->"<<" Now your Turn AGAIN >> Press any key to play "<<endl;
	   getch();
	   throw_dice(score);

       break;
       case 62 :score=96;
       cout<<"You Got ladder"<<endl;
	   cout<<"You Got the Ladder, so throw the dice again"<<endl;
	   cout<<"\n\n--->"<<" Now your Turn AGAIN >> Press any key to play "<<endl;
	   getch();
	   throw_dice(score);

       break;
       case 66 :score=87;
       cout<<"You Got ladder"<<endl;
	   cout<<"You Got the Ladder, so throw the dice again"<<endl;
	   cout<<"\n\n--->"<<" Now your Turn AGAIN >> Press any key to play "<<endl;
	   getch();
	   throw_dice(score);

       break;
       case 80 :score=100;
       cout<<"You Got ladder"<<endl;
	   cout<<"Great You Won!"<<endl;
	   break;

	   case 17 :score=33;
       cout<<"You Got ladder"<<endl;
	   cout<<"You Got the Ladder, so throw the dice again"<<endl;
	   cout<<"\n\n--->"<<" Now your Turn AGAIN >> Press any key to play "<<endl;
	   getch();
	   throw_dice(score);
       break;
  }
}


 void game_play()        //this function calls other functions like status of game and game play 
{
	 while(playa1_score<100 && playa2_score<100)
   {

     gamescore(playa1_score,playa2_score,playa1,playa2);
 
     cout<<"\n\n--->" <<playa1<<" Now your Turn!!! Press any key to play ";
     
     getch();
      
	 
   

     play_dice(playa1_score);

	 while(dice_no == 6)
		 {
		 cout<<"Congrats! You got 6 again! Throw the dice again"<<endl;
		 cout<<"\n\n--->" <<playa1<<" Now your Turn AGAIN >> Press any key to play "<<endl;
		 getch();
		 play_dice(playa1_score);


		 }

	 while(playa1_score == 8 || playa1_score == 21 || playa1_score == 43 || playa1_score == 50 || playa1_score == 54 || playa1_score == 62 ||playa1_score == 66 ||playa1_score == 80)
		 {
		    //play_dice(playa1_score);
		    cout<<"Since you got the ladder. Throw the dice again"<<endl;
			cout<<"\n\n--->" <<playa1<<" Now your Turn AGAIN >> Press any key to play "<<endl;
		    getch();
		    play_dice(playa1_score);

		 }


     cout<<"\n\n--->"<<playa2<<" Now your Turn >> Press any key to play ";

     getch();

     play_dice(playa2_score);

	 while(dice_no == 6)     //checks if dice is 6. If it is, the current player gets another shot
		 {

		 cout<<"Congrats! You got 6 again! Throw the dice again"<<endl;
		 cout<<"\n\n--->" <<playa2<<" Now your Turn AGAIN >> Press any key to play "<<endl;
		 getch();
		 play_dice(playa2_score);
		 }

	 while(playa2_score == 8 || playa2_score == 21 || playa2_score == 43 || playa2_score == 50 || playa2_score == 54 || playa2_score == 62 ||playa2_score == 66 ||playa2_score == 80)
		 {
		    //play_dice(playa1_score);
		    cout<<"Since you got the ladder. Throw the dice again"<<endl;
			cout<<"\n\n--->" <<playa2<<" Now your Turn AGAIN >> Press any key to play "<<endl;
		    getch();
		    play_dice(playa2_score);

		 }	 
     getch();
  }
	 if(playa1_score>playa2_score)
	 {
		 cout<<"\n\n\n==========================================================\n\n\n"<<endl;
		 cout<<"Playa1 is the winner\n\n\n"<<endl;
	     cout<<"\n\n\n==========================================================\n\n\n"<<endl; 
	 }
      if(playa2_score>playa1_score)
	  {
		  cout<<"\n\n\n==========================================================\n\n\n"<<endl;
		 cout<<"Playa2 is the winner\n\n\n"<<endl;
		 cout<<"\n\n\n==========================================================\n\n\n"<<endl;
	  }
 }



void main()
 {
  int player1=0,player2=0,lastposition;

 
   game_play();
    cout<<"\n\n\n==========================================================\n\n\n"<<endl;

   cout<<"\nWelcome to Snake and Ladders\n\n";
     cout<<"\n\n\n==========================================================\n\n\n"<<endl;


    cout<<"\n\n\n";

    cout<<"\n\n\n==========================================================\n\n\n"<<endl;

    cout<<"\n\n\t\tRESULT\n\n";
	if(playa1_score > playa2_score)    //winning conditions check
		cout<<"PLAYA1 is the winner"<<endl;
	else
		cout<<"PLAYA2 is the winner"<<endl;

    cout<<"\n\n\n==========================================================\n\n\n"<<endl;
    
    cout<<endl;

     gamescore(playa1_score,playa2_score,playa1,playa2);

	//win_conditions();
    cout<<"\n\n\n";
    }
  

