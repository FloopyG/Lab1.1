#include <iostream>
#include "Point.h"

using namespace std;

Point Check(double x, double y) {
    Point z;

    if (!z.Init(x, y)) {
        cout << "Wrong values." << endl;
    }

    return z;
}

int main()
{
    Point z;
    z.Read();
    z.Display();
    cout << "Distance from point to zero coordinates: " << z.distance() << endl;

    double x, y;
    cout << "Enter X: "; cin >> x;
    cout << "Enter Y: "; cin >> y;
    z = Check(x, y);
    z.Display();
    cout << "Distance from point to zero coordinates: " << z.distance() << endl;

    cin.get();
    system("pause");
    return 0;
}


