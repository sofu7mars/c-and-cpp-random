#include <iostream>
//#include <windows.h>

using namespace std;

int main(void) 
{
    int ghoul = 1000;
    bool a = true;
    while (a) {
        //Sleep(30);
        cout << ghoul << " - 7";
        ghoul = ghoul - 7;
        cout << " = " << ghoul << endl;
        if (ghoul <= 7) {
            cout << "I'm a Ghoul" << endl;
            break;
        }

    }
    return 0;
}
d
