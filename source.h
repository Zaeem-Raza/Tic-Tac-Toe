#ifndef SOURCE_H_
#define SOURCE_H_
#include <iostream>
using namespace std;

class Board
{

private:
    char *arr;

public:
    Board();
    ~Board();
    void Display() const;
    int checkResults() const;
    void mark(int player, int input);
    void winner(int player);
};
#endif