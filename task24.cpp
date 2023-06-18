#include <iostream>

using namespace std;

int main()
{
       int day;
    
    cout << "Введите день: ";
    cin >> day;
    
    day = day % 7;
    
    switch (day)
    {
        case 0:
        cout << "Воскресение" << endl;
        break;
        case 1:
        cout << "Понедпльник" << endl;
        break;
        case 2: 
        cout << "Вторник" << endl;
        break;
        case 3:
        cout << "Среда" << endl;
        break;
        case 4:
        cout << "Четверг" << endl;
        break;
        case 5:
        cout << "Пятница" << endl;
        break;
        case 6:
        cout << "Суббота" << endl;
        break;
        
    }

    
    return 0;
}
