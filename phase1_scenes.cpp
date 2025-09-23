#include <iostream>
#include <algorithm>  // for max() and fmax()
using namespace std;

int main() {
    int main_ATK, main_DEF, main_HP, option;
    int boss_ATK, boss_DEF;
    bool hasRustbite = false; 
    bool hasRapier = false; 
    bool hasNet = false; 
    bool hasSunglasses = false; 
    bool hasAmulet = true; 
    int boss_DMG;
    char item_option;
    int bdamage, idamage;

    main_ATK = 40;
    main_HP = 40; 
    main_DEF = 5; 

    boss_ATK = 50;
    boss_DEF = 20;
    int bjorneHP = 400;

    cout << "Press ENTER to Continue..." << endl;
    cin.ignore();
    cin.get();

    cout << "The ground splits. Bjorne, a towering Hollow, rises from the shadows." << endl << endl;
    cout << "Bjorne: Foolish soul... your resistance amuses me." << endl << endl;
    cout << "Your Turn: " << endl;
    cout << "Choose Options: (1/2/3)  " << endl;
    cout << "1.) ATK" << endl;
    cout << "2.) ITEMS" << endl;
    cin >> option;

    switch (option) {
        case 1:
            bdamage = main_ATK - boss_DEF; 
            idamage = fmax(1, bdamage);
            bjorneHP -= idamage; 
            cout << "You did " << idamage << " damage." << endl << endl;
            break;
        case 2: 
            cout << "Choose an Item (Note 1 Time Use Only)" << endl;
            if (hasAmulet == true) {
                cout << "Amulet (activated) " << endl;
            }
            else if (hasNet == true){
                cout << "Net = N" << endl;
            }
            else if (hasRapier == true){
                cout << "Divine Rapier = D" << endl;
            }
            else if (hasRustbite == true){
                cout << "Rustbite = R" << endl;
            }
            else if (hasSunglasses == true){
                cout << "Sunglasses = S" << endl;
            }
            cin >> item_option;
            break;
    }

    // Boss damage
    boss_DMG = max(1, boss_ATK - main_DEF);
    main_HP -= boss_DMG; 
    cout << "The hollow runs its claws in your chest. " << endl;
    cout << "Jun took damage. " << endl;
    cout << "Jun: This is nothing but a scratch." << endl;

    // Check Amulet
    if (hasAmulet && main_HP <= 0) {
        main_HP = 1;  // Amulet saves you with 1 HP
        hasAmulet = false;  // Amulet can only be used once
    }

    // If no Amulet and HP <= 0
    if (main_HP <= 0) {
        cout << "Jun: This is the end...." << endl;
        cout << "You lost. Try AGAIN" << endl;
        return 0;
    }

    // Display character stats
    cout << "Jun Arashi" << endl;
    cout << "ATK: " << main_ATK << ", ";
    cout << "DEF: " << main_DEF << ", ";
    cout << "HP: " << main_HP << "." << endl;

    return 0;
}
