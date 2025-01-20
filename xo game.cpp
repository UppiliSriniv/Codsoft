#include<iostream>
using namespace std;

// Initializing the game board
char board[3][3];

// Function to reset the game board
void resetBoard() {
    char initial = '1';
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            board[i][j] = initial++;
        }
    }
}

// Function to display the current state of the game board
void showBoard() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to check if there's a winning condition
bool checkWin() {
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) ||
            (board[0][i] == board[1][i] && board[1][i] == board[2][i])) {
            return true;
        }
    }
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0])) {
        return true;
    }
    return false;
}

// Main function to run the game
int main() {
    char currentPlayer;
    bool playAgain;
    do {
        resetBoard();
        currentPlayer = 'X';
        int turns = 0;
        bool gameWon = false;

        while (turns < 9 && !gameWon) {
            showBoard();
            int move;
            cout << "Player " << currentPlayer << ", enter your move (1-9): ";
            cin >> move;
            int row = --move / 3, col = move % 3;
            if (board[row][col] != 'X' && board[row][col] != 'O') {
                board[row][col] = currentPlayer;
                if (checkWin()) {
                	showBoard();
                	cout<<"Player "<<currentPlayer<<" wins!"<<endl;
                    gameWon = true;
                }else {
				
                currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
                turns++;
            }
            } else {
                cout << "Invalid move. Try again." << endl;
            }
        }
       
        if (!gameWon) {
             showBoard();
            cout << "It's a draw!" << endl;
        }
        char response;
        cout << "Do you want to play again? (y/n): ";
        cin >> response;
        playAgain= (response=='y');
    } while (playAgain);
    return 0;
}


