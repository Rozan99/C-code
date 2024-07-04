#include <iostream>
#include <cmath>

using namespace std;

// Function prototypes
void midSquareMethod(int seed, int n);
void multiplicativeCongruentialMethod(int seed, int a, int m);
void mixedCongruentialMethod(int seed, int a, int c, int m);

int main() {
    int seed, a, c, m, choice, n;
    char repeat;


    cout << "Enter Seed: ";
    cin >> seed;

    cout << "Enter constant multiplier (a): ";
    cin >> a;

    cout << "Enter constant adder (c): ";
    cin >> c;

    cout << "Enter modulo (m): ";
    cin >> m;

    cout << "Enter the number of digits in the seed value (for Mid Square method): ";
    cin >> n;
top:
    cout << "\nChoose a random number generation method:" << endl;
    cout << "1. Mid Square Method" << endl;
    cout << "2. Multiplicative Congruential Method" << endl;
    cout << "3. Mixed Congruential Method" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            midSquareMethod(seed, n);
            break;
        case 2:
            multiplicativeCongruentialMethod(seed, a, m);
            break;
        case 3:
            mixedCongruentialMethod(seed, a, c, m);
            break;
        case 4:
            cout << "Exiting program..." << endl;
            return 0;
        default:
            cout << "Invalid choice. Please choose 1, 2, 3, or 4." << endl;
            break;
    }

    cout << "\nDo you want to choose another random number generation method? (y/n): ";
    cin >> repeat;

    if (repeat == 'y' || repeat == 'Y') {
        cout << endl;
        goto top; // Jump to top label to choose again
    }

    cout << "Exiting program..." << endl;
    return 0;
}

// Mid Square Method
void midSquareMethod(int seed, int n) {
    // Using regular int to handle calculations
    int x = seed;
    int y;
    int k = n / 2;

    cout << "\nMID SQUARE METHOD RANDOM NUMBER GENERATION:" << endl << endl;

    for (int i = 0; i < 100; i++) {
        // Square the number
        x = x * x;

        // Extract middle n digits
        y = (x / static_cast<int>(pow(10, k))) % static_cast<int>(pow(10, n));
        cout << y << " ";
    }
    cout << endl;
}

// Multiplicative Congruential Method
void multiplicativeCongruentialMethod(int seed, int a, int m) {
    int x = seed;

    cout << "\nMULTIPLICATIVE CONGRUENTIAL METHOD RANDOM NUMBER GENERATION:" << endl << endl;

    for (int i = 0; i < 100; i++) {
        x = (a * x) % m;
        cout << x << " ";
    }
    cout << endl;
}

// Mixed Congruential Method
void mixedCongruentialMethod(int seed, int a, int c, int m) {
    int x = seed;

    cout << "\nMIXED CONGRUENTIAL METHOD RANDOM NUMBER GENERATION:" << endl << endl;

    for (int i = 0; i < 100; i++) {
        x = (a * x + c) % m;
        cout << x << " ";
    }
    cout << endl;
}
