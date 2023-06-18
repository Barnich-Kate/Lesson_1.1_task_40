#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Type the number: ";
    cin >> n;
    cout << n / 3600 << " ч ";
    n -= (n / 3600) * 3600;
    cout << n / 60 << " мин ";
    n -= (n / 60) * 60;
    cout << n << " сек ";
    
    return 0;
}
