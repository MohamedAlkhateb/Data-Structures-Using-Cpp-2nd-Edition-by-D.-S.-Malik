#include <iostream>
#include "ticTacToe.h"

using namespace std;

int main()
{
    ticTacToe play;

    char ch;
    do
    {
        cout << "Enter X or O for player1: ";
        cin >> ch;
    } while (ch != 'X' && ch != 'O');

    int player1, player2;
    if (ch == 'X')
    {
        player1 = 1;
        player2 = 0;
    }
    else
    {
        player1 = 0;
        player2 = 1;
    }

    do
    {
        cout << "\nPlayer1: " << endl;
        play.move(player1);
        play.printBoard();
        if (play.win())
        {
            cout << "Player1 winned" << endl;
            return 0;
        }
        if (play.fair())
        {
            break;
        }
        cout << "\nPlayer2: " << endl;
        play.move(player2);
        play.printBoard();
        if (play.win())
        {
            cout << "Player2 winned" << endl;
            return 0;
        }
    } while (!play.fair());

    cout << "Fair" << endl;
}