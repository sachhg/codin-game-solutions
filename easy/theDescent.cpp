#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{

    // game loop
    while (1) {
        int max = -1;
        int idx;
        for (int i = 0; i < 8; i++) {
            int mountain_h; // represents the height of one mountain.
            cin >> mountain_h; cin.ignore();
            if (mountain_h > max){
                max = mountain_h;
                idx = i;
            }
        }
        
        cout << idx << endl;

    }
}
