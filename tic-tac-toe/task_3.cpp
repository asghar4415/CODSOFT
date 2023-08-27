#include <iostream>
#include <string>

using namespace std;

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int row, column;
char turn = 'X';

string player1, player2;
bool draw = false;

void func1()
{

    cout << "      |      |     " << endl;
    cout << "  " << board[0][0] << "   |   " << board[0][1] << "  |  " << board[0][2] << " " << endl;
    cout << "      |      |     " << endl;
    cout << "------|------|-----" << endl;
    cout << "      |      |     " << endl;
    cout << "  " << board[1][0] << "   |   " << board[1][1] << "  |  " << board[1][2] << " " << endl;
    cout << "      |      |     " << endl;
    cout << "------|------|-----" << endl;
    cout << "      |      |     " << endl;
    cout << "  " << board[2][0] << "   |   " << board[2][1] << "  |  " << board[2][2] << " " << endl;
    cout << "      |      |     " << endl;
}
void func2()
{
    int digit;

    if (turn == 'X')
    {
        cout << player1 << " turn: ";

        cin >> digit;
    }
    else if (turn == 'O')
    {
        cout << player2 << " turn: ";

        cin >> digit;
    }

    if (digit == 1)
    {
        row = 0;
        column = 0;
    }
    else if (digit == 2)
    {
        row = 0;
        column = 1;
    }
    else if (digit == 3)
    {
        row = 0;
        column = 2;
    }
    else if (digit == 4)
    {
        row = 1;
        column = 0;
    }
    else if (digit == 5)
    {
        row = 1;
        column = 1;
    }
    else if (digit == 6)
    {
        row = 1;
        column = 2;
    }
    else if (digit == 7)
    {
        row = 2;
        column = 0;
    }
    else if (digit == 8)
    {
        row = 2;
        column = 1;
    }
    else if (digit == 9)
    {
        row = 2;
        column = 2;
    }
    else
    {
        cout << "Invalid !!" << endl;
    }

    if (turn == 'X' && board[row][column] != 'X' && board[row][column] != 'O')
    {
        board[row][column] = 'X';
        turn = 'O';
    }
    else if (turn == 'O' && board[row][column] != 'X' && board[row][column] != 'O')
    {
        board[row][column] = 'O';
        turn = 'X';
    }
    
    else
    {
        cout << "Box already filled !!" << endl;
        func2();
    }
}
bool func3()
{
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
            return true;
    }
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0])
    {
        return true;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != 'X' && board[i][j] != 'O')
            {
                return false;
            }
        }
    }

    draw = true;
    return false;
}
int main()
{
    cout << "Enter player 1 name: ";
    getline(cin, player1);
    cout << "Enter player 2 name: ";
    getline(cin, player2);
    cout << player1 << " is X and " << player2 << " is O" << endl;

    while (!func3())
    {
        func1();
        func2();
        func3();
    }
    if (turn == 'X' && draw == false)
    {
        func1();
        cout << player2 << " wins!!" << endl;
    }
    else if (turn == 'O' && draw == false)
    {
        func1();
        cout << player1 << " wins!!" << endl;
    }
    else
    {
        cout << "Game draw !!" << endl;
    }

    return 0;
}
