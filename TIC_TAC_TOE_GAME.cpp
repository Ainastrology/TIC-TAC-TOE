#include <iostream>
using namespace std;

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

// HERE I AM GOING TO USE PROTOTYPE. THESE FUNCTIONS DECLARED BELOW IN THE NEXT TWO LINES WITH THEIR HEADING ONLY,
// ARE ACTUALLY DEFINED AFTE THE BODY OF MAIN TO MAKE IT EASY TO UNDERSTAND AND SEE,

int checkwin();
void display_board();

int main()
{
	int player = 1,i,choice;
    char mark;

// USING DO WHILE LOOP , OUR PROGRAM WOULD BECOME NORE SIMPLER AND EFFICIENT TO READ, WRITE & PRESENT.

    do
    {
        display_board();
        player=(player%2) ? 1 : 2 ;

//INSTEAD OF USING THE IF THEN ELSE STATEMENT ,WE CAN SIMPLY EXECUTE THIS STATEMENT,
// WHICH CAN ALSO MAKE DECISION WHETHER IT IS PLAYER1 TURN OR PLAYER2.

        cout << "Player " << player << ", enter a number:  ";
        cin >> choice;

        mark=(player == 1) ? 'X' : 'O';

//TO CHECK EITHER ONE OF THE COMBINATION MATCHED OR NOT.

        if (choice == 1 && square[1] == '1')

            square[1] = mark;
        else if (choice == 2 && square[2] == '2')

            square[2] = mark;
        else if (choice == 3 && square[3] == '3')

            square[3] = mark;
        else if (choice == 4 && square[4] == '4')

            square[4] = mark;
        else if (choice == 5 && square[5] == '5')

            square[5] = mark;
        else if (choice == 6 && square[6] == '6')

            square[6] = mark;
        else if (choice == 7 && square[7] == '7')

            square[7] = mark;
        else if (choice == 8 && square[8] == '8')

            square[8] = mark;
        else if (choice == 9 && square[9] == '9')

            square[9] = mark;
//IF THE TURN WAS OF PLAYER2 AND LET'S SUPPOSE PLAYER2 HAS TAKEN THE INVALID MOVE ,
//THEN ACCORDING TO ABOVE SWITCHING OF PLAYER WE WILL USE HERE POST DECREMENT SO THAT WILL HELP TO MAINTAIN THE APPROPIATE PLAYER TURNS.

        else
        {
            cout<<"Invalid move -Retake,Press the Enter key";
            player--;

// TO SHOW THE MESSAGE OF INVALID MOVEE FOR SOME TIME AND WHEN THE PLAYER INPUTS ANOTHER ENTER KEY THEN IT WILL CONTINUE.

            cin.ignore();
            cin.get();
        }

    i=checkwin();

//THIS INCREMENT IS USED FOR THE SCENARIO IF PLAYER1 HAS TAKEN ITS TURN CORRECTLY ,
//THEN IT WILL INCREMENT FOR THE NEXT PLAYER2 FROM THE ABOVE DECISION MAKING STATEMENT,SIMILARLY FOR THE PLAYER2.

        player++;
    }
    while(i==-1);
    display_board();
    if(i==1)
       {
          cout<<"==>Congratulations!!!!!!Player "<<--player<<" win ";
       }
    else
       {
         cout<<"\tGame is draw\t";
       }
    return 0;
}
//     NOW HERE ARE THE FUNCTIONS TO RETURN GAME STATUS AS FOLLOW :
//                 1 FOR GAME IS OVER AND END WITH RESULT.
//                -1 FOR GAME IS IN PROGRESS AND WANT TO CONTINUE .
//                 O GAME IS OVER AND NO RESULT CONCLUDES HENCE IT WOULD BE A DRAW.

int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3]  || square[4] == square[5] && square[5] == square[6] || square[7] == square[8] && square[8] == square[9] || square[1] == square[4] && square[4] == square[7] || square[2] == square[5] && square[5] == square[8] || square[3] == square[6] && square[6] == square[9] || square[1] == square[5] && square[5] == square[9] || square[3] == square[5] && square[5] == square[7]  )

        return 1;

// NOW TO MAKE SURE THAT EITHER ALL THE BOXES OR SQUARE IS FILLED OR NOT.

    else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
                    && square[4] != '4' && square[5] != '5' && square[6] != '6'
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return -1;
}

//     FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK

void display_board()
{
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "     |     |     " << endl << endl;
}
