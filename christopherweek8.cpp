//inheritance
#include <iostream>
using namespace std;

class Square {
protected:
    double side;

public:
    // Constructor
    Square(double s) {
        side = s;
    }

    // Destructor
    ~Square() {
    }

    double getPeri() {
        return 4 * side;
    }

    double getArea() {
        return side * side;
    }
};

class Cube : public Square {
public:
    // Constructor
    Cube(double s) : Square(s) {
    }

    // Destructor
    ~Cube() {
    }

    double getArea() {
        return 6 * side * side;
    }

    double getVolume() {
        return side * side * side;
    }
};

int main() {
    Square sq(4);
    cout << sq.getPeri() << endl;
    cout << sq.getArea() << endl;

    Cube cb(4);
    cout << cb.getArea() << endl;
    cout << cb.getVolume() << endl;

    return 0;
}
