//COMSC-210-5068, Lab 14, Yang Liu
#include <iostream>
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
};

int main() {
    return 0;
}