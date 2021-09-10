#include <iostream>
#include"CFraction.h"
using namespace std;

int main()
{
    CFraction zF1, zF2;
    cin >> zF1 >> zF2;

    cout << "zF1 = " << zF1 << endl;
    cout << "zF2 = " << zF2 << endl;

    cout << "zF1 + zF2 = " << zF1 + zF2 << endl;
    cout << "zF1 - zF2 = " << zF1 - zF2 << endl;
    cout << "zF1 * zF2 = " << zF1 * zF2 << endl;
    cout << "zF1 / zF2 = " << zF1 / zF2 << endl;

    system("pause");
    return 0;
}


