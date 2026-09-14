#include <iostream>
using namespace std;

int main() {
    int townHallHP = 1000;
    int armyCampHP = 400;
    int goldMineHP = 600;
    int dragonDamage = 2100; // Adjust damage to test different outcomes

    // Total base calculations
    int totalBaseHP = townHallHP + armyCampHP + goldMineHP; // 2000 HP
    int halfBaseHP = totalBaseHP / 2;                      // 1000 HP

    cout << "--- DRAGON ATTACKS THE BASE ---\n\n";

    // 1. Star 1: Check if Town Hall is destroyed
    if (dragonDamage >= townHallHP) {
        cout << "[★☆☆] 1 Star! Town Hall has been destroyed!\n";
    } else {
        int townHallLeft = townHallHP - dragonDamage;
        cout << "Town Hall survived! Remaining HP: " << townHallLeft << "\n";
    }

    // 2. Star 2: Check if 50% of the entire base is destroyed
    if (dragonDamage >= halfBaseHP) {
        cout << "[★★☆] 2 Stars! Over 50% of the village is demolished!\n";
    }

    // 3. Star 3: Check if the entire base is wiped out (100%)
    if (dragonDamage >= totalBaseHP) {
        cout << "[★★★] 3 Stars! 100% Destruction! Complete Victory!\n";
    }

    return 0;
}
