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

class VeKhung {
public:
    int width, height;
    VeKhung(int w, int h) : width(w), height(h) {}

    void Ve() {
        setColor(7);
        for (int i = 0; i <= width; i++) {
            gotoxy(i, 0); cout << char(219);
            gotoxy(i, height); cout << char(219);
        }
        for (int i = 0; i <= height; i++) {
            gotoxy(0, i); cout << char(219);
            gotoxy(width, i); cout << char(219);
        }
    }
};

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
