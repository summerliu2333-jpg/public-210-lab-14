//COMSC-210-5068, Lab 14, Yang Liu
#include <iostream>
#include <iomanip>
using namespace std;

class Color {
private:
    int red, green, blue; 
public:
    Color() : red(0), green(0), blue(0) {} 

    void setRed(int r) { red = r; }
    void setGreen(int g) { green = g; }
    void setBlue(int b) { blue = b; }

    int getRed() const { return red; }
    int getGreen() const { return green; }
    int getBlue() const { return blue; }

    void print() const {
        cout << "RGB(" 
            << setw(3) << setfill(' ') << red << ", "
                  << setw(3) << setfill(' ') << green << ", "
                  << setw(3) << setfill(' ') << blue << ")" 
                  << endl;
    }
};

int main() {
    Color black;
    black.print();

    Color red;
    red.setRed(255);
    red.setGreen(0);
    red.setBlue(0);
    red.print();

    Color gray;
    gray.setRed(128);
    gray.setGreen(128);
    gray.setBlue(128);
    gray.print();

    return 0;
}