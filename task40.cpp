#include <iostream>

using namespace std;

int main()
{
    float A1, B1, C1, A2, B2, C2, D, x, y;
    cout<<"Type number A1: ";
    cin >> A1;
    cout<<"Type number B1: ";
    cin >> B1;
    cout<<"Type number C1: ";
    cin >> C1;
    cout<<"Type number A2: ";
    cin >> A2;
    cout<<"Type number B2: ";
    cin >> B2;
    cout<<"Type number C2: ";
    cin >> C2;
    D = A1 * B2 - A2 * B1;
    x = (C1*B2 - C2*B1) / D;
    y = (A1*C2 - A2*C1) / D;
    cout << "D is equal: " << D << endl;
    cout << "x is equal: " << x << endl;
    cout << "y is equal: " << y << endl;
    

    return 0;
}
