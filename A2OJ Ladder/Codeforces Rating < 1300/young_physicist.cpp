#include <iostream>
using namespace std;

void solve() {
    int number_of_forces = 0;
    cin >> number_of_forces;
    int net_force_along_x = 0;
    int net_force_along_y = 0;
    int net_force_along_z = 0;
    while(number_of_forces--) {
        int force_along_x = 0;
        int force_along_y = 0;
        int force_along_z = 0;
        cin >> force_along_x >> force_along_y >> force_along_z;
        net_force_along_x += force_along_x;
        net_force_along_y += force_along_y;
        net_force_along_z += force_along_z;
    }
    if(net_force_along_x == 0 && net_force_along_y == 0 && net_force_along_z == 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

int main() {
    solve();
}