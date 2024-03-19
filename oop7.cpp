#include<iostream>
using namespace std;

class complex {
    float real, img;
    static int count;
public:
    void printcox();
    complex();
    complex(float a, float b);
    complex operator+(const complex &c) const {
        complex temp;
        temp.img = img + c.img;
        temp.real = real + c.real;
        return temp;
    }
    complex operator-(const complex &c) const {
        complex temp;
        temp.img = img - c.img;
        temp.real = real - c.real;
        return temp;
    }
    complex operator*(const complex &c) const {
        complex temp;
        temp.img = img * c.img;
        temp.real = real * c.real;
        return temp;
    }
    complex operator/(const complex &c) const {
        complex temp;
        if (c.real == 0 && c.img == 0) {
            cout << "Error: Division by zero" << endl;
            return temp;
        }
        temp.img = img / c.img;
        temp.real = real / c.real;
        return temp;
    }
};

int complex::count = 1;

complex::complex() {
    real = 0;
    img = 0;
    count++;
}

complex::complex(float a, float b) {
    img = b;
    real = a;
    count++;
}

void complex::printcox() {
    cout << endl << real << " + " << img << "i";
}

int main() {
    cout << "Enter Real value for Complex c1: ";
    float a1, b1;
    cin >> a1;
    cout << "Enter Imaginary value for Complex c1: ";
    cin >> b1;
    complex c1(a1, b1);

    cout << "Enter Real value for Complex c2: ";
    float a2, b2;
    cin >> a2;
    cout << "Enter Imaginary value for Complex c2: ";
    cin >> b2;
    complex c2(a2, b2);

    complex c3;
    cout << endl << "Choose operation:";
    cout << endl << "(+) Addition";
    cout << endl << "(-) Subtraction";
    cout << endl << "(*) Multiplication";
    cout << endl << "(/) Division" << endl;
    char ch;
    cin >> ch;

    switch (ch) {
        case '+':
            c3 = c1 + c2;
            break;
        case '-':
            c3 = c1 - c2;
            break;
        case '*':
            c3 = c1 * c2;
            break;
        case '/':
            c3 = c1 / c2;
            break;
        default:
            cout << "Invalid operation" << endl;
            return 1;
    }

    cout << "Result:";
    c1.printcox();
    c2.printcox();
    c3.printcox();
    return 0;
}
