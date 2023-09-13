#include "source.h"

Board::Board()
{
    this->arr = new char[9];
    for (int i = 0; i < 9; i++)
    {

        arr[i] = 49 + i;
    }
}

Board::~Board()
{
    if (arr != nullptr)
    {
        delete[] arr;
        arr = nullptr;
    }
}

void Board::Display() const
{
    cout << "\n";
    cout << "     |     |     \n";
    cout << "  " << arr[0] << "  |  " << arr[1] << "  |  " << arr[2] << "  \n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  " << arr[3] << "  |  " << arr[4] << "  |  " << arr[5] << "  \n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  " << arr[6] << "  |  " << arr[7] << "  |  " << arr[8] << "  \n";
    cout << "     |     |     \n";
}

int Board::checkResults() const
{
    if (arr[0] == arr[1] && arr[1] == arr[2])
    {
        if (arr[0] == 'X')
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
    else if (arr[3] == arr[4] && arr[4] == arr[5])
    {
        if (arr[3] == 'X')
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
    else if (arr[6] == arr[7] && arr[8] == arr[7])
    {
        if (arr[6] == 'X')
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
    else if (arr[0] == arr[3] && arr[3] == arr[6])
    {
        if (arr[0] == 'X')
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
    else if (arr[1] == arr[4] && arr[7] == arr[4])
    {
        if (arr[1] == 'X')
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
    else if (arr[2] == arr[5] && arr[8] == arr[5])
    {
        if (arr[2] == 'X')
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
    else if (arr[0] == arr[4] && arr[4] == arr[8])
    {
        if (arr[0] == 'X')
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
    else if (arr[2] == arr[4] && arr[4] == arr[6])
    {
        if (arr[2] == 'X')
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
    else
    {
        return -1;
    }
}

void Board::mark(int player, int input)
{
    if (arr[input - 1] == 'X' || arr[input - 1] == 'O')
    {
        cout << "\nAlready marked\n";
        cout << "\nYour turn is wasted as a penalty\n";
        return;
    }
    if (player == 1)
    {
        arr[input - 1] = 'X';
    }
    else
    {

        arr[input - 1] = 'O';
    }
}

void Board::winner(int player)
{
    cout << "Hurrrrraay Player " << player << " Wins\n";
}
