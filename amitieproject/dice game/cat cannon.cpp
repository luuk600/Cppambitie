#include <iostream>// including cout and cin so you can print to the screen and read input from users


using namespace std; //you now dont need to use std::cout but you can just use cout

int main()
{
    int ammo = 6;
    int clear = 0;
    int mag = 30;
    char shoot;
    bool magfull = true;
    bool ammofilll = true;


    cout << "type r to reload and s to shoot." << endl;
    cin >> shoot;
    while (magfull)
    {
        if (mag < 1 && ammo < 1)
        {
            cout << "you have shot all your cats good job" << endl;
            magfull = false;
        }
        if (shoot != 'r' && shoot != 's')
        {
            cin >> shoot;
        }
        if (shoot == 's' && magfull && ammofilll)
        {
            shoot = 'n';
            ammo--;
            clear++;
            cout << "ammo = " << ammo << endl;
            cin >> shoot;
        }
        if (shoot == 'r' && mag > 5)
        {
            shoot = 'n';
            ammo += clear;
            mag -= clear;
            cout << ammo << endl;
            cout << mag << endl;
            clear = 0;
            cin >> shoot;
            ammofilll = true;
            if (ammo == 0 && mag != 0)
            {
                cout << "ammo = 0" << endl;
                cout << ammo << endl;
                cout << mag << endl;
            }
        }
        if (shoot == 'r' && mag < 6)
        {
            shoot = 'n';
            ammo = mag;
            cout << ammo << endl;
            cout << mag << endl;
            mag = 0;
        }
        if (ammo == 0 && magfull)
        {
            ammofilll = false;
            cout << "you need to press r" << endl;
            cin >> shoot;
            if (shoot != 'r')
            {
                cout << " " << endl;
            }
        }
    }
}
// Debug program: F5 or Debug > Start Debugging menu