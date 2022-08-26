#include <bits/stdc++.h>
using namespace std;

#define COMPUTER 1
#define HUMAN 2
#define SIDE 3
#define COMPUTERMOVE 'O'
#define HUMANMOVE 'X'

void initialise(int board[][SIDE])
{
    for (int i = 0; i < SIDE; i++)
    {
        for (int j = 0; j < SIDE; j++)
        {
            board[i][j] = '*';
        }
    }
}

void showInstruction()
{
    cout << "Choose the cell given below and play..\n" << endl;
    cout << "\t\t\t 1 | 2 | 3 " << endl;
    cout << "\t\t\t --------- " << endl;
    cout << "\t\t\t 4 | 5 | 6 " << endl;
    cout << "\t\t\t --------- " << endl;
    cout << "\t\t\t 7 | 8 | 9 " << endl;
    cout << "\n\n";
}

void showBoard(int board[][SIDE])
{
    printf("\t\t\t %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("\t\t\t-----------\n");
    printf("\t\t\t %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("\t\t\t-----------\n");
    printf("\t\t\t %c | %c | %c \n\n", board[2][0], board[2][1], board[2][2]);
}

bool rowCross(int board[][SIDE])
{
    for (int i = 0; i < SIDE; i++)
    {
        if (board[i][0] == board[i][1] &&
            board[i][1] == board[i][2] &&
            board[i][0] != '*')
            return true;
    }
    return false;
}

bool colomnCross(int board[][SIDE])
{
    for (int i = 0; i < SIDE; i++)
    {
        if (board[0][i] == board[1][i] &&
            board[1][i] == board[2][i] &&
            board[0][i] != '*')
            return true;
    }
    return false;
}

bool diagonalCross(int board[][SIDE])
{
    if (board[0][0] == board[1][1] &&
        board[1][1] == board[2][2] &&
        board[0][0] != '*')
        return true;
    else if (board[0][2] == board[1][1] &&
             board[1][1] == board[2][0] &&
             board[0][2] != '*')
        return true;

    return false;
}

void declareWinner(int whoseTurn)
{
    if (whoseTurn == COMPUTER)
    {
        cout << "computer has won" << endl;
    }
    else
    {
        cout << "You have won" << endl;
    }
}

bool gameOver(int board[][SIDE])
{
    return (rowCross(board) || colomnCross(board) || diagonalCross(board));
}

int bestMove(int board[][SIDE], int Index)
{
}

void playTicTacToe(int whoseTurn)
{
    int board[SIDE][SIDE];
    initialise(board);
    showInstruction();
    int Index = 0, x = 0, y = 0;
    while (gameOver(board) == false && Index != SIDE * SIDE)
    {
        int n;
        if (whoseTurn == COMPUTER)
        {
            n = bestMove(board, Index);
            x = n / SIDE;
            y = n % SIDE;
            board[x][y] = COMPUTERMOVE;
            cout << "Computer has put " << COMPUTERMOVE << " in the cell " << n + 1 << endl;
            showBoard(board);
            Index++;
            whoseTurn = HUMAN;
        }
        else if (whoseTurn == HUMAN)
        {
            cout << "You can insert in the following poasition : ";
            for (int i = 0; i < SIDE; i++)
            {
                for (int j = 0; j < SIDE; j++)
                {
                    if (board[i][j] == '*')
                    {
                        cout << (i * 3 + j) + 1<<" ";
                    }
                }
            }
            cout << "\nEnter the position : ";
            cin >> n;
            n--;
            x = n / SIDE;
            y = n % SIDE;
            if (board[x][y] == '*' && n >= 0 && n < 9)
            {
                board[x][y] = HUMANMOVE;
                cout << "You have put " << HUMANMOVE << " in cell " << n + 1 << endl;
                showBoard(board);
                Index++;
                whoseTurn = COMPUTER;
            }
            else if (board[x][y] != '*' && n < 9 && n >= 0)
            {
                printf("\nPosition is occupied, select any one place from the available places\n\n");
            }
            else if (n < 0 || n > 8)
            {
                printf("Invalid position\n");
            }
        }
    }

    if (gameOver(board) == false && Index == SIDE * SIDE)
        printf("oops....  It's a draw\n");
    else
    {
        if (whoseTurn == COMPUTER)
            whoseTurn = HUMAN;
        else if (whoseTurn == HUMAN)
            whoseTurn = COMPUTER;
        declareWinner(whoseTurn);
    }
}

int main()
{
    cout << "----------------------------------------------------" << endl;
    cout << "                Tic-Tac-Toe                         " << endl;
    cout << "----------------------------------------------------" << endl;
    char resume = 'y';

    do
    {
        char choice;
        cout << "Do you want to start first?(y/n): ";
        cin >> choice;

        if (choice == 'y')
        {
            playTicTacToe(HUMAN);
        }
        else if (choice == 'n')
        {
            playTicTacToe(COMPUTER);
        }
        else
        {
            cout << "Invalid choice" << endl;
        }

        cout << "\n Do you want to quit?(y/n): ";
        cin >> resume;
    } while (resume == 'n');
    return 0;
}