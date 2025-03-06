#include <iostream>
#include <cstdlib>
#include <ctime>

#ifdef _WIN32
    #define CLEAR_SCREEN "cls"
#else
    #define CLEAR_SCREEN "clear"
#endif

using namespace std;

int main()
{
	system(CLEAR_SCREEN);
    int ships[4][4] = {};
    int ones_count = 0;
    srand(time(0));

    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            if (ones_count < 4 && rand() % 2 == 1) 
            {
                ships[i][j] = 1;
                ones_count++;
            } 
            else 
                ships[i][j] = 0;
        }
    }

    cout << "                Game Started!\n\n";

    int hits = 0;
    int number_of_turns = 0;
    int row;
    int column;
    while (hits < 4)
    {
		cout << "            Selecting coordinates\n";
        cout << "Choose a row and column number between 0 and 3: \n";
        cin >> row;
        cin >> column;
        if (ships[row][column] == 1)
        {
            ships[row][column] = 0;
            hits++;
			system(CLEAR_SCREEN);
            cout << "                 Hit! " << (4-hits) << " left.\n\n";
        }
        else
        {
			system(CLEAR_SCREEN);
            cout << "                    Miss!\n\n";
        }
		number_of_turns++;
    }
    system(CLEAR_SCREEN);
    cout << "                   Victory!\n";
    cout << "             You won in " << number_of_turns << " turns.\n\n";
	cout << "----------------------------------------------\n";
    return 0;
}
