#include <iostream>
#include "RGBA.cpp"
using namespace std;

int main()
{
RGBA green(0, 255, 0, 255);
RGBA red(255, 0, 0, 255);
green.print();
red.print();
return 0;
}
