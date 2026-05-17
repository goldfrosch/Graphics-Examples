#include "example/Example1.h"

constexpr unsigned int SCREEN_WIDTH = 800;
constexpr unsigned int SCREEN_HEIGHT = 600;

int main()
{
    Example1::createTriangle(SCREEN_WIDTH, SCREEN_HEIGHT);
    return 0;
}