#include <iostream>
#include <thread>
#include <chrono>
#include <unistd.h>
#include "define.h"
#include "window.h"
using namespace std;

int main()
{
    createWindow(100,24,Color::Green);
    return 0;
}