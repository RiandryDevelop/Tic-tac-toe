#include <iostream>
using namespace std;


// This array is used to draw the matrix
char CharMatrixDraw[10] = { '0', '1', '2',
	'3', '4', '5',
	'6', '7', '8', '9' };


/* 
These below are the function prototypes 
(A function prototype in C++ is a declaration that provides the compiler with essential information about a 
function before its actual definition. )
*/
int winner();
void GameChart(string, string);


int main()
{
    // I declared the essential variables here
	int Gamer = 1, i, choice;
	string name1;
	string name2;

    // Assigning the names of the gamers
	cout << "Enter First Gamer Name: ";
	cin >> name1;

	cout << "\nEnter Second Gamer Name: ";
	cin >> name2;

    // delcaring the variable to store X and O
	char mark;


    /*
     The main game loop (do-while loop)
      a control structure that executes a block of 
      code at least once and then repeatedly executes it as long as a specified condition is true.
    */
	do {
		GameChart(name1, name2);
        // This line determines which player's turn it is based on the value of Gamer
		Gamer = (Gamer % 2) ? 1 : 2;

		if (Gamer == 1)
		{
			cout << name1 << " Your Turn, Enter a Number:  ";
			cin >> choice;
		}
		else
		{
			cout << name2 << " Your Turn, Enter a Number:  ";
			cin >> choice;
		}


        // This line assigns the appropriate mark ('X' or 'O') based on the current player
		mark = (Gamer == 1) ? 'X' : 'O';

         // This series of if-else statements checks the player's choice and updates the game board accordingly
		if (choice == 1 && CharMatrixDraw[1] == '1')

			CharMatrixDraw[1] = mark;
		else if (choice == 2 && CharMatrixDraw[2] == '2')

			CharMatrixDraw[2] = mark;
		else if (choice == 3 && CharMatrixDraw[3] == '3')

			CharMatrixDraw[3] = mark;
		else if (choice == 4 && CharMatrixDraw[4] == '4')

			CharMatrixDraw[4] = mark;
		else if (choice == 5 && CharMatrixDraw[5] == '5')

			CharMatrixDraw[5] = mark;
		else if (choice == 6 && CharMatrixDraw[6] == '6')

			CharMatrixDraw[6] = mark;
		else if (choice == 7 && CharMatrixDraw[7] == '7')

			CharMatrixDraw[7] = mark;
		else if (choice == 8 && CharMatrixDraw[8] == '8')

			CharMatrixDraw[8] = mark;
		else if (choice == 9 && CharMatrixDraw[9] == '9')

			CharMatrixDraw[9] = mark;
		else
		{
			cout << "\nInvalid Choice Try Again ";
			Gamer--;
			cin.ignore();
			cin.get();
		}

     // This line calls the winner function to check if there's a winner or if the game is a draw
		i = winner();
     // Incrementing the Gamer variable to switch turns between players
		Gamer++;
	} while (i == -1);
	GameChart(name1, name2);

    // This series of if-else statements checks if there's a winner or if the game is a draw
	if (i == 1)
	{
		cout << "\n=============================\n";
		cout << "\a" << name1 << " Is A Winner \n";
		cout << "=============================\n";
	}
	else
	{
		cout << "\n=============================\n";
		cout << "\aGame Is Draw\n";
		cout << "=============================\n";
	}

	cin.ignore();
	cin.get();
	return 0;
}



/*
this function checks for a winner or a draw, evaluates the game if there are 3 same marks in a row, column, or diagonal
and returns 1 if there's a winner, 0 if it's a draw, and -1 if the game should continue.
*/ 
int winner()
{
	if (CharMatrixDraw[1] == CharMatrixDraw[2] && CharMatrixDraw[2] == CharMatrixDraw[3])

		return 1;
	else if (CharMatrixDraw[4] == CharMatrixDraw[5] && CharMatrixDraw[5] == CharMatrixDraw[6])

		return 1;
	else if (CharMatrixDraw[7] == CharMatrixDraw[8] && CharMatrixDraw[8] == CharMatrixDraw[9])

		return 1;
	else if (CharMatrixDraw[1] == CharMatrixDraw[4] && CharMatrixDraw[4] == CharMatrixDraw[7])

		return 1;
	else if (CharMatrixDraw[2] == CharMatrixDraw[5] && CharMatrixDraw[5] == CharMatrixDraw[8])

		return 1;
	else if (CharMatrixDraw[3] == CharMatrixDraw[6] && CharMatrixDraw[6] == CharMatrixDraw[9])

		return 1;
	else if (CharMatrixDraw[1] == CharMatrixDraw[5] && CharMatrixDraw[5] == CharMatrixDraw[9])

		return 1;
	else if (CharMatrixDraw[3] == CharMatrixDraw[5] && CharMatrixDraw[5] == CharMatrixDraw[7])

		return 1;
	else if (CharMatrixDraw[1] != '1' && CharMatrixDraw[2] != '2' && CharMatrixDraw[3] != '3' &&
		CharMatrixDraw[4] != '4' && CharMatrixDraw[5] != '5' && CharMatrixDraw[6] != '6' &&
		CharMatrixDraw[7] != '7' && CharMatrixDraw[8] != '8' && CharMatrixDraw[9] != '9')

		return 0;
	else
		return -1;
}


// This function displays the game board
void GameChart(string name1, string name2)
{
    // This line clears the console screen (works on Windows)
	system("cls");

	cout << "\n==========================";
	cout << "\n\tTic Tac Toe\n";
	cout << "\n==========================\n";

	string nam1 = name1;
	string nam2 = name2;

	cout << nam1 << "(X)" << "========" << nam2 << " (0)\n\n";

	cout << "     ||     ||     " << endl;
	cout << "  " << CharMatrixDraw[1] << "  ||  " << CharMatrixDraw[2] << "  ||  " << CharMatrixDraw[3] << endl;

	cout << "=====||=====||=====" << endl;
	cout << "     ||     ||     " << endl;

	cout << "  " << CharMatrixDraw[4] << "  ||  " << CharMatrixDraw[5] << "  ||  " << CharMatrixDraw[6] << endl;

	cout << "=====||=====||=====" << endl;
	cout << "     ||     ||     " << endl;

	cout << "  " << CharMatrixDraw[7] << "  ||  " << CharMatrixDraw[8] << "  ||  " << CharMatrixDraw[9] << endl;

	cout << "     ||     ||     " << endl << endl;
}