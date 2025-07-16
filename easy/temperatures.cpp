#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int n; // the number of temperatures to analyse
    cin >> n; cin.ignore();

    if (n == 0){ cout << 0 << endl; }

    vector<pair<int, bool>> nums(n);
    for (int i = 0; i < n; i++) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t; cin.ignore();

        if (t >= 0){
            nums[i] = pair<int, bool>(abs(t), false); //bool false means positive int
        } else {
            nums[i] = pair<int, bool>(abs(t), true); //bool positive means negative int
        }
    }

    sort(nums.begin(), nums.end());

    cerr << "nums vector after sort: " << endl;

    for (auto i : nums){
        cerr << i.first << ": " << i.second << "; ";
    }
    cerr << endl;

    pair<int, bool> p1 = nums[0];


    if (p1.second == true){

        cout << '-' << p1.first << endl;
    } else {
        cout << p1.first << endl;
    }
    
}
