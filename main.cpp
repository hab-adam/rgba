#include <iostream>
#include "RGBA.cpp"
using namespace std;

int main()
{
RGBA white(0);
RGBA blue(0,0,255);
RGBA green(0, 255, 0, 255);
RGBA red(255, 0, 0, 255);
white.print();
blue.print();
green.print();
red.print();
return 0;
}
