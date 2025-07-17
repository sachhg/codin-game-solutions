#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;



int main()
{
    int light_x; // the X position of the light of power
    int light_y; // the Y position of the light of power
    int initial_tx; // Thor's starting X position
    int initial_ty; // Thor's starting Y position
    cin >> light_x >> light_y >> initial_tx >> initial_ty; cin.ignore();

    int x = initial_tx;
    int y = initial_ty;

    // game loop
    while (1) {
        int remaining_turns; 
        cin >> remaining_turns; cin.ignore();

        string output = "";

        if (y > light_y){
            output += 'N';
            y--;
        } else if (y < light_y){
            output += 'S';
            y++;
        }

        if (x < light_x){
            output += 'E';
            x++;
        } else if (x > light_x){
            output += 'W';
            x--;
        }

        cerr << "Current position: (" << x << ", " << y << ")\n Moving: " << output << endl;

        // A single line providing the move to be made: N NE E SE S SW W or NW
        cout << output << endl;
    }
}
