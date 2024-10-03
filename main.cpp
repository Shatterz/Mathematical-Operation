#include <iostream>
using namespace std;

class fraction {
private:
    int numerator;
    int denominator;

public:
    // Function to set numerator and denominator
    void set(int num, int den) {
        numerator = num;
        denominator = den;
    }

    // Arithmetic operations
    fraction addedTo(fraction& other) {
        fraction result;
        result.numerator = numerator * other.denominator + other.numerator * denominator;
        result.denominator = denominator * other.denominator;
        return result;
    }

    fraction subtract(fraction& other) {
        fraction result;
        result.numerator = numerator * other.denominator - other.numerator * denominator;
        result.denominator = denominator * other.denominator;
        return result;
    }

    fraction multipliedBy(fraction& other) {
        fraction result;
        result.numerator = numerator * other.numerator;
        result.denominator = denominator * other.denominator;
        return result;
    }

    fraction dividedBy(fraction& other) {
        fraction result;
        result.numerator = numerator * other.denominator;
        result.denominator = denominator * other.numerator;
        return result;
    }

    // Comparison operation
    bool isEqualTo(fraction& other) {
        return (numerator * other.denominator == denominator * other.numerator);
    }

    // Output operation
    void print() {
        cout << numerator << "/" << denominator;
    }
};

int main() {
    fraction f1; // Declare f1
    fraction f2; // Declare f2
    fraction result;

    f1.set(9, 8);
    f2.set(2, 3);

    cout << "The product of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.multipliedBy(f2);
    result.print();
    cout << endl;

    cout << "The quotient of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.dividedBy(f2);
    result.print();
    cout << endl;

    cout << "The sum of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.addedTo(f2);
    result.print();
    cout << endl;

    cout << "The difference of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.subtract(f2);
    result.print();
    cout << endl;

    if (f1.isEqualTo(f2)) {
        cout << "The two Fractions are equal." << endl;
    }
    else {
        cout << "The two Fractions are not equal." << endl;
    }

    return 0;
}
