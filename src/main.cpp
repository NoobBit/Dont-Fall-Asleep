#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

void move_mouse(int x, int y, int d, int m)
{
    for (int i = 0; i < m; i++)
    {
        SetCursorPos(y + 20, x);
        Sleep(5);
        SetCursorPos(y - 1, x);
    }
}

void active_false(string dt, string movelen)
{
    int delayt;
    int movlen;

    delayt = atoi(dt.c_str());
    movlen = atoi(movelen.c_str());

    POINT p;

    cout << "\nPress the s key to start\n\n";
    while (true)
    {
        if (GetAsyncKeyState(0x53))
        {
           break; 
        }
    }

    cout << "Debug Info: \n";

    while (true)
    {
        if(!GetAsyncKeyState(0x51))
        {
            GetCursorPos(&p);
            cout << "Current Cursor Pos:" << p.y << "-" << p.x << "\n";
            move_mouse(p.y, p.x, delayt, movlen);
        }
        else
        {
            exit(0);
        }
    }
    
}

int main()
{
    // string start_key;
    // string quit_key;
    string delay;
    string movement_length;

    while (true)
    {
        cout << "Input a delay (50 recommened): ";
        cin >> delay;

        cout << "Input the movement length (50 recommened): ";
        cin >> movement_length;

        if (delay == "" || movement_length == "")
        {

        }
        else
        {
            if (delay == "0")
            { 
                delay = "50";
            }
            else if (movement_length == "0")
            {
                delay = "50";
            }
            else
            {
                break;
            }
        }
    }
    active_false(delay, movement_length);
    return 0;
}