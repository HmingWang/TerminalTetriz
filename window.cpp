#include "window.h"
#include <iostream>
using namespace std;
void createWindow(int width, int height, int color)
{
    cout << "\033[2J";
    for (int i = 0; i < height; ++i)
    {
        cout << "\033[4" << color << "m" << flush;
        for (int j = 0; j < width; ++j)
            cout << ".";

        cout << "\033[0m" << flush;
        cout << endl;
    }
    cout << "\033[0m" << flush;
}