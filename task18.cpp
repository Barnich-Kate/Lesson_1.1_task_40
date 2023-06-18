#include <iostream>

using namespace std;

int main()
{
    int result1, result2, number;
    cout << "Type number more, than 999: ";
    cin >> number;
    result1 = number / 1000;
    result2 = result1 % 10;
    cout << "Result1 is equal: " << result1 << endl;
    cout << "Result2 is equal: " << result2 << endl;
    

    return 0;
}
