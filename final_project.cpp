#include<iostream>
using namespace std;
char game[9]={'1','2','3','4','5','6','7','8','9'};
int choice;        
int match;
void display_board()
{
	cout<<"\t TIC TAC TOE GAME"<<endl<<endl<<endl;
	cout<<"\t PLAYER1: [X]"<<endl;
    cout<<"\t PLAYER2: [O]\n"<<endl<<endl<<endl;
	 system("cls");	
     cout<<"\t        |       |        "<<endl;
	 cout<<"\t  "<<game[0]<<"     | "<< game[1]<<"     | "<< game[2]<<"      "<<endl;
	 cout<<"\t _______|_______|_______ "<<endl;
	 cout<<"\t        |       |        "<<endl;
	 cout<<"\t  "<<game[3]<<"     |  "<<game[4]<<"    |  "<<game[5]<<"      "<<endl;
	 cout<<"\t _______|_______|_______ "<<endl;
	 cout<<"\t  "<<game[6]<<"     |  "<<game[7]<<"    |  "<<game[8]<<"      "<<endl;
	 cout<<"\t        |       |        "<<endl;
	 
}
main()
{
	display_board();
	string player1,player2;
	cout<<"enter the name of the first player : ";
	cin>>player1;
	cout<<"enter the name of the second player : ";
	cin>>player2;
	int count=0;
	char turn='X';
	while(count<=9)
	{
	    cout<<player1<<" turns,enter the number you want to place your turn : ";
    	cin>>choice;
		
 	        if(choice==1)
            {
            	game[0]='X';
             }
            else if(choice==2)
            {
      	       	game[1]='X';
            }
            else if(choice==3)
            {
  	        	game[2]='X';
            }
            else if(choice==4)
            {
  	         	game[3]='X';
            }
            else if(choice==5)
            {
      		 	game[4]='X';
            }
            else if(choice==6)
            {
      	     	game[5]='X';
            }
            else if(choice==7)
            {
      	     	game[6]='X';
            }
            else if(choice==8)
            {
      		    game[7]='X';
            }
            else if(choice==9)
            {
      		    game[8]='X';
             }
            else
            {
            	cout<<"invalid choice"<<endl;
            }
		display_board();
		count++;
		cout<<player2<<" turns,enter the number you want to place your turn : ";
	    cin>>choice;
		 turn='O';
 	 if(choice==1)
            {
            	game[0]='O';
             }
            else if(choice==2)
            {
      	       	game[1]='O';
            }
            else if(choice==3)
            {
  	        	game[2]='O';
            }
            else if(choice==4)
            {
  	         	game[3]='O';
            }
            else if(choice==5)
            {
      		 	game[4]='O';
            }
            else if(choice==6)
            {
      	     	game[5]='O';
            }
            else if(choice==7)
            {
      	     	game[6]='O';
            }
            else if(choice==8)
            {
      		    game[7]='O';
            }
            else if(choice==9)
            {
      		    game[8]='O';
             }
            else
            {
            	cout<<"invalid choice"<<endl;
            }
		display_board();
		count++;
			if(count >= 9)
		{
			cout<<"table is already filled"<<endl;
			break;
		}
		else
		{
			if( game[0]==game[1] && game[0]==game[2])
  	        {
  	        	match = 1 ;
		        break ;
            }
            else if( game[3]==game[4] && game[3]==game[5])
  	        {
  	        	match = 1;
		        break ;
            }
            else if( game[6]==game[7] && game[6]==game[8])
  	        {
  	        	match = 1;
		        break ;
            }
            else if( game[0]==game[3] && game[0]==game[6])
  	        {
  	        	match = 1;
		        break ;
            }
            else if( game[0]==game[4] && game[0]==game[8])
  	        {
  	        	match = 1;
		        break ;
            }
            else if( game[1]==game[4] && game[1]==game[7])
  	        {
  	        	match = 1;
		        break ;
            }
            else if( game[2]==game[5] && game[2]==game[8])
  	        {
  	        	match = 1;
		        break ;
            }
            else if( game[2]==game[4] && game[2]==game[6])
  	        {
  	        	match = 1;
		        break ;
            }
//            else
//			{
//				match = 0;
//  	            break ;
//            }
		}
			
	}	
		
if(turn=='X' && match==1)
{
cout<<player1<<" WINS CONGRATULATIONS!!!!!"<<endl;	
}	
else if(turn=='O' && match==1)
{
cout<<player2<<" WINS CONGRATULATIONS!!!!!"<<endl;	
}		
else
{
cout<<" GAME IS DRAW "<<endl;	
}      

	 


}
