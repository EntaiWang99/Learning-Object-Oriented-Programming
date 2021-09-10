#include <iostream>
#include"CMatrix.h"
/*
3
3
1 2 3 
4 5 6
7 8 9
3
3
1 3 5
7 9 11
13 15 17
*/



int main()
{
    CMatrix zM1, zM2;

    cin >> zM1 >> zM2;
    cout << "zM1 = " << endl << zM1 << endl;

    cout << "zM2 = " << endl << zM2 << endl;

    cout << "zM1 + zM2 = " << endl << zM1 + zM2 << endl;
    cout << "zM1 - zM2 = " << endl << zM1 - zM2 << endl;
    cout << "zM1 * zM2 = " << endl << zM1 * zM2 << endl;
    
    return 0;
}

