#include <iostream>
#include <vector>
using namespace std;

/*
I improved my Tic Tac Toe game
replaced arrays with vectors
added input validation
cleared the console for better UX
used constants for board size
used C++17 standard
added comments for clarity
*/

const int BOARD_SIZE = 9;
vector<char> board(BOARD_SIZE + 1); // index from 1 to 9

// prototypes
void initializeBoard();
void printBoard(const string& player1, const string& player2);
bool makeMove(int choice, char mark);
int checkWinner();

int main() {
	// strings variables for player names in the same line
    string player1, player2;
    cout << "Enter First Gamer Name: ";
    cin >> player1;

    cout << "\nEnter Second Gamer Name: ";
    cin >> player2;

	// initialize the board
    initializeBoard();

	// game loop variables as integers in the global scope
    int currentPlayer = 1;
    int gameState = -1;

    do {
        printBoard(player1, player2);
        int choice;
        char mark = (currentPlayer == 1) ? 'X' : 'O';
        string playerName = (currentPlayer == 1) ? player1 : player2;

        cout << playerName << " (" << mark << ") Your Turn, Enter a Number: ";
        cin >> choice;

        if (!makeMove(choice, mark)) {
            cout << "Invalid move, try again.\n";
            continue; // dot not switch player if move is invalid
        }


        gameState = checkWinner();
        currentPlayer = (currentPlayer == 1) ? 2 : 1;

    } while (gameState == -1);

    printBoard(player1, player2);

    cout << "\n=============================\n";
    if (gameState == 1) {
        string winnerName = (currentPlayer == 1) ? player2 : player1;
        cout << "\a" << winnerName << " Is The Winner!\n";
    } else {
        cout << "\aGame is a Draw!\n";
    }
    cout << "=============================\n";

    return 0;
}

// initialize the board with the numbers using a for loop sentence
void initializeBoard() {
    for (int i = 1; i <= BOARD_SIZE; i++) {
        board[i] = '0' + i;
    }
}

//prints the board and clears the console for better UX using system("clear") or system("cls") depending on the OS
void printBoard(const string& player1, const string& player2) {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif

    cout << "\n==========================";
    cout << "\n\tTic Tac Toe\n";
    cout << "\n==========================\n";

    cout << player1 << " (X) ======== " << player2 << " (O)\n\n";

	// now print the board using a for loop
    for (int i = 1; i <= BOARD_SIZE; i += 3) {
        cout << "     ||     ||     " << endl;
        cout << "  " << board[i] << "  ||  " << board[i + 1] << "  ||  " << board[i + 2] << endl;
        if (i < 7) {
            cout << "=====||=====||=====" << endl;
        }
    }
    cout << "     ||     ||     " << endl << endl;
}

//Make a move, returns true if valid
bool makeMove(int choice, char mark) {
    if (choice >= 1 && choice <= BOARD_SIZE && board[choice] == ('0' + choice)) {
        board[choice] = mark;
        return true;
    }
    return false;
}

// Verifica si hay un ganador o empate / Verify if there's a winner or a draw (the checker function of the game)
int checkWinner() {
    //winning combinations using a 2D array
    const int wins[8][3] = {
        {1, 2, 3}, {4, 5, 6}, {7, 8, 9},
        {1, 4, 7}, {2, 5, 8}, {3, 6, 9}, 
        {1, 5, 9}, {3, 5, 7}            
    };

	// check for a winner with a range-based for loop (also known as for-each loop)
    for (auto& win : wins) {
        if (board[win[0]] == board[win[1]] && board[win[1]] == board[win[2]]) {
            return 1; //there's a winner
        }
    }

    // check for a draw
    for (int i = 1; i <= BOARD_SIZE; i++) {
        if (board[i] == ('0' + i)) {
            return -1; //there are moves left
        }
    }
    return 0; //it's a draw
}
