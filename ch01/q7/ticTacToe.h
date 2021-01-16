#ifndef TicTacToe_H
#define TicTacToe_H

class ticTacToe
{
public:
    ticTacToe();

    void printBoard();
    void move(int);
    int win();
    bool fair();

private:
    int ticTacToeArray[3][3];
    bool isMoveValid(int, int);
};

#endif