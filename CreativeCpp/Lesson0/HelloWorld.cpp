#include "HelloWorld.h"

#include <iostream>
using namespace std;

std::string HelloWorld::LessonName()
{
    return "Hello World";
}

void HelloWorld::Start()
{
    cout << "What the hell are you doing?\r\nIt's crazy!\r\n";
    cout << 10 << std::endl;

    char x;
    char v;
    while (true)
    {
        cout << "Please input a value for v.\r\n";
        cin >> v;

        cout << "Please input a value for x.\r\n";
        cin >> x;

        if (x == 'f')
        {
            cout << "Oh~ I know!\r\n";
            break;
        }
        else if (x == 'j')
        {
            cout << "What?\r\nDid you hear me?\r\n";
        }
        else if (v == 'k')
        {
            cout << "......\r\n";
        }
        else
        {
            cout << "£¨ÄãÃ»ÀíËû¡££©\r\nDid you hear me?\r\n";
        }

    }

    cout << "Game Over! Have fun~\r\n";
    cin >> x;
}
