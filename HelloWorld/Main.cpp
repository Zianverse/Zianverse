#include <iostream>
#include "PoorChatGPT.h"

using namespace std;


int main()
{
    PoorChatGPT poorChatGPT;

    while (true)
    {
        poorChatGPT.StartWorking();

        cout << "Press any key to continue..." << endl;
        int c = getchar();
    }
    return 0;
}