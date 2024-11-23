#include <iostream>
#include <windows.h>
#include <conio.h>
#include <ctime>
using namespace std;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main() {
    int width = 50, height = 20;
    VeKhung khung(width, height);
    CONRAN r;
    ThucAn t(width, height);
    int Huong = 0;
    char key;
    int speed = 200;
    return 0;
}
