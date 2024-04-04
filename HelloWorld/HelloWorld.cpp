// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
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

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
