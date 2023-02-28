#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x, y;

    cout << "Table for Y = EXP[-X]\n\n";
    cout << "X\t";
    for (x = 0.0; x <= 1.0; x += 0.1) {
        cout << fixed << setprecision(1) << x << "\t"; 
        // Page 55, we may also control the pecision of floating point numbers appearing
        // in the output by using the fixed and setprecision() manipulator.
    }
    cout << endl;

    for (x = 0.0; x <= 9.0; x++) {
        cout << fixed << setprecision(1) << x << "\t";
        for (double i = 0.0; i <= 1.0; i += 0.1) {
            y = exp(-x);
            cout << fixed << setprecision(5) << y << "\t";
        }
        cout << endl;
    }

    return 0;
}


/*
Table for Y = EXP[-X]

X       0.0     0.1     0.2     0.3     0.4     0.5     0.6     0.7     0.8     0.9     1.0
0.0     1.00000 1.00000 1.00000 1.00000 1.00000 1.00000 1.00000 1.00000 1.00000 1.00000 1.00000
1.0     0.36788 0.36788 0.36788 0.36788 0.36788 0.36788 0.36788 0.36788 0.36788 0.36788 0.36788
2.0     0.13534 0.13534 0.13534 0.13534 0.13534 0.13534 0.13534 0.13534 0.13534 0.13534 0.13534
3.0     0.04979 0.04979 0.04979 0.04979 0.04979 0.04979 0.04979 0.04979 0.04979 0.04979 0.04979
4.0     0.01832 0.01832 0.01832 0.01832 0.01832 0.01832 0.01832 0.01832 0.01832 0.01832 0.01832
5.0     0.00674 0.00674 0.00674 0.00674 0.00674 0.00674 0.00674 0.00674 0.00674 0.00674 0.00674
6.0     0.00248 0.00248 0.00248 0.00248 0.00248 0.00248 0.00248 0.00248 0.00248 0.00248 0.00248
7.0     0.00091 0.00091 0.00091 0.00091 0.00091 0.00091 0.00091 0.00091 0.00091 0.00091 0.00091
8.0     0.00034 0.00034 0.00034 0.00034 0.00034 0.00034 0.00034 0.00034 0.00034 0.00034 0.00034
9.0     0.00012 0.00012 0.00012 0.00012 0.00012 0.00012 0.00012 0.00012 0.00012 0.00012 0.00012
*/