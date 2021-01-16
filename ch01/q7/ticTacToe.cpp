#include "ticTacToe.h"
#include <iostream>

using namespace std;

ticTacToe::ticTacToe()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ticTacToeArray[i][j] = -1;
        }
    }
}

void ticTacToe::printBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (ticTacToeArray[i][j] == 1)
            {
                cout << "X";
            }
            else if (ticTacToeArray[i][j] == 0)
            {
                cout << "O";
            }
            else
            {
                cout << " ";
            }
            if (j != 2)
                cout << "|";
        }
        if (i != 2)
        {
            cout << "\n-----\n";
        }
    }
    puts("");
}

void ticTacToe::move(int m)
{

    int x, y;
    do
    {
        cout << "Enter the position you want: ";
        cin >> x >> y;
    } while (!isMoveValid(x, y));

    ticTacToeArray[x][y] = m;
}

bool ticTacToe::isMoveValid(int x, int y)
{
    if (ticTacToeArray[x][y] == -1)
        return 1;
    return 0;
}

int ticTacToe::win()
{
    int counter;
    int value;

    value = ticTacToeArray[0][0];
    counter = 1;
    for (int j = 1; j < 3; j++)
    {
        if (value != -1 && ticTacToeArray[0][j] != -1)
        {
            if (value == ticTacToeArray[0][j])
            {
                counter++;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
    if (counter == 3)
        return 1;
    counter = 1;

    for (int i = 1; i < 3; i++)
    {
        if (value != -1 && ticTacToeArray[i][0] != -1)
        {
            if (value == ticTacToeArray[i][0])
            {
                counter++;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }

    if (counter == 3)
        return 1;

    counter = 0;
    value = ticTacToeArray[1][1];

    for (int j = 0; j < 3; j++)
    {
        if (value != -1 && ticTacToeArray[1][j] != -1)
        {
            if (value == ticTacToeArray[1][j])
            {
                counter++;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
    if (counter == 3)
    {
        return 1;
    }

    counter = 0;

    for (int i = 0, j = 0; j < 3; i++, j++)
    {
        if (value != -1 && ticTacToeArray[i][j] != -1)
        {
            if (value == ticTacToeArray[i][j])
            {
                counter++;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
    if (counter == 3)
        return 1;

    counter = 0;

    for (int i = 2, j = 0; j < 3; i--, j++)
    {
        if (value != -1 && ticTacToeArray[i][j] != -1)
        {
            if (value == ticTacToeArray[i][j])
            {
                counter++;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
    if (counter == 3)
        return 1;

    counter = 0;

    for (int i = 0; i < 3; i++)
    {
        if (value != -1 && ticTacToeArray[i][1] != -1)
        {
            if (value == ticTacToeArray[i][1])
            {
                counter++;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
    if (counter == 3)
        return 1;

    counter = 1;
    value = ticTacToeArray[2][2];

    for (int j = 1; j >= 0; j--)
    {
        if (value != -1 && ticTacToeArray[2][j] != -1)
        {
            if (value == ticTacToeArray[2][j])
            {
                counter++;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
    if (counter == 3)
        return 1;
    counter = 1;

    for (int i = 1; i >= 0; i--)
    {
        if (value != -1 && ticTacToeArray[i][2] != -1)
        {
            if (value == ticTacToeArray[i][2])
            {
                counter++;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }

    if (counter == 3)
        return 1;

    return 0;
}

bool ticTacToe::fair()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (ticTacToeArray[i][j] == -1)
                return 0;
        }
    }
    return 1;
}