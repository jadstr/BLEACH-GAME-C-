#include <iostream>
using namespace std; 

int main() {

int main_ATK, main_DEF, main_HP, option;
int boss_ATK, boss_DEF, boss_HP;
bool hasRustbite = false; 
bool hasRapier = false; 
bool hasNet = false;
bool hasSunglasses = false;
bool hasAmulet = false; 
int boss_DMG;
char item_option;
int bdamage, idamage;
int counter = 0;

main_ATK = 12;
main_HP = 40; 
main_DEF = 5; 

boss_ATK = 50;
boss_DEF = 20;
boss_HP = 400;

cout<<"B L E A C H - T E X T - G A M E"<<endl<<endl;
cout<<"BLEACH: District 67 - A Text-Based Adventure"<<endl;
cout<<"Disclaimer: This is a fan-made educational project. Bleach is created by Tite Kubo."<<endl;
cout<<"All rights belong to their respective owners. For classroom use only."<<endl<<endl;
cout<<"You are Jun Arashi, a soul living in District 67 of Rukongai."<<endl;
cout<<"One night, a terrible presence descends - a rogue Hollow stalks the district."<<endl;
cout<<"You must prepare yourself for the coming battle."<<endl<<endl;

cout<<"Press ENTER To Continue..."<<endl;
cin.ignore(); 
cin.get();
cout<<"========================================================================================="<<endl<<endl; 

cout<<"SCENE 1 - PROLOGUE"<<endl<<endl;
cout<<"District 67, outskirts of Rukongai."<<endl<<endl;
cout<<"Jun stands in a dark alley as screams echo through the streets."<<endl;
cout<<"The night sky trembles as a Hollow's roar shakes the rooftops."<<endl;
cout<<"Jun clenches his fists - there is no running now."<<endl<<endl<<endl; 

cout<<"Press ENTER To Continue..."<<endl;
cin.ignore(); 
cin.get();
cout<<"========================================================================================="<<endl<<endl; 

cout<<"SCENE 2 - The Saint (Hanae)"<<endl;
cout<<"Hanae, the district's wandering saint, approaches you."<<endl<<endl; 
cout<<"Hanae: You look pale, Jun. The night is cruel... let me bless you with light."<<endl; 
cout<<"Choose:"<<endl;
cout<<"1. Safe - Just a little strength will do. (+4 ATK)"<<endl;
cout<<"2. Mid - I'll take whatever you can give. (+1 ATK, +1 DEF, +7 HP)"<<endl;
cout<<"3. Risky - Give me everything you have! (+11 ATK, +3 DEF, -5 HP)"<<endl;
cout<<"Pick (1/2/3): ";
cin>>option;

switch (option) {
    case 1: 
        main_ATK += 4;
        break;
    case 2: 
        main_ATK += 1;
        main_DEF += 1;
        main_HP += 7;
        break;
    case 3: 
        main_ATK += 11;
        main_DEF += 3;
        main_HP -= 5;
        break;
    default:
        cout << "Invalid option! The saint fled as she looks at you with confusion... " << endl << endl;
        break;
    }
cout<<"Jun Arashi - Stat Changes: "<< endl;
cout<<"ATK: "<<main_ATK<<", ";
cout<<"DEF: "<<main_DEF<<", ";
cout<<"HP: "<<main_HP<<endl<<endl;  
cout << "Press ENTER to continue..." << endl;
    cin.ignore();
    cin.get();
cout<<"========================================================================================="<<endl<<endl; 

cout << "SCENE 3 - The Tinkerer (Riku)" << endl;
cout << "You find Riku, a tinkerer surrounded by scraps of strange metal." << endl << endl;
cout << "Riku: You'll need more than fists against a Hollow. I can forge something quick." << endl;
cout << "Choose:" << endl;
cout << "1. Safe - Just give me something simple. (+4 ATK)" << endl;
cout << "2. Mid - Make me sturdier. (+1 DEF, -2 HP)" << endl;
cout << "3. Risky - Push the limits! (+5 ATK, +3 DEF, -5 HP, gain Rustbite: -6 Boss DEF)" << endl;
cout << "Pick (1/2/3): ";
cin >> option;

switch (option) {
    case 1:
        main_ATK += 4;
        break;
    case 2:
        main_DEF += 1;
        main_HP -= 2;
        break;
    case 3:
        main_ATK += 5;
        main_DEF += 3;
        main_HP -= 5;
        hasRustbite = true;
        break;
    default:
        cout << "Invalid option! The tinkerer ignored you..." << endl;
        break;
    }
cout << "Jun Arashi - Stat Changes:" << endl;
cout << "ATK: " << main_ATK << ", ";
cout << "DEF: " << main_DEF << ", ";
cout << "HP: " << main_HP << endl<<endl;
if (option == 3){ 
    cout<<"Item Obtained: Rustbite Charge "<<endl; 
    cout <<" - Permanently reduce the boss's defense by 6."<<endl;
    }

cout << "Press ENTER to continue..." << endl;
cin.ignore();
cin.get();
cout<<"========================================================================================="<<endl<<endl; 

cout << "SCENE 4 - Sister Midori (Shrine)" << endl;
cout << "You pass a ruined shrine. Sister Midori kneels in prayer." << endl << endl;
cout << "Midori: Child... I can offer a charm. But the gods ask for something in return." << endl;
cout << "Choose:" << endl;
cout << "1. Safe - A small blessing, please. (+4 ATK)" << endl;
cout << "2. Mid - I'll take the charm. (Gain Net, -2 HP)" << endl;
cout << "3. Risky - I want true power! (+9 ATK, -4 HP)" << endl;
cout << "Pick (1/2/3): ";
cin >> option;

switch (option) {
    case 1:
        main_ATK += 4;
        break;
    case 2:
        hasNet = true;
        main_HP -= 2;
        break;
    case 3:
        main_ATK += 9;
        main_HP -= 4;
        break;
    default:
        cout << "Invalid option! Sister Midori is completely dissapointed..." << endl;
        break;
    }

cout << "Jun Arashi - Stat Changes: " << endl;
cout << "ATK: " << main_ATK << ", ";
cout << "DEF: " << main_DEF << ", ";
cout << "HP: " << main_HP << endl<<endl;

if (option == 2) {
    cout << "Item Obtained: 90-Caliber Net" << endl;
    cout << "- Skips the next boss attack" << endl;
    }

cout << "Press ENTER to continue..." << endl;
cin.ignore();
cin.get();
cout<<"========================================================================================="<<endl<<endl; 

cout << "SCENE 5 - Yumi the Smuggler" << endl;
cout << "A shadow in the corner alley beckons you. Yumi, the smuggler, grins." << endl << endl;
cout << "Yumi: Dangerous times, dangerous goods. I can sell you power, if you're willing to pay the price." << endl;
cout << "Choose:" << endl;
cout << "1. Safe - Something reliable. (+11 ATK)" << endl;
cout << "2. Mid - The Armlet of Mordiggan... (+15 ATK, -1 DEF, -2 HP)" << endl;
cout << "3. Risky - What's your strongest weapon? (Gain Divine Rapier, -10 HP, -3 DEF, -3 ATK)" << endl;
cout << "Pick (1/2/3): ";
cin >> option;
    
switch (option) {
    case 1:
        main_ATK += 11;
        break;
    case 2:
        main_ATK += 15;
        main_DEF -= 1;
        main_HP -= 2;
        break;
    case 3:
        hasRapier = true;
        main_ATK -= 3;
        main_DEF -= 3;
        main_HP -= 10;
        break;
    default:
        cout << "Invalid option! The smuggler hid from the shadows..." << endl;
        break;
    }
cout << "Jun Arashi - Stat Changes: " << endl;
cout << "ATK: " << main_ATK << ", ";
cout << "DEF: " << main_DEF << ", ";
cout << "HP: " << main_HP << endl<<endl;
if (option == 3) {
    cout <<"Item Obtained: The Divine Rapier"<< endl;
    cout <<"- Deals 275 true damage (Ignores DEF)"<< endl;
}  

cout << "Press ENTER to continue..." << endl;
cin.ignore();
cin.get();
cout<<"========================================================================================="<<endl<<endl; 

cout << "SCENE 6 - Kaji the Peddler" << endl;
cout << "An old peddler, Kaji, rattles his cart of bottles and charms." << endl << endl;
cout << "Kaji: Spare change for power? Every blessing has a price." << endl;
cout << "Choose:" << endl;
cout << "1. Safe - A minor boost. (+4 ATK)" << endl;
cout << "2. Mid - Something stronger. (+8 ATK, -2 HP)" << endl;
cout << "3. Risky - Everything you've got! (+15 ATK, -2 DEF, -5 HP)" << endl;
cout << "Pick (1/2/3): ";
cin >> option;


switch (option) {
    case 1:
        main_ATK += 4;
        break;
    case 2:
        main_ATK += 8;
        main_HP -= 2;
        break;
    case 3:
        main_ATK += 15;
        main_DEF -= 2;
        main_HP -= 5;
        break;
    default:
        cout << "Invalid option! The peddler wheels his cart away..." << endl;
        break;
    }
cout << "Jun Arashi - Stat Changes: " << endl;
cout << "ATK: " << main_ATK << ", ";
cout << "DEF: " << main_DEF << ", ";
cout << "HP: " << main_HP << endl<<endl;
    
cout << "Press ENTER to continue..." << endl;
cin.ignore();
cin.get();
cout<<"========================================================================================="<<endl<<endl; 

cout << "SCENE 7 - Aiko the child" << endl;
cout << "Aiko, a small child, tugs at your sleeve with pleading eyes." << endl << endl;
cout << "Aiko: Please... help us. You're the only one who can stand against the Hollow." << endl;
cout << "Choose:" << endl;
cout << "1. Safe - I'll do my best. (+2 ATK)" << endl;
cout << "2. Mid - I'll push myself harder. (+1 ATK, +1 DEF, -1 HP)" << endl;
cout << "3. Risky - I'll protect everyone at any cost! (+8 ATK, +3 DEF, -5 HP)" << endl;
cout << "Pick (1/2/3): ";
cin >> option;

switch (option) {
    case 1:
        main_ATK += 2;
        break;
    case 2:
        main_ATK += 1;
        main_DEF += 1;
        main_HP -= 1;
        break;
    case 3:
        main_ATK += 8;
        main_DEF += 3;
        main_HP -= 5;
        break;
    default:
        cout << "Invalid option! The child is disheartened..." << endl;
        break;
    }
cout << "Jun Arashi - Stat Changes: " << endl;
cout << "ATK: " << main_ATK << ", ";
cout << "DEF: " << main_DEF << ", ";
cout << "HP: " << main_HP << endl<<endl;

cout << "Press ENTER to continue..." << endl;
cin.ignore();
cin.get();
cout<<"========================================================================================="<<endl<<endl; 

cout << "SCENE 8 - Master Renga" << endl;
cout << "Your old mentor, Renga, leans on his cane and lowers his sunglasses." << endl << endl;
cout << "Renga: Jun... take these. You'll need sharp eyes more than a sharp blade." << endl;
cout << "Choose:" << endl;
cout << "1. Safe - A steady path will do. (+5 ATK)" << endl;
cout << "2. Mid - I'll endure the strain. (+7 ATK, -2 HP)" << endl;
cout << "3. Risky - I'll fight with your spirit! (Gain Sunglasses, +2 DEF, -5 HP)" << endl;
cout << "Pick (1/2/3): ";
cin >> option;

switch (option) {
    case 1:
         main_ATK += 5;
        break;
    case 2:
        main_ATK += 7;
        main_HP -= 2;
        break;
    case 3:
        main_DEF += 2;
        main_HP -= 5;
        hasSunglasses = true;
        break;
    default:
        cout << "Invalid option! Master Renga shrugged you off..." << endl;
        break;
    }
cout << "Jun Arashi - Stat Changes: " << endl;
cout << "ATK: " << main_ATK << ", ";
cout << "DEF: " << main_DEF << ", ";
cout << "HP: " << main_HP << endl<<endl;
if (option == 3){
    cout << "Item Obtained: Sunglasses"<<endl;
    cout << "- Skips the next boss attack."<<endl; 
}

cout << "Press ENTER to continue..." << endl;
cin.ignore();
cin.get();
cout<<"========================================================================================="<<endl<<endl; 

cout << "SCENE 9 - Mika the Charm Seller" << endl;
cout << "Mika holds a tray of strange charms." << endl << endl;
cout << "Mika: These trinkets are cursed and blessed alike. What will you take?" << endl;
cout << "Choose:" << endl;
cout << "1. Safe - A small charm. (+2 ATK)" << endl;
cout << "2. Mid - That one... it glows faintly. (Gain Schala's Amulet, -3 HP)" << endl;
cout << "3. Risky - I want the strongest one! (+11 ATK, +2 DEF, -7 HP)" << endl;
cout << "Pick (1/2/3): ";
cin >> option;

switch (option) {
    case 1:
        main_ATK += 2;
        break;
    case 2:
        main_HP -= 3;
        hasAmulet = true;
        break;
    case 3:
        main_ATK += 11;
        main_DEF += 2;
        main_HP -= 7;
        break;
    default:
        cout << "Invalid option! Mika hides the tray away from you." << endl <<endl;
        break;
    }
cout << "Jun Arashi - Stat Changes:" << endl;
cout << "ATK: " << main_ATK << ", ";
cout << "DEF: " << main_DEF << ", ";
cout << "HP: " << main_HP << endl<<endl;
if (option == 2){
    cout << "Item Obtained: Schala's Amulet"<<endl;
    cout <<"- If Jun's HP turns to 0 or less, the amulet shatters and restores him to 1 HP"<<endl;
}
if (main_HP <= 0 ){
    cout <<"You feel an immense surge of reiatsu within you."<<endl;
    cout <<"Your body cannot take it..."<<endl;
    cout <<"The gates of hell opened. "<<endl;
    cout <<"The greed has consumed your body."<<endl<<endl;
    cout <<"-S E C R E T  E N D I N G- "<<endl;
    cout <<"DEFEAT: Your HP hit 0"<<endl;
    return 0;
} 

cout << "Press ENTER to continue..." << endl;
cin.ignore();
cin.get();
cout<<"========================================================================================="<<endl<<endl; 

cout << "SCENE 10 - Supply Cache" << endl;
cout << "You find a hidden cache of supplies - medicine, weapons, armor." << endl << endl;
cout << "Choose:" << endl;
cout << "1. Safe - Patch me up completely. (Set HP to 50)" << endl;
cout << "2. Mid - I'll take the sharper blades. (+12 ATK, -3 HP)" << endl;
cout << "3. Risky - Load me with everything! (+23 ATK, +2 HP)" << endl;
cout << "Pick (1/2/3): ";
cin >> option;

switch (option) {
    case 1:
        main_HP = 50;
        break;
    case 2:
        main_ATK += 12;
        main_HP -= 3;
        break;
    case 3:
        main_ATK += 23;
        main_HP += 2;
        break;
    default:
        cout << "Invalid option! The supply cache disintegrated into the air..." << endl<<endl;
        break;
    }
if (main_HP <= 0 ){
    cout <<"You feel an immense surge of reiatsu within you."<<endl;
    cout <<"Your body cannot take it..."<<endl;
    cout <<"The gates of hell opened. "<<endl;
    cout <<"The greed has consumed your body."<<endl<<endl;
    cout <<"-S E C R E T  E N D I N G- "<<endl;
    cout <<"DEFEAT: Your HP hit 0"<<endl;
    return 0; }
    
cout << "Jun Arashi - Stat Changes:" << endl;
cout << "ATK: " << main_ATK << ", ";
cout << "DEF: " << main_DEF << ", ";
cout << "HP: " << main_HP << endl<<endl;

cout << "Press ENTER to continue..." << endl;
cin.ignore();
cin.get();
cout<<"========================================================================================="<<endl<<endl; 

cout <<"......."<<endl<<endl;
cout << "Press ENTER to continue..." << endl;
cin.ignore();
cin.get();
cout<<"========================================================================================="<<endl<<endl; 

cout <<"You felt an immense presence of reiatsu behind you....."<<endl<<endl;
cout << "Press ENTER to continue..." << endl;
cin.ignore();
cin.get();
cout<<"========================================================================================="<<endl<<endl; 

cout << "The ground splits. Bjorne, a towering Hollow, rises from the shadows." << endl << endl;
cout << "Bjorne: Foolish soul... your resistance amuses me." << endl << endl;
cin.ignore();
cin.get();
cout<<"========================================================================================="<<endl<<endl; 

boss_DMG = max(1, boss_ATK - main_DEF); //kaya nageerror ang hanep 

cout <<"You encountered a wild hollow."<<endl<<endl;
cout <<" ---------------- B J O R N E ---------------- "<<endl;
cout <<"HP: "<<boss_HP<<" ATK: "<<boss_ATK<<" DEF: "<<boss_DEF<<endl;
cout <<" --------------------------------------------- "<<endl<<endl;
cout <<" ------------ J U N  A R A S H I ------------- "<<endl;
cout <<"HP: "<<main_HP<<" ATK: "<<main_ATK<<" DEF: "<<main_DEF<<endl;
cout <<" --------------------------------------------- "<<endl<<endl;
counter += 1; 
cout <<"Turn: "<<counter<<endl;
cout <<"1.) Attack"<<endl;
cout <<"2.) Use Item "<<endl; 
cout <<"What would you like to do? (1/2): ";
cin >>option;

switch (option) {
        case 1:
            bdamage = main_ATK - boss_DEF; 
            idamage = max(1, bdamage);
            boss_HP -= idamage; 
            cout << "You did " << idamage << " damage." << endl << endl;
            main_HP -= boss_DMG; 
            cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
            cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
            cout<<"========================================================================================="<<endl<<endl;
            break;
        case 2: 
            cout << "Choose an Item (Note 1 Time Use Only)" <<endl<<endl;
            if (hasAmulet == true) {
                cout << "Schala's Amulet - Active " << endl;
            }
            if (hasNet == true){
                cout << "90- Caliber Net (Skips Boss Attack) = N " << endl;
            }
            if (hasRapier == true){
                cout << "Divine Rapier (Deals 275 True Damage) = D" << endl;
            }
            if (hasRustbite == true){
                cout << "Rustbite Charge (-6 Boss DEF) = R" << endl;
            }
            if (hasSunglasses == true){
                cout << "Sunglasses (Skips Boss Attack) = S " << endl;
            }
            cout <<"Which item would you like to use? (Enter the corresponding letter): ";
            cin >> item_option;
            break;
        default:
            cout<<"Invalid Option... Proceed to attack..."<<endl<<endl;
            bdamage = main_ATK - boss_DEF; 
            idamage = max(1, bdamage);
            boss_HP -= idamage; 
            cout << "You did " << idamage << " damage." << endl << endl;
            main_HP -= boss_DMG; 
            cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
            cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl; 
            cout<<"========================================================================================="<<endl<<endl;
            break;
    }


switch (item_option) {
    case 'N':
    case 'n':
        if (hasNet == true){
        hasNet = false;
        cout<<"You used 90 - Caliber Net.. Proceed to Attack "<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        cout<<"You dodged the hollow's attack."<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
    case 'D':
    case 'd':
        if (hasRapier == true){
        boss_HP -= 275;
        hasRapier = false;
        cout<<"You unleashed the Divine Rapier..  "<<endl<<endl;
        cout<<"You pierced the hollow's head.. dealing 275 damage."<<endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        } else {
            break;
        }
    case 'R':
    case 'r':
        if (hasRustbite == true){
        boss_DEF -= 6;
        hasRustbite = false;
        cout<<"You used Rustbite (-6 Boss DEF)"<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage" <<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
        else {
            break;
        }
    case 'S':
    case 's':
        if (hasSunglasses == true){
        hasSunglasses= false;
        cout<<"You wore the sunglasses.. Proceed to Attack "<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        cout <<"You dodged the hollow's attack."<<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
        else {
            break;
        }
    default: 
        cout<<"Invalid Item... Proceed To Attack"<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
    }
        
if (boss_HP > 300) {
    cout <<"Bjorne: Tiny spark. I will crush you slowly.."<<endl<<endl;
}
if (boss_HP >= 200 && boss_HP < 301) {
    cout <<"Bjorne: You sting... nothing more."<<endl<<endl;
}
if (boss_HP >= 100 && boss_HP < 201) {
    cout <<"Bjorne: Impossible.. you persist?!!"<<endl<<endl;
}
if (boss_HP < 100) {
    cout <<"Bjorne: I will DEVOUR YOU! "<<endl<<endl;
}

if (boss_HP <= 0) {
    cout <<"Bjorne crumbled into dust..."<<endl;
    cout <<"Jun: I did it.... "<<endl;
    cout <<"???: Well done, Kid"<<endl;
    cout <<"Jun: Byakuya-Sama...."<<endl;
    cout <<"Byakuya(Captain of 6th Division): Come with me, I see a potential within you."<<endl<<endl;
    cout <<"VICTORY: Jun is recruited into the academy."<<endl;
    cout<<"========================================================================================="<<endl<<endl;
    return 0;
}

if (hasAmulet == true && main_HP <= 0) {
        main_HP = 1; 
        hasAmulet = false; 
        cout <<"The amulet crumbles as it lends you its last burst of energy."<<endl;
    }

if (main_HP <= 0) {
        cout << "Jun: This is the end...." << endl;
        cout << "Jun bled out as soon as the reinforcements arrived.."<<endl<<endl;
        cout << "DEFEAT: You lost. Try AGAIN" << endl;
        cout<<"========================================================================================="<<endl<<endl;
        return 0;
    }

cout << "Press ENTER to continue..." << endl;
cin.ignore();
cin.get();
cout<<"========================================================================================="<<endl<<endl;

//2
cout <<"You encountered a wild hollow."<<endl<<endl;
cout <<" ---------------- B J O R N E ---------------- "<<endl;
cout <<"HP: "<<boss_HP<<" ATK: "<<boss_ATK<<" DEF: "<<boss_DEF<<endl;
cout <<" --------------------------------------------- "<<endl<<endl;
cout <<" ------------ J U N  A R A S H I ------------- "<<endl;
cout <<"HP: "<<main_HP<<" ATK: "<<main_ATK<<" DEF: "<<main_DEF<<endl;
cout <<" --------------------------------------------- "<<endl<<endl;
counter += 1; 
cout <<"Turn: "<<counter<<endl;
cout <<"1.) Attack"<<endl;
cout <<"2.) Use Item "<<endl; 
cout <<"What would you like to do? (1/2): ";
cin >>option;

switch (option) {
        case 1:
            bdamage = main_ATK - boss_DEF; 
            idamage = max(1, bdamage);
            boss_HP -= idamage; 
            cout << "You did " << idamage << " damage." << endl << endl;
            main_HP -= boss_DMG; 
            cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
            cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
            cout<<"========================================================================================="<<endl<<endl;
            break;
        case 2: 
            cout << "Choose an Item (Note 1 Time Use Only)" <<endl<<endl;
            if (hasAmulet == true) {
                cout << "Schala's Amulet - Active " << endl;
            }
            if (hasNet == true){
                cout << "90- Caliber Net (Skips Boss Attack) = N " << endl;
            }
            if (hasRapier == true){
                cout << "Divine Rapier (Deals 275 True Damage) = D" << endl;
            }
            if (hasRustbite == true){
                cout << "Rustbite Charge (-6 Boss DEF) = R" << endl;
            }
            if (hasSunglasses == true){
                cout << "Sunglasses (Skips Boss Attack) = S " << endl;
            }
            cout <<"Which item would you like to use? (Enter the corresponding letter): ";
            cin >> item_option;
            break;
        default:
            cout<<"Invalid Option... Proceed to attack..."<<endl<<endl;
            bdamage = main_ATK - boss_DEF; 
            idamage = max(1, bdamage);
            boss_HP -= idamage; 
            cout << "You did " << idamage << " damage." << endl << endl;
            main_HP -= boss_DMG; 
            cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
            cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl; 
            cout<<"========================================================================================="<<endl<<endl;
            break;
    }


switch (item_option) {
    case 'N':
    case 'n':
        if (hasNet == true){
        hasNet = false;
        cout<<"You used 90 - Caliber Net.. Proceed to Attack "<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        cout<<"You dodged the hollow's attack."<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
    case 'D':
    case 'd':
        if (hasRapier == true){
        boss_HP -= 275;
        hasRapier = false;
        cout<<"You unleashed the Divine Rapier..  "<<endl<<endl;
        cout<<"You pierced the hollow's head.. dealing 275 damage."<<endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        } else {
            break;
        }
    case 'R':
    case 'r':
        if (hasRustbite == true){
        boss_DEF -= 6;
        hasRustbite = false;
        cout<<"You used Rustbite (-6 Boss DEF)"<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage" <<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
        else {
            break;
        }
    case 'S':
    case 's':
        if (hasSunglasses == true){
        hasSunglasses= false;
        cout<<"You wore the sunglasses.. Proceed to Attack "<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        cout <<"You dodged the hollow's attack."<<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
        else {
            break;
        }
    default: 
        cout<<"Invalid Item... Proceed To Attack"<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
    }
        
if (boss_HP > 300) {
    cout <<"Bjorne: Tiny spark. I will crush you slowly.."<<endl<<endl;
}
if (boss_HP >= 200 && boss_HP < 301) {
    cout <<"Bjorne: You sting... nothing more."<<endl<<endl;
}
if (boss_HP >= 100 && boss_HP < 201) {
    cout <<"Bjorne: Impossible.. you persist?!!"<<endl<<endl;
}
if (boss_HP < 100) {
    cout <<"Bjorne: I will DEVOUR YOU! "<<endl<<endl;
}

if (boss_HP <= 0) {
    cout <<"Bjorne crumbled into dust..."<<endl;
    cout <<"Jun: I did it.... "<<endl;
    cout <<"???: Well done, Kid"<<endl;
    cout <<"Jun: Byakuya-Sama...."<<endl;
    cout <<"Byakuya(Captain of 6th Division): Come with me, I see a potential within you."<<endl<<endl;
    cout <<"VICTORY: Jun is recruited into the academy."<<endl;
    cout<<"========================================================================================="<<endl<<endl;
    return 0;
}

if (hasAmulet == true && main_HP <= 0) {
        main_HP = 1; 
        hasAmulet = false; 
        cout <<"The amulet crumbles as it lends you its last burst of energy."<<endl;
    }

if (main_HP <= 0) {
        cout << "Jun: This is the end...." << endl;
        cout << "Jun bled out as soon as the reinforcements arrived.."<<endl<<endl;
        cout << "DEFEAT: You lost. Try AGAIN" << endl;
        cout<<"========================================================================================="<<endl<<endl;
        return 0;
    }

cout << "Press ENTER to continue..." << endl;
cin.ignore();
cin.get();
cout<<"========================================================================================="<<endl<<endl;

//3
cout <<"You encountered a wild hollow."<<endl<<endl;
cout <<" ---------------- B J O R N E ---------------- "<<endl;
cout <<"HP: "<<boss_HP<<" ATK: "<<boss_ATK<<" DEF: "<<boss_DEF<<endl;
cout <<" --------------------------------------------- "<<endl<<endl;
cout <<" ------------ J U N  A R A S H I ------------- "<<endl;
cout <<"HP: "<<main_HP<<" ATK: "<<main_ATK<<" DEF: "<<main_DEF<<endl;
cout <<" --------------------------------------------- "<<endl<<endl;
counter += 1; 
cout <<"Turn: "<<counter<<endl;
cout <<"1.) Attack"<<endl;
cout <<"2.) Use Item "<<endl; 
cout <<"What would you like to do? (1/2): ";
cin >>option;

switch (option) {
        case 1:
            bdamage = main_ATK - boss_DEF; 
            idamage = max(1, bdamage);
            boss_HP -= idamage; 
            cout << "You did " << idamage << " damage." << endl << endl;
            main_HP -= boss_DMG; 
            cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
            cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
            cout<<"========================================================================================="<<endl<<endl;
            break;
        case 2: 
            cout << "Choose an Item (Note 1 Time Use Only)" <<endl<<endl;
            if (hasAmulet == true) {
                cout << "Schala's Amulet - Active " << endl;
            }
            if (hasNet == true){
                cout << "90- Caliber Net (Skips Boss Attack) = N " << endl;
            }
            if (hasRapier == true){
                cout << "Divine Rapier (Deals 275 True Damage) = D" << endl;
            }
            if (hasRustbite == true){
                cout << "Rustbite Charge (-6 Boss DEF) = R" << endl;
            }
            if (hasSunglasses == true){
                cout << "Sunglasses (Skips Boss Attack) = S " << endl;
            }
            cout <<"Which item would you like to use? (Enter the corresponding letter): ";
            cin >> item_option;
            break;
        default:
            cout<<"Invalid Option... Proceed to attack..."<<endl<<endl;
            bdamage = main_ATK - boss_DEF; 
            idamage = max(1, bdamage);
            boss_HP -= idamage; 
            cout << "You did " << idamage << " damage." << endl << endl;
            main_HP -= boss_DMG; 
            cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
            cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl; 
            cout<<"========================================================================================="<<endl<<endl;
            break;
    }


switch (item_option) {
    case 'N':
    case 'n':
        if (hasNet == true){
        hasNet = false;
        cout<<"You used 90 - Caliber Net.. Proceed to Attack "<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        cout<<"You dodged the hollow's attack."<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
    case 'D':
    case 'd':
        if (hasRapier == true){
        boss_HP -= 275;
        hasRapier = false;
        cout<<"You unleashed the Divine Rapier..  "<<endl<<endl;
        cout<<"You pierced the hollow's head.. dealing 275 damage."<<endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        } else {
            break;
        }
    case 'R':
    case 'r':
        if (hasRustbite == true){
        boss_DEF -= 6;
        hasRustbite = false;
        cout<<"You used Rustbite (-6 Boss DEF)"<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage" <<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
        else {
            break;
        }
    case 'S':
    case 's':
        if (hasSunglasses == true){
        hasSunglasses= false;
        cout<<"You wore the sunglasses.. Proceed to Attack "<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        cout <<"You dodged the hollow's attack."<<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
        else {
            break;
        }
    default: 
        cout<<"Invalid Item... Proceed To Attack"<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
    }
        
if (boss_HP > 300) {
    cout <<"Bjorne: Tiny spark. I will crush you slowly.."<<endl<<endl;
}
if (boss_HP >= 200 && boss_HP < 301) {
    cout <<"Bjorne: You sting... nothing more."<<endl<<endl;
}
if (boss_HP >= 100 && boss_HP < 201) {
    cout <<"Bjorne: Impossible.. you persist?!!"<<endl<<endl;
}
if (boss_HP < 100) {
    cout <<"Bjorne: I will DEVOUR YOU! "<<endl<<endl;
}

if (boss_HP <= 0) {
    cout <<"Bjorne crumbled into dust..."<<endl;
    cout <<"Jun: I did it.... "<<endl;
    cout <<"???: Well done, Kid"<<endl;
    cout <<"Jun: Byakuya-Sama...."<<endl;
    cout <<"Byakuya(Captain of 6th Division): Come with me, I see a potential within you."<<endl<<endl;
    cout <<"VICTORY: Jun is recruited into the academy."<<endl;
    cout<<"========================================================================================="<<endl<<endl;
    return 0;
}

if (hasAmulet == true && main_HP <= 0) {
        main_HP = 1; 
        hasAmulet = false; 
        cout <<"The amulet crumbles as it lends you its last burst of energy."<<endl;
    }

if (main_HP <= 0) {
        cout << "Jun: This is the end...." << endl;
        cout << "Jun bled out as soon as the reinforcements arrived.."<<endl<<endl;
        cout << "DEFEAT: You lost. Try AGAIN" << endl;
        cout<<"========================================================================================="<<endl<<endl;
        return 0;
    }

cout << "Press ENTER to continue..." << endl;
cin.ignore();
cin.get();
cout<<"========================================================================================="<<endl<<endl;

//4

cout <<"You encountered a wild hollow."<<endl<<endl;
cout <<" ---------------- B J O R N E ---------------- "<<endl;
cout <<"HP: "<<boss_HP<<" ATK: "<<boss_ATK<<" DEF: "<<boss_DEF<<endl;
cout <<" --------------------------------------------- "<<endl<<endl;
cout <<" ------------ J U N  A R A S H I ------------- "<<endl;
cout <<"HP: "<<main_HP<<" ATK: "<<main_ATK<<" DEF: "<<main_DEF<<endl;
cout <<" --------------------------------------------- "<<endl<<endl;
counter += 1; 
cout <<"Turn: "<<counter<<endl;
cout <<"1.) Attack"<<endl;
cout <<"2.) Use Item "<<endl; 
cout <<"What would you like to do? (1/2): ";
cin >>option;

switch (option) {
        case 1:
            bdamage = main_ATK - boss_DEF; 
            idamage = max(1, bdamage);
            boss_HP -= idamage; 
            cout << "You did " << idamage << " damage." << endl << endl;
            main_HP -= boss_DMG; 
            cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
            cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
            cout<<"========================================================================================="<<endl<<endl;
            break;
        case 2: 
            cout << "Choose an Item (Note 1 Time Use Only)" <<endl<<endl;
            if (hasAmulet == true) {
                cout << "Schala's Amulet - Active " << endl;
            }
            if (hasNet == true){
                cout << "90- Caliber Net (Skips Boss Attack) = N " << endl;
            }
            if (hasRapier == true){
                cout << "Divine Rapier (Deals 275 True Damage) = D" << endl;
            }
            if (hasRustbite == true){
                cout << "Rustbite Charge (-6 Boss DEF) = R" << endl;
            }
            if (hasSunglasses == true){
                cout << "Sunglasses (Skips Boss Attack) = S " << endl;
            }
            cout <<"Which item would you like to use? (Enter the corresponding letter): ";
            cin >> item_option;
            break;
        default:
            cout<<"Invalid Option... Proceed to attack..."<<endl<<endl;
            bdamage = main_ATK - boss_DEF; 
            idamage = max(1, bdamage);
            boss_HP -= idamage; 
            cout << "You did " << idamage << " damage." << endl << endl;
            main_HP -= boss_DMG; 
            cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
            cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl; 
            cout<<"========================================================================================="<<endl<<endl;
            break;
    }


switch (item_option) {
    case 'N':
    case 'n':
        if (hasNet == true){
        hasNet = false;
        cout<<"You used 90 - Caliber Net.. Proceed to Attack "<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        cout<<"You dodged the hollow's attack."<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
    case 'D':
    case 'd':
        if (hasRapier == true){
        boss_HP -= 275;
        hasRapier = false;
        cout<<"You unleashed the Divine Rapier..  "<<endl<<endl;
        cout<<"You pierced the hollow's head.. dealing 275 damage."<<endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        } else {
            break;
        }
    case 'R':
    case 'r':
        if (hasRustbite == true){
        boss_DEF -= 6;
        hasRustbite = false;
        cout<<"You used Rustbite (-6 Boss DEF)"<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage" <<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
        else {
            break;
        }
    case 'S':
    case 's':
        if (hasSunglasses == true){
        hasSunglasses= false;
        cout<<"You wore the sunglasses.. Proceed to Attack "<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        cout <<"You dodged the hollow's attack."<<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
        else {
            break;
        }
    default: 
        cout<<"Invalid Item... Proceed To Attack"<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
    }
        
if (boss_HP > 300) {
    cout <<"Bjorne: Tiny spark. I will crush you slowly.."<<endl<<endl;
}
if (boss_HP >= 200 && boss_HP < 301) {
    cout <<"Bjorne: You sting... nothing more."<<endl<<endl;
}
if (boss_HP >= 100 && boss_HP < 201) {
    cout <<"Bjorne: Impossible.. you persist?!!"<<endl<<endl;
}
if (boss_HP < 100) {
    cout <<"Bjorne: I will DEVOUR YOU! "<<endl<<endl;
}

if (boss_HP <= 0) {
    cout <<"Bjorne crumbled into dust..."<<endl;
    cout <<"Jun: I did it.... "<<endl;
    cout <<"???: Well done, Kid"<<endl;
    cout <<"Jun: Byakuya-Sama...."<<endl;
    cout <<"Byakuya(Captain of 6th Division): Come with me, I see a potential within you."<<endl<<endl;
    cout <<"VICTORY: Jun is recruited into the academy."<<endl;
    cout<<"========================================================================================="<<endl<<endl;
    return 0;
}

if (hasAmulet == true && main_HP <= 0) {
        main_HP = 1; 
        hasAmulet = false; 
        cout <<"The amulet crumbles as it lends you its last burst of energy."<<endl;
    }

if (main_HP <= 0) {
        cout << "Jun: This is the end...." << endl;
        cout << "Jun bled out as soon as the reinforcements arrived.."<<endl<<endl;
        cout << "DEFEAT: You lost. Try AGAIN" << endl;
        cout<<"========================================================================================="<<endl<<endl;
        return 0;
    }

cout << "Press ENTER to continue..." << endl;
cin.ignore();
cin.get();
cout<<"========================================================================================="<<endl<<endl;

//5

cout <<"You encountered a wild hollow."<<endl<<endl;
cout <<" ---------------- B J O R N E ---------------- "<<endl;
cout <<"HP: "<<boss_HP<<" ATK: "<<boss_ATK<<" DEF: "<<boss_DEF<<endl;
cout <<" --------------------------------------------- "<<endl<<endl;
cout <<" ------------ J U N  A R A S H I ------------- "<<endl;
cout <<"HP: "<<main_HP<<" ATK: "<<main_ATK<<" DEF: "<<main_DEF<<endl;
cout <<" --------------------------------------------- "<<endl<<endl;
counter += 1; 
cout <<"Turn: "<<counter<<endl;
cout <<"1.) Attack"<<endl;
cout <<"2.) Use Item "<<endl; 
cout <<"What would you like to do? (1/2): ";
cin >>option;

switch (option) {
        case 1:
            bdamage = main_ATK - boss_DEF; 
            idamage = max(1, bdamage);
            boss_HP -= idamage; 
            cout << "You did " << idamage << " damage." << endl << endl;
            main_HP -= boss_DMG; 
            cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
            cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
            cout<<"========================================================================================="<<endl<<endl;
            break;
        case 2: 
            cout << "Choose an Item (Note 1 Time Use Only)" <<endl<<endl;
            if (hasAmulet == true) {
                cout << "Schala's Amulet - Active " << endl;
            }
            if (hasNet == true){
                cout << "90- Caliber Net (Skips Boss Attack) = N " << endl;
            }
            if (hasRapier == true){
                cout << "Divine Rapier (Deals 275 True Damage) = D" << endl;
            }
            if (hasRustbite == true){
                cout << "Rustbite Charge (-6 Boss DEF) = R" << endl;
            }
            if (hasSunglasses == true){
                cout << "Sunglasses (Skips Boss Attack) = S " << endl;
            }
            cout <<"Which item would you like to use? (Enter the corresponding letter): ";
            cin >> item_option;
            break;
        default:
            cout<<"Invalid Option... Proceed to attack..."<<endl<<endl;
            bdamage = main_ATK - boss_DEF; 
            idamage = max(1, bdamage);
            boss_HP -= idamage; 
            cout << "You did " << idamage << " damage." << endl << endl;
            main_HP -= boss_DMG; 
            cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
            cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl; 
            cout<<"========================================================================================="<<endl<<endl;
            break;
    }


switch (item_option) {
    case 'N':
    case 'n':
        if (hasNet == true){
        hasNet = false;
        cout<<"You used 90 - Caliber Net.. Proceed to Attack "<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        cout<<"You dodged the hollow's attack."<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
    case 'D':
    case 'd':
        if (hasRapier == true){
        boss_HP -= 275;
        hasRapier = false;
        cout<<"You unleashed the Divine Rapier..  "<<endl<<endl;
        cout<<"You pierced the hollow's head.. dealing 275 damage."<<endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        } else {
            break;
        }
    case 'R':
    case 'r':
        if (hasRustbite == true){
        boss_DEF -= 6;
        hasRustbite = false;
        cout<<"You used Rustbite (-6 Boss DEF)"<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage" <<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
        else {
            break;
        }
    case 'S':
    case 's':
        if (hasSunglasses == true){
        hasSunglasses= false;
        cout<<"You wore the sunglasses.. Proceed to Attack "<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        cout <<"You dodged the hollow's attack."<<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
        else {
            break;
        }
    default: 
        cout<<"Invalid Item... Proceed To Attack"<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
    }
        
if (boss_HP > 300) {
    cout <<"Bjorne: Tiny spark. I will crush you slowly.."<<endl<<endl;
}
if (boss_HP >= 200 && boss_HP < 301) {
    cout <<"Bjorne: You sting... nothing more."<<endl<<endl;
}
if (boss_HP >= 100 && boss_HP < 201) {
    cout <<"Bjorne: Impossible.. you persist?!!"<<endl<<endl;
}
if (boss_HP < 100) {
    cout <<"Bjorne: I will DEVOUR YOU! "<<endl<<endl;
}

if (boss_HP <= 0) {
    cout <<"Bjorne crumbled into dust..."<<endl;
    cout <<"Jun: I did it.... "<<endl;
    cout <<"???: Well done, Kid"<<endl;
    cout <<"Jun: Byakuya-Sama...."<<endl;
    cout <<"Byakuya(Captain of 6th Division): Come with me, I see a potential within you."<<endl<<endl;
    cout <<"VICTORY: Jun is recruited into the academy."<<endl;
    cout<<"========================================================================================="<<endl<<endl;
    return 0;
}

if (hasAmulet == true && main_HP <= 0) {
        main_HP = 1; 
        hasAmulet = false; 
        cout <<"The amulet crumbles as it lends you its last burst of energy."<<endl;
    }

if (main_HP <= 0) {
        cout << "Jun: This is the end...." << endl;
        cout << "Jun bled out as soon as the reinforcements arrived.."<<endl<<endl;
        cout << "DEFEAT: You lost. Try AGAIN" << endl;
        cout<<"========================================================================================="<<endl<<endl;
        return 0;
    }

cout << "Press ENTER to continue..." << endl;
cin.ignore();
cin.get();
cout<<"========================================================================================="<<endl<<endl;

//6


cout <<"You encountered a wild hollow."<<endl<<endl;
cout <<" ---------------- B J O R N E ---------------- "<<endl;
cout <<"HP: "<<boss_HP<<" ATK: "<<boss_ATK<<" DEF: "<<boss_DEF<<endl;
cout <<" --------------------------------------------- "<<endl<<endl;
cout <<" ------------ J U N  A R A S H I ------------- "<<endl;
cout <<"HP: "<<main_HP<<" ATK: "<<main_ATK<<" DEF: "<<main_DEF<<endl;
cout <<" --------------------------------------------- "<<endl<<endl;
counter += 1; 
cout <<"Turn: "<<counter<<endl;
cout <<"1.) Attack"<<endl;
cout <<"2.) Use Item "<<endl; 
cout <<"What would you like to do? (1/2): ";
cin >>option;

switch (option) {
        case 1:
            bdamage = main_ATK - boss_DEF; 
            idamage = max(1, bdamage);
            boss_HP -= idamage; 
            cout << "You did " << idamage << " damage." << endl << endl;
            main_HP -= boss_DMG; 
            cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
            cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
            cout<<"========================================================================================="<<endl<<endl;
            break;
        case 2: 
            cout << "Choose an Item (Note 1 Time Use Only)" <<endl<<endl;
            if (hasAmulet == true) {
                cout << "Schala's Amulet - Active " << endl;
            }
            if (hasNet == true){
                cout << "90- Caliber Net (Skips Boss Attack) = N " << endl;
            }
            if (hasRapier == true){
                cout << "Divine Rapier (Deals 275 True Damage) = D" << endl;
            }
            if (hasRustbite == true){
                cout << "Rustbite Charge (-6 Boss DEF) = R" << endl;
            }
            if (hasSunglasses == true){
                cout << "Sunglasses (Skips Boss Attack) = S " << endl;
            }
            cout <<"Which item would you like to use? (Enter the corresponding letter): ";
            cin >> item_option;
            break;
        default:
            cout<<"Invalid Option... Proceed to attack..."<<endl<<endl;
            bdamage = main_ATK - boss_DEF; 
            idamage = max(1, bdamage);
            boss_HP -= idamage; 
            cout << "You did " << idamage << " damage." << endl << endl;
            main_HP -= boss_DMG; 
            cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
            cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl; 
            cout<<"========================================================================================="<<endl<<endl;
            break;
    }


switch (item_option) {
    case 'N':
    case 'n':
        if (hasNet == true){
        hasNet = false;
        cout<<"You used 90 - Caliber Net.. Proceed to Attack "<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        cout<<"You dodged the hollow's attack."<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
    case 'D':
    case 'd':
        if (hasRapier == true){
        boss_HP -= 275;
        hasRapier = false;
        cout<<"You unleashed the Divine Rapier..  "<<endl<<endl;
        cout<<"You pierced the hollow's head.. dealing 275 damage."<<endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        } else {
            break;
        }
    case 'R':
    case 'r':
        if (hasRustbite == true){
        boss_DEF -= 6;
        hasRustbite = false;
        cout<<"You used Rustbite (-6 Boss DEF)"<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage" <<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
        else {
            break;
        }
    case 'S':
    case 's':
        if (hasSunglasses == true){
        hasSunglasses= false;
        cout<<"You wore the sunglasses.. Proceed to Attack "<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        cout <<"You dodged the hollow's attack."<<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
        else {
            break;
        }
    default: 
        cout<<"Invalid Item... Proceed To Attack"<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
    }
        
if (boss_HP > 300) {
    cout <<"Bjorne: Tiny spark. I will crush you slowly.."<<endl<<endl;
}
if (boss_HP >= 200 && boss_HP < 301) {
    cout <<"Bjorne: You sting... nothing more."<<endl<<endl;
}
if (boss_HP >= 100 && boss_HP < 201) {
    cout <<"Bjorne: Impossible.. you persist?!!"<<endl<<endl;
}
if (boss_HP < 100) {
    cout <<"Bjorne: I will DEVOUR YOU! "<<endl<<endl;
}

if (boss_HP <= 0) {
    cout <<"Bjorne crumbled into dust..."<<endl;
    cout <<"Jun: I did it.... "<<endl;
    cout <<"???: Well done, Kid"<<endl;
    cout <<"Jun: Byakuya-Sama...."<<endl;
    cout <<"Byakuya(Captain of 6th Division): Come with me, I see a potential within you."<<endl<<endl;
    cout <<"VICTORY: Jun is recruited into the academy."<<endl;
    cout<<"========================================================================================="<<endl<<endl;
    return 0;
}

if (hasAmulet == true && main_HP <= 0) {
        main_HP = 1; 
        hasAmulet = false; 
        cout <<"The amulet crumbles as it lends you its last burst of energy."<<endl;
    }

if (main_HP <= 0) {
        cout << "Jun: This is the end...." << endl;
        cout << "Jun bled out as soon as the reinforcements arrived.."<<endl<<endl;
        cout << "DEFEAT: You lost. Try AGAIN" << endl;
        cout<<"========================================================================================="<<endl<<endl;
        return 0;
    }

cout << "Press ENTER to continue..." << endl;
cin.ignore();
cin.get();
cout<<"========================================================================================="<<endl<<endl;

//7


cout <<"You encountered a wild hollow."<<endl<<endl;
cout <<" ---------------- B J O R N E ---------------- "<<endl;
cout <<"HP: "<<boss_HP<<" ATK: "<<boss_ATK<<" DEF: "<<boss_DEF<<endl;
cout <<" --------------------------------------------- "<<endl<<endl;
cout <<" ------------ J U N  A R A S H I ------------- "<<endl;
cout <<"HP: "<<main_HP<<" ATK: "<<main_ATK<<" DEF: "<<main_DEF<<endl;
cout <<" --------------------------------------------- "<<endl<<endl;
counter += 1; 
cout <<"Turn: "<<counter<<endl;
cout <<"1.) Attack"<<endl;
cout <<"2.) Use Item "<<endl; 
cout <<"What would you like to do? (1/2): ";
cin >>option;

switch (option) {
        case 1:
            bdamage = main_ATK - boss_DEF; 
            idamage = max(1, bdamage);
            boss_HP -= idamage; 
            cout << "You did " << idamage << " damage." << endl << endl;
            main_HP -= boss_DMG; 
            cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
            cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
            cout<<"========================================================================================="<<endl<<endl;
            break;
        case 2: 
            cout << "Choose an Item (Note 1 Time Use Only)" <<endl<<endl;
            if (hasAmulet == true) {
                cout << "Schala's Amulet - Active " << endl;
            }
            if (hasNet == true){
                cout << "90- Caliber Net (Skips Boss Attack) = N " << endl;
            }
            if (hasRapier == true){
                cout << "Divine Rapier (Deals 275 True Damage) = D" << endl;
            }
            if (hasRustbite == true){
                cout << "Rustbite Charge (-6 Boss DEF) = R" << endl;
            }
            if (hasSunglasses == true){
                cout << "Sunglasses (Skips Boss Attack) = S " << endl;
            }
            cout <<"Which item would you like to use? (Enter the corresponding letter): ";
            cin >> item_option;
            break;
        default:
            cout<<"Invalid Option... Proceed to attack..."<<endl<<endl;
            bdamage = main_ATK - boss_DEF; 
            idamage = max(1, bdamage);
            boss_HP -= idamage; 
            cout << "You did " << idamage << " damage." << endl << endl;
            main_HP -= boss_DMG; 
            cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
            cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl; 
            cout<<"========================================================================================="<<endl<<endl;
            break;
    }


switch (item_option) {
    case 'N':
    case 'n':
        if (hasNet == true){
        hasNet = false;
        cout<<"You used 90 - Caliber Net.. Proceed to Attack "<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        cout<<"You dodged the hollow's attack."<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
    case 'D':
    case 'd':
        if (hasRapier == true){
        boss_HP -= 275;
        hasRapier = false;
        cout<<"You unleashed the Divine Rapier..  "<<endl<<endl;
        cout<<"You pierced the hollow's head.. dealing 275 damage."<<endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        } else {
            break;
        }
    case 'R':
    case 'r':
        if (hasRustbite == true){
        boss_DEF -= 6;
        hasRustbite = false;
        cout<<"You used Rustbite (-6 Boss DEF)"<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage" <<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
        else {
            break;
        }
    case 'S':
    case 's':
        if (hasSunglasses == true){
        hasSunglasses= false;
        cout<<"You wore the sunglasses.. Proceed to Attack "<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        cout <<"You dodged the hollow's attack."<<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
        else {
            break;
        }
    default: 
        cout<<"Invalid Item... Proceed To Attack"<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
    }
        
if (boss_HP > 300) {
    cout <<"Bjorne: Tiny spark. I will crush you slowly.."<<endl<<endl;
}
if (boss_HP >= 200 && boss_HP < 301) {
    cout <<"Bjorne: You sting... nothing more."<<endl<<endl;
}
if (boss_HP >= 100 && boss_HP < 201) {
    cout <<"Bjorne: Impossible.. you persist?!!"<<endl<<endl;
}
if (boss_HP < 100) {
    cout <<"Bjorne: I will DEVOUR YOU! "<<endl<<endl;
}

if (boss_HP <= 0) {
    cout <<"Bjorne crumbled into dust..."<<endl;
    cout <<"Jun: I did it.... "<<endl;
    cout <<"???: Well done, Kid"<<endl;
    cout <<"Jun: Byakuya-Sama...."<<endl;
    cout <<"Byakuya(Captain of 6th Division): Come with me, I see a potential within you."<<endl<<endl;
    cout <<"VICTORY: Jun is recruited into the academy."<<endl;
    cout<<"========================================================================================="<<endl<<endl;
    return 0;
}

if (hasAmulet == true && main_HP <= 0) {
        main_HP = 1; 
        hasAmulet = false; 
        cout <<"The amulet crumbles as it lends you its last burst of energy."<<endl;
    }

if (main_HP <= 0) {
        cout << "Jun: This is the end...." << endl;
        cout << "Jun bled out as soon as the reinforcements arrived.."<<endl<<endl;
        cout << "DEFEAT: You lost. Try AGAIN" << endl;
        cout<<"========================================================================================="<<endl<<endl;
        return 0;
    }

cout << "Press ENTER to continue..." << endl;
cin.ignore();
cin.get();
cout<<"========================================================================================="<<endl<<endl;


//8


cout <<"You encountered a wild hollow."<<endl<<endl;
cout <<" ---------------- B J O R N E ---------------- "<<endl;
cout <<"HP: "<<boss_HP<<" ATK: "<<boss_ATK<<" DEF: "<<boss_DEF<<endl;
cout <<" --------------------------------------------- "<<endl<<endl;
cout <<" ------------ J U N  A R A S H I ------------- "<<endl;
cout <<"HP: "<<main_HP<<" ATK: "<<main_ATK<<" DEF: "<<main_DEF<<endl;
cout <<" --------------------------------------------- "<<endl<<endl;
counter += 1; 
cout <<"Turn: "<<counter<<endl;
cout <<"1.) Attack"<<endl;
cout <<"2.) Use Item "<<endl; 
cout <<"What would you like to do? (1/2): ";
cin >>option;

switch (option) {
        case 1:
            bdamage = main_ATK - boss_DEF; 
            idamage = max(1, bdamage);
            boss_HP -= idamage; 
            cout << "You did " << idamage << " damage." << endl << endl;
            main_HP -= boss_DMG; 
            cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
            cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
            cout<<"========================================================================================="<<endl<<endl;
            break;
        case 2: 
            cout << "Choose an Item (Note 1 Time Use Only)" <<endl<<endl;
            if (hasAmulet == true) {
                cout << "Schala's Amulet - Active " << endl;
            }
            if (hasNet == true){
                cout << "90- Caliber Net (Skips Boss Attack) = N " << endl;
            }
            if (hasRapier == true){
                cout << "Divine Rapier (Deals 275 True Damage) = D" << endl;
            }
            if (hasRustbite == true){
                cout << "Rustbite Charge (-6 Boss DEF) = R" << endl;
            }
            if (hasSunglasses == true){
                cout << "Sunglasses (Skips Boss Attack) = S " << endl;
            }
            cout <<"Which item would you like to use? (Enter the corresponding letter): ";
            cin >> item_option;
            break;
        default:
            cout<<"Invalid Option... Proceed to attack..."<<endl<<endl;
            bdamage = main_ATK - boss_DEF; 
            idamage = max(1, bdamage);
            boss_HP -= idamage; 
            cout << "You did " << idamage << " damage." << endl << endl;
            main_HP -= boss_DMG; 
            cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
            cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl; 
            cout<<"========================================================================================="<<endl<<endl;
            break;
    }


switch (item_option) {
    case 'N':
    case 'n':
        if (hasNet == true){
        hasNet = false;
        cout<<"You used 90 - Caliber Net.. Proceed to Attack "<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        cout<<"You dodged the hollow's attack."<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
    case 'D':
    case 'd':
        if (hasRapier == true){
        boss_HP -= 275;
        hasRapier = false;
        cout<<"You unleashed the Divine Rapier..  "<<endl<<endl;
        cout<<"You pierced the hollow's head.. dealing 275 damage."<<endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        } else {
            break;
        }
    case 'R':
    case 'r':
        if (hasRustbite == true){
        boss_DEF -= 6;
        hasRustbite = false;
        cout<<"You used Rustbite (-6 Boss DEF)"<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage" <<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
        else {
            break;
        }
    case 'S':
    case 's':
        if (hasSunglasses == true){
        hasSunglasses= false;
        cout<<"You wore the sunglasses.. Proceed to Attack "<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        cout <<"You dodged the hollow's attack."<<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
        else {
            break;
        }
    default: 
        cout<<"Invalid Item... Proceed To Attack"<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
    }
        
if (boss_HP > 300) {
    cout <<"Bjorne: Tiny spark. I will crush you slowly.."<<endl<<endl;
}
if (boss_HP >= 200 && boss_HP < 301) {
    cout <<"Bjorne: You sting... nothing more."<<endl<<endl;
}
if (boss_HP >= 100 && boss_HP < 201) {
    cout <<"Bjorne: Impossible.. you persist?!!"<<endl<<endl;
}
if (boss_HP < 100) {
    cout <<"Bjorne: I will DEVOUR YOU! "<<endl<<endl;
}

if (boss_HP <= 0) {
    cout <<"Bjorne crumbled into dust..."<<endl;
    cout <<"Jun: I did it.... "<<endl;
    cout <<"???: Well done, Kid"<<endl;
    cout <<"Jun: Byakuya-Sama...."<<endl;
    cout <<"Byakuya(Captain of 6th Division): Come with me, I see a potential within you."<<endl<<endl;
    cout <<"VICTORY: Jun is recruited into the academy."<<endl;
    cout<<"========================================================================================="<<endl<<endl;
    return 0;
}

if (hasAmulet == true && main_HP <= 0) {
        main_HP = 1; 
        hasAmulet = false; 
        cout <<"The amulet crumbles as it lends you its last burst of energy."<<endl;
    }

if (main_HP <= 0) {
        cout << "Jun: This is the end...." << endl;
        cout << "Jun bled out as soon as the reinforcements arrived.."<<endl<<endl;
        cout << "DEFEAT: You lost. Try AGAIN" << endl;
        cout<<"========================================================================================="<<endl<<endl;
        return 0;
    }

cout << "Press ENTER to continue..." << endl;
cin.ignore();
cin.get();
cout<<"========================================================================================="<<endl<<endl;


//9


cout <<"You encountered a wild hollow."<<endl<<endl;
cout <<" ---------------- B J O R N E ---------------- "<<endl;
cout <<"HP: "<<boss_HP<<" ATK: "<<boss_ATK<<" DEF: "<<boss_DEF<<endl;
cout <<" --------------------------------------------- "<<endl<<endl;
cout <<" ------------ J U N  A R A S H I ------------- "<<endl;
cout <<"HP: "<<main_HP<<" ATK: "<<main_ATK<<" DEF: "<<main_DEF<<endl;
cout <<" --------------------------------------------- "<<endl<<endl;
counter += 1; 
cout <<"Turn: "<<counter<<endl;
cout <<"1.) Attack"<<endl;
cout <<"2.) Use Item "<<endl; 
cout <<"What would you like to do? (1/2): ";
cin >>option;

switch (option) {
        case 1:
            bdamage = main_ATK - boss_DEF; 
            idamage = max(1, bdamage);
            boss_HP -= idamage; 
            cout << "You did " << idamage << " damage." << endl << endl;
            main_HP -= boss_DMG; 
            cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
            cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
            cout<<"========================================================================================="<<endl<<endl;
            break;
        case 2: 
            cout << "Choose an Item (Note 1 Time Use Only)" <<endl<<endl;
            if (hasAmulet == true) {
                cout << "Schala's Amulet - Active " << endl;
            }
            if (hasNet == true){
                cout << "90- Caliber Net (Skips Boss Attack) = N " << endl;
            }
            if (hasRapier == true){
                cout << "Divine Rapier (Deals 275 True Damage) = D" << endl;
            }
            if (hasRustbite == true){
                cout << "Rustbite Charge (-6 Boss DEF) = R" << endl;
            }
            if (hasSunglasses == true){
                cout << "Sunglasses (Skips Boss Attack) = S " << endl;
            }
            cout <<"Which item would you like to use? (Enter the corresponding letter): ";
            cin >> item_option;
            break;
        default:
            cout<<"Invalid Option... Proceed to attack..."<<endl<<endl;
            bdamage = main_ATK - boss_DEF; 
            idamage = max(1, bdamage);
            boss_HP -= idamage; 
            cout << "You did " << idamage << " damage." << endl << endl;
            main_HP -= boss_DMG; 
            cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
            cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl; 
            cout<<"========================================================================================="<<endl<<endl;
            break;
    }


switch (item_option) {
    case 'N':
    case 'n':
        if (hasNet == true){
        hasNet = false;
        cout<<"You used 90 - Caliber Net.. Proceed to Attack "<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        cout<<"You dodged the hollow's attack."<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
    case 'D':
    case 'd':
        if (hasRapier == true){
        boss_HP -= 275;
        hasRapier = false;
        cout<<"You unleashed the Divine Rapier..  "<<endl<<endl;
        cout<<"You pierced the hollow's head.. dealing 275 damage."<<endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        } else {
            break;
        }
    case 'R':
    case 'r':
        if (hasRustbite == true){
        boss_DEF -= 6;
        hasRustbite = false;
        cout<<"You used Rustbite (-6 Boss DEF)"<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage" <<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
        else {
            break;
        }
    case 'S':
    case 's':
        if (hasSunglasses == true){
        hasSunglasses= false;
        cout<<"You wore the sunglasses.. Proceed to Attack "<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        cout <<"You dodged the hollow's attack."<<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
        else {
            break;
        }
    default: 
        cout<<"Invalid Item... Proceed To Attack"<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
    }
        
if (boss_HP > 300) {
    cout <<"Bjorne: Tiny spark. I will crush you slowly.."<<endl<<endl;
}
if (boss_HP >= 200 && boss_HP < 301) {
    cout <<"Bjorne: You sting... nothing more."<<endl<<endl;
}
if (boss_HP >= 100 && boss_HP < 201) {
    cout <<"Bjorne: Impossible.. you persist?!!"<<endl<<endl;
}
if (boss_HP < 100) {
    cout <<"Bjorne: I will DEVOUR YOU! "<<endl<<endl;
}

if (boss_HP <= 0) {
    cout <<"Bjorne crumbled into dust..."<<endl;
    cout <<"Jun: I did it.... "<<endl;
    cout <<"???: Well done, Kid"<<endl;
    cout <<"Jun: Byakuya-Sama...."<<endl;
    cout <<"Byakuya(Captain of 6th Division): Come with me, I see a potential within you."<<endl<<endl;
    cout <<"VICTORY: Jun is recruited into the academy."<<endl;
    cout<<"========================================================================================="<<endl<<endl;
    return 0;
}

if (hasAmulet == true && main_HP <= 0) {
        main_HP = 1; 
        hasAmulet = false; 
        cout <<"The amulet crumbles as it lends you its last burst of energy."<<endl;
    }

if (main_HP <= 0) {
        cout << "Jun: This is the end...." << endl;
        cout << "Jun bled out as soon as the reinforcements arrived.."<<endl<<endl;
        cout << "DEFEAT: You lost. Try AGAIN" << endl;
        cout<<"========================================================================================="<<endl<<endl;
        return 0;
    }

cout << "Press ENTER to continue..." << endl;
cin.ignore();
cin.get();
cout<<"========================================================================================="<<endl<<endl;


//10


cout <<"You encountered a wild hollow."<<endl<<endl;
cout <<" ---------------- B J O R N E ---------------- "<<endl;
cout <<"HP: "<<boss_HP<<" ATK: "<<boss_ATK<<" DEF: "<<boss_DEF<<endl;
cout <<" --------------------------------------------- "<<endl<<endl;
cout <<" ------------ J U N  A R A S H I ------------- "<<endl;
cout <<"HP: "<<main_HP<<" ATK: "<<main_ATK<<" DEF: "<<main_DEF<<endl;
cout <<" --------------------------------------------- "<<endl<<endl;
counter += 1; 
cout <<"Turn: "<<counter<<endl;
cout <<"1.) Attack"<<endl;
cout <<"2.) Use Item "<<endl; 
cout <<"What would you like to do? (1/2): ";
cin >>option;

switch (option) {
        case 1:
            bdamage = main_ATK - boss_DEF; 
            idamage = max(1, bdamage);
            boss_HP -= idamage; 
            cout << "You did " << idamage << " damage." << endl << endl;
            main_HP -= boss_DMG; 
            cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
            cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
            cout<<"========================================================================================="<<endl<<endl;
            break;
        case 2: 
            cout << "Choose an Item (Note 1 Time Use Only)" <<endl<<endl;
            if (hasAmulet == true) {
                cout << "Schala's Amulet - Active " << endl;
            }
            if (hasNet == true){
                cout << "90- Caliber Net (Skips Boss Attack) = N " << endl;
            }
            if (hasRapier == true){
                cout << "Divine Rapier (Deals 275 True Damage) = D" << endl;
            }
            if (hasRustbite == true){
                cout << "Rustbite Charge (-6 Boss DEF) = R" << endl;
            }
            if (hasSunglasses == true){
                cout << "Sunglasses (Skips Boss Attack) = S " << endl;
            }
            cout <<"Which item would you like to use? (Enter the corresponding letter): ";
            cin >> item_option;
            break;
        default:
            cout<<"Invalid Option... Proceed to attack..."<<endl<<endl;
            bdamage = main_ATK - boss_DEF; 
            idamage = max(1, bdamage);
            boss_HP -= idamage; 
            cout << "You did " << idamage << " damage." << endl << endl;
            main_HP -= boss_DMG; 
            cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
            cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl; 
            cout<<"========================================================================================="<<endl<<endl;
            break;
    }


switch (item_option) {
    case 'N':
    case 'n':
        if (hasNet == true){
        hasNet = false;
        cout<<"You used 90 - Caliber Net.. Proceed to Attack "<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        cout<<"You dodged the hollow's attack."<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
    case 'D':
    case 'd':
        if (hasRapier == true){
        boss_HP -= 275;
        hasRapier = false;
        cout<<"You unleashed the Divine Rapier..  "<<endl<<endl;
        cout<<"You pierced the hollow's head.. dealing 275 damage."<<endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        } else {
            break;
        }
    case 'R':
    case 'r':
        if (hasRustbite == true){
        boss_DEF -= 6;
        hasRustbite = false;
        cout<<"You used Rustbite (-6 Boss DEF)"<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage" <<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
        else {
            break;
        }
    case 'S':
    case 's':
        if (hasSunglasses == true){
        hasSunglasses= false;
        cout<<"You wore the sunglasses.. Proceed to Attack "<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        cout <<"You dodged the hollow's attack."<<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
        else {
            break;
        }
    default: 
        cout<<"Invalid Item... Proceed To Attack"<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
    }
        
if (boss_HP > 300) {
    cout <<"Bjorne: Tiny spark. I will crush you slowly.."<<endl<<endl;
}
if (boss_HP >= 200 && boss_HP < 301) {
    cout <<"Bjorne: You sting... nothing more."<<endl<<endl;
}
if (boss_HP >= 100 && boss_HP < 201) {
    cout <<"Bjorne: Impossible.. you persist?!!"<<endl<<endl;
}
if (boss_HP < 100) {
    cout <<"Bjorne: I will DEVOUR YOU! "<<endl<<endl;
}

if (boss_HP <= 0) {
    cout <<"Bjorne crumbled into dust..."<<endl;
    cout <<"Jun: I did it.... "<<endl;
    cout <<"???: Well done, Kid"<<endl;
    cout <<"Jun: Byakuya-Sama...."<<endl;
    cout <<"Byakuya(Captain of 6th Division): Come with me, I see a potential within you."<<endl<<endl;
    cout <<"VICTORY: Jun is recruited into the academy."<<endl;
    cout<<"========================================================================================="<<endl<<endl;
    return 0;
}

if (hasAmulet == true && main_HP <= 0) {
        main_HP = 1; 
        hasAmulet = false; 
        cout <<"The amulet crumbles as it lends you its last burst of energy."<<endl;
    }

if (main_HP <= 0) {
        cout << "Jun: This is the end...." << endl;
        cout << "Jun bled out as soon as the reinforcements arrived.."<<endl<<endl;
        cout << "DEFEAT: You lost. Try AGAIN" << endl;
        cout<<"========================================================================================="<<endl<<endl;
        return 0;
    }

cout << "Press ENTER to continue..." << endl;
cin.ignore();
cin.get();
cout<<"========================================================================================="<<endl<<endl;

//11


cout <<"You encountered a wild hollow."<<endl<<endl;
cout <<" ---------------- B J O R N E ---------------- "<<endl;
cout <<"HP: "<<boss_HP<<" ATK: "<<boss_ATK<<" DEF: "<<boss_DEF<<endl;
cout <<" --------------------------------------------- "<<endl<<endl;
cout <<" ------------ J U N  A R A S H I ------------- "<<endl;
cout <<"HP: "<<main_HP<<" ATK: "<<main_ATK<<" DEF: "<<main_DEF<<endl;
cout <<" --------------------------------------------- "<<endl<<endl;
counter += 1; 
cout <<"Turn: "<<counter<<endl;
cout <<"1.) Attack"<<endl;
cout <<"2.) Use Item "<<endl; 
cout <<"What would you like to do? (1/2): ";
cin >>option;

switch (option) {
        case 1:
            bdamage = main_ATK - boss_DEF; 
            idamage = max(1, bdamage);
            boss_HP -= idamage; 
            cout << "You did " << idamage << " damage." << endl << endl;
            main_HP -= boss_DMG; 
            cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
            cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
            cout<<"========================================================================================="<<endl<<endl;
            break;
        case 2: 
            cout << "Choose an Item (Note 1 Time Use Only)" <<endl<<endl;
            if (hasAmulet == true) {
                cout << "Schala's Amulet - Active " << endl;
            }
            if (hasNet == true){
                cout << "90- Caliber Net (Skips Boss Attack) = N " << endl;
            }
            if (hasRapier == true){
                cout << "Divine Rapier (Deals 275 True Damage) = D" << endl;
            }
            if (hasRustbite == true){
                cout << "Rustbite Charge (-6 Boss DEF) = R" << endl;
            }
            if (hasSunglasses == true){
                cout << "Sunglasses (Skips Boss Attack) = S " << endl;
            }
            cout <<"Which item would you like to use? (Enter the corresponding letter): ";
            cin >> item_option;
            break;
        default:
            cout<<"Invalid Option... Proceed to attack..."<<endl<<endl;
            bdamage = main_ATK - boss_DEF; 
            idamage = max(1, bdamage);
            boss_HP -= idamage; 
            cout << "You did " << idamage << " damage." << endl << endl;
            main_HP -= boss_DMG; 
            cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
            cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl; 
            cout<<"========================================================================================="<<endl<<endl;
            break;
    }


switch (item_option) {
    case 'N':
    case 'n':
        if (hasNet == true){
        hasNet = false;
        cout<<"You used 90 - Caliber Net.. Proceed to Attack "<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        cout<<"You dodged the hollow's attack."<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
    case 'D':
    case 'd':
        if (hasRapier == true){
        boss_HP -= 275;
        hasRapier = false;
        cout<<"You unleashed the Divine Rapier..  "<<endl<<endl;
        cout<<"You pierced the hollow's head.. dealing 275 damage."<<endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        } else {
            break;
        }
    case 'R':
    case 'r':
        if (hasRustbite == true){
        boss_DEF -= 6;
        hasRustbite = false;
        cout<<"You used Rustbite (-6 Boss DEF)"<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage" <<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
        else {
            break;
        }
    case 'S':
    case 's':
        if (hasSunglasses == true){
        hasSunglasses= false;
        cout<<"You wore the sunglasses.. Proceed to Attack "<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        cout <<"You dodged the hollow's attack."<<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
        else {
            break;
        }
    default: 
        cout<<"Invalid Item... Proceed To Attack"<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
    }
        
if (boss_HP > 300) {
    cout <<"Bjorne: Tiny spark. I will crush you slowly.."<<endl<<endl;
}
if (boss_HP >= 200 && boss_HP < 301) {
    cout <<"Bjorne: You sting... nothing more."<<endl<<endl;
}
if (boss_HP >= 100 && boss_HP < 201) {
    cout <<"Bjorne: Impossible.. you persist?!!"<<endl<<endl;
}
if (boss_HP < 100) {
    cout <<"Bjorne: I will DEVOUR YOU! "<<endl<<endl;
}

if (boss_HP <= 0) {
    cout <<"Bjorne crumbled into dust..."<<endl;
    cout <<"Jun: I did it.... "<<endl;
    cout <<"???: Well done, Kid"<<endl;
    cout <<"Jun: Byakuya-Sama...."<<endl;
    cout <<"Byakuya(Captain of 6th Division): Come with me, I see a potential within you."<<endl<<endl;
    cout <<"VICTORY: Jun is recruited into the academy."<<endl;
    cout<<"========================================================================================="<<endl<<endl;
    return 0;
}

if (hasAmulet == true && main_HP <= 0) {
        main_HP = 1; 
        hasAmulet = false; 
        cout <<"The amulet crumbles as it lends you its last burst of energy."<<endl;
    }

if (main_HP <= 0) {
        cout << "Jun: This is the end...." << endl;
        cout << "Jun bled out as soon as the reinforcements arrived.."<<endl<<endl;
        cout << "DEFEAT: You lost. Try AGAIN" << endl;
        cout<<"========================================================================================="<<endl<<endl;
        return 0;
    }

cout << "Press ENTER to continue..." << endl;
cin.ignore();
cin.get();
cout<<"========================================================================================="<<endl<<endl;

//12


cout <<"You encountered a wild hollow."<<endl<<endl;
cout <<" ---------------- B J O R N E ---------------- "<<endl;
cout <<"HP: "<<boss_HP<<" ATK: "<<boss_ATK<<" DEF: "<<boss_DEF<<endl;
cout <<" --------------------------------------------- "<<endl<<endl;
cout <<" ------------ J U N  A R A S H I ------------- "<<endl;
cout <<"HP: "<<main_HP<<" ATK: "<<main_ATK<<" DEF: "<<main_DEF<<endl;
cout <<" --------------------------------------------- "<<endl<<endl;
counter += 1; 
cout <<"Turn: "<<counter<<endl;
cout <<"1.) Attack"<<endl;
cout <<"2.) Use Item "<<endl; 
cout <<"What would you like to do? (1/2): ";
cin >>option;

switch (option) {
        case 1:
            bdamage = main_ATK - boss_DEF; 
            idamage = max(1, bdamage);
            boss_HP -= idamage; 
            cout << "You did " << idamage << " damage." << endl << endl;
            main_HP -= boss_DMG; 
            cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
            cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
            cout<<"========================================================================================="<<endl<<endl;
            break;
        case 2: 
            cout << "Choose an Item (Note 1 Time Use Only)" <<endl<<endl;
            if (hasAmulet == true) {
                cout << "Schala's Amulet - Active " << endl;
            }
            if (hasNet == true){
                cout << "90- Caliber Net (Skips Boss Attack) = N " << endl;
            }
            if (hasRapier == true){
                cout << "Divine Rapier (Deals 275 True Damage) = D" << endl;
            }
            if (hasRustbite == true){
                cout << "Rustbite Charge (-6 Boss DEF) = R" << endl;
            }
            if (hasSunglasses == true){
                cout << "Sunglasses (Skips Boss Attack) = S " << endl;
            }
            cout <<"Which item would you like to use? (Enter the corresponding letter): ";
            cin >> item_option;
            break;
        default:
            cout<<"Invalid Option... Proceed to attack..."<<endl<<endl;
            bdamage = main_ATK - boss_DEF; 
            idamage = max(1, bdamage);
            boss_HP -= idamage; 
            cout << "You did " << idamage << " damage." << endl << endl;
            main_HP -= boss_DMG; 
            cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
            cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl; 
            cout<<"========================================================================================="<<endl<<endl;
            break;
    }


switch (item_option) {
    case 'N':
    case 'n':
        if (hasNet == true){
        hasNet = false;
        cout<<"You used 90 - Caliber Net.. Proceed to Attack "<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        cout<<"You dodged the hollow's attack."<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
    case 'D':
    case 'd':
        if (hasRapier == true){
        boss_HP -= 275;
        hasRapier = false;
        cout<<"You unleashed the Divine Rapier..  "<<endl<<endl;
        cout<<"You pierced the hollow's head.. dealing 275 damage."<<endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        } else {
            break;
        }
    case 'R':
    case 'r':
        if (hasRustbite == true){
        boss_DEF -= 6;
        hasRustbite = false;
        cout<<"You used Rustbite (-6 Boss DEF)"<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage" <<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
        else {
            break;
        }
    case 'S':
    case 's':
        if (hasSunglasses == true){
        hasSunglasses= false;
        cout<<"You wore the sunglasses.. Proceed to Attack "<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        cout <<"You dodged the hollow's attack."<<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
        else {
            break;
        }
    default: 
        cout<<"Invalid Item... Proceed To Attack"<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
    }
        
if (boss_HP > 300) {
    cout <<"Bjorne: Tiny spark. I will crush you slowly.."<<endl<<endl;
}
if (boss_HP >= 200 && boss_HP < 301) {
    cout <<"Bjorne: You sting... nothing more."<<endl<<endl;
}
if (boss_HP >= 100 && boss_HP < 201) {
    cout <<"Bjorne: Impossible.. you persist?!!"<<endl<<endl;
}
if (boss_HP < 100) {
    cout <<"Bjorne: I will DEVOUR YOU! "<<endl<<endl;
}

if (boss_HP <= 0) {
    cout <<"Bjorne crumbled into dust..."<<endl;
    cout <<"Jun: I did it.... "<<endl;
    cout <<"???: Well done, Kid"<<endl;
    cout <<"Jun: Byakuya-Sama...."<<endl;
    cout <<"Byakuya(Captain of 6th Division): Come with me, I see a potential within you."<<endl<<endl;
    cout <<"VICTORY: Jun is recruited into the academy."<<endl;
    cout<<"========================================================================================="<<endl<<endl;
    return 0;
}

if (hasAmulet == true && main_HP <= 0) {
        main_HP = 1; 
        hasAmulet = false; 
        cout <<"The amulet crumbles as it lends you its last burst of energy."<<endl;
    }

if (main_HP <= 0) {
        cout << "Jun: This is the end...." << endl;
        cout << "Jun bled out as soon as the reinforcements arrived.."<<endl<<endl;
        cout << "DEFEAT: You lost. Try AGAIN" << endl;
        cout<<"========================================================================================="<<endl<<endl;
        return 0;
    }

cout << "Press ENTER to continue..." << endl;
cin.ignore();
cin.get();
cout<<"========================================================================================="<<endl<<endl;

//13


cout <<"You encountered a wild hollow."<<endl<<endl;
cout <<" ---------------- B J O R N E ---------------- "<<endl;
cout <<"HP: "<<boss_HP<<" ATK: "<<boss_ATK<<" DEF: "<<boss_DEF<<endl;
cout <<" --------------------------------------------- "<<endl<<endl;
cout <<" ------------ J U N  A R A S H I ------------- "<<endl;
cout <<"HP: "<<main_HP<<" ATK: "<<main_ATK<<" DEF: "<<main_DEF<<endl;
cout <<" --------------------------------------------- "<<endl<<endl;
counter += 1; 
cout <<"Turn: "<<counter<<endl;
cout <<"1.) Attack"<<endl;
cout <<"2.) Use Item "<<endl; 
cout <<"What would you like to do? (1/2): ";
cin >>option;

switch (option) {
        case 1:
            bdamage = main_ATK - boss_DEF; 
            idamage = max(1, bdamage);
            boss_HP -= idamage; 
            cout << "You did " << idamage << " damage." << endl << endl;
            main_HP -= boss_DMG; 
            cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
            cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
            cout<<"========================================================================================="<<endl<<endl;
            break;
        case 2: 
            cout << "Choose an Item (Note 1 Time Use Only)" <<endl<<endl;
            if (hasAmulet == true) {
                cout << "Schala's Amulet - Active " << endl;
            }
            if (hasNet == true){
                cout << "90- Caliber Net (Skips Boss Attack) = N " << endl;
            }
            if (hasRapier == true){
                cout << "Divine Rapier (Deals 275 True Damage) = D" << endl;
            }
            if (hasRustbite == true){
                cout << "Rustbite Charge (-6 Boss DEF) = R" << endl;
            }
            if (hasSunglasses == true){
                cout << "Sunglasses (Skips Boss Attack) = S " << endl;
            }
            cout <<"Which item would you like to use? (Enter the corresponding letter): ";
            cin >> item_option;
            break;
        default:
            cout<<"Invalid Option... Proceed to attack..."<<endl<<endl;
            bdamage = main_ATK - boss_DEF; 
            idamage = max(1, bdamage);
            boss_HP -= idamage; 
            cout << "You did " << idamage << " damage." << endl << endl;
            main_HP -= boss_DMG; 
            cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
            cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl; 
            cout<<"========================================================================================="<<endl<<endl;
            break;
    }


switch (item_option) {
    case 'N':
    case 'n':
        if (hasNet == true){
        hasNet = false;
        cout<<"You used 90 - Caliber Net.. Proceed to Attack "<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        cout<<"You dodged the hollow's attack."<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
    case 'D':
    case 'd':
        if (hasRapier == true){
        boss_HP -= 275;
        hasRapier = false;
        cout<<"You unleashed the Divine Rapier..  "<<endl<<endl;
        cout<<"You pierced the hollow's head.. dealing 275 damage."<<endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        } else {
            break;
        }
    case 'R':
    case 'r':
        if (hasRustbite == true){
        boss_DEF -= 6;
        hasRustbite = false;
        cout<<"You used Rustbite (-6 Boss DEF)"<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage" <<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
        else {
            break;
        }
    case 'S':
    case 's':
        if (hasSunglasses == true){
        hasSunglasses= false;
        cout<<"You wore the sunglasses.. Proceed to Attack "<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        cout <<"You dodged the hollow's attack."<<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
        else {
            break;
        }
    default: 
        cout<<"Invalid Item... Proceed To Attack"<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
    }
        
if (boss_HP > 300) {
    cout <<"Bjorne: Tiny spark. I will crush you slowly.."<<endl<<endl;
}
if (boss_HP >= 200 && boss_HP < 301) {
    cout <<"Bjorne: You sting... nothing more."<<endl<<endl;
}
if (boss_HP >= 100 && boss_HP < 201) {
    cout <<"Bjorne: Impossible.. you persist?!!"<<endl<<endl;
}
if (boss_HP < 100) {
    cout <<"Bjorne: I will DEVOUR YOU! "<<endl<<endl;
}

if (boss_HP <= 0) {
    cout <<"Bjorne crumbled into dust..."<<endl;
    cout <<"Jun: I did it.... "<<endl;
    cout <<"???: Well done, Kid"<<endl;
    cout <<"Jun: Byakuya-Sama...."<<endl;
    cout <<"Byakuya(Captain of 6th Division): Come with me, I see a potential within you."<<endl<<endl;
    cout <<"VICTORY: Jun is recruited into the academy."<<endl;
    cout<<"========================================================================================="<<endl<<endl;
    return 0;
}

if (hasAmulet == true && main_HP <= 0) {
        main_HP = 1; 
        hasAmulet = false; 
        cout <<"The amulet crumbles as it lends you its last burst of energy."<<endl;
    }

if (main_HP <= 0) {
        cout << "Jun: This is the end...." << endl;
        cout << "Jun bled out as soon as the reinforcements arrived.."<<endl<<endl;
        cout << "DEFEAT: You lost. Try AGAIN" << endl;
        cout<<"========================================================================================="<<endl<<endl;
        return 0;
    }

cout << "Press ENTER to continue..." << endl;
cin.ignore();
cin.get();
cout<<"========================================================================================="<<endl<<endl;


//14


cout <<"You encountered a wild hollow."<<endl<<endl;
cout <<" ---------------- B J O R N E ---------------- "<<endl;
cout <<"HP: "<<boss_HP<<" ATK: "<<boss_ATK<<" DEF: "<<boss_DEF<<endl;
cout <<" --------------------------------------------- "<<endl<<endl;
cout <<" ------------ J U N  A R A S H I ------------- "<<endl;
cout <<"HP: "<<main_HP<<" ATK: "<<main_ATK<<" DEF: "<<main_DEF<<endl;
cout <<" --------------------------------------------- "<<endl<<endl;
counter += 1; 
cout <<"Turn: "<<counter<<endl;
cout <<"1.) Attack"<<endl;
cout <<"2.) Use Item "<<endl; 
cout <<"What would you like to do? (1/2): ";
cin >>option;

switch (option) {
        case 1:
            bdamage = main_ATK - boss_DEF; 
            idamage = max(1, bdamage);
            boss_HP -= idamage; 
            cout << "You did " << idamage << " damage." << endl << endl;
            main_HP -= boss_DMG; 
            cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
            cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
            cout<<"========================================================================================="<<endl<<endl;
            break;
        case 2: 
            cout << "Choose an Item (Note 1 Time Use Only)" <<endl<<endl;
            if (hasAmulet == true) {
                cout << "Schala's Amulet - Active " << endl;
            }
            if (hasNet == true){
                cout << "90- Caliber Net (Skips Boss Attack) = N " << endl;
            }
            if (hasRapier == true){
                cout << "Divine Rapier (Deals 275 True Damage) = D" << endl;
            }
            if (hasRustbite == true){
                cout << "Rustbite Charge (-6 Boss DEF) = R" << endl;
            }
            if (hasSunglasses == true){
                cout << "Sunglasses (Skips Boss Attack) = S " << endl;
            }
            cout <<"Which item would you like to use? (Enter the corresponding letter): ";
            cin >> item_option;
            break;
        default:
            cout<<"Invalid Option... Proceed to attack..."<<endl<<endl;
            bdamage = main_ATK - boss_DEF; 
            idamage = max(1, bdamage);
            boss_HP -= idamage; 
            cout << "You did " << idamage << " damage." << endl << endl;
            main_HP -= boss_DMG; 
            cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
            cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl; 
            cout<<"========================================================================================="<<endl<<endl;
            break;
    }


switch (item_option) {
    case 'N':
    case 'n':
        if (hasNet == true){
        hasNet = false;
        cout<<"You used 90 - Caliber Net.. Proceed to Attack "<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        cout<<"You dodged the hollow's attack."<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
    case 'D':
    case 'd':
        if (hasRapier == true){
        boss_HP -= 275;
        hasRapier = false;
        cout<<"You unleashed the Divine Rapier..  "<<endl<<endl;
        cout<<"You pierced the hollow's head.. dealing 275 damage."<<endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        } else {
            break;
        }
    case 'R':
    case 'r':
        if (hasRustbite == true){
        boss_DEF -= 6;
        hasRustbite = false;
        cout<<"You used Rustbite (-6 Boss DEF)"<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage" <<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
        else {
            break;
        }
    case 'S':
    case 's':
        if (hasSunglasses == true){
        hasSunglasses= false;
        cout<<"You wore the sunglasses.. Proceed to Attack "<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        cout <<"You dodged the hollow's attack."<<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
        else {
            break;
        }
    default: 
        cout<<"Invalid Item... Proceed To Attack"<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
    }
        
if (boss_HP > 300) {
    cout <<"Bjorne: Tiny spark. I will crush you slowly.."<<endl<<endl;
}
if (boss_HP >= 200 && boss_HP < 301) {
    cout <<"Bjorne: You sting... nothing more."<<endl<<endl;
}
if (boss_HP >= 100 && boss_HP < 201) {
    cout <<"Bjorne: Impossible.. you persist?!!"<<endl<<endl;
}
if (boss_HP < 100) {
    cout <<"Bjorne: I will DEVOUR YOU! "<<endl<<endl;
}

if (boss_HP <= 0) {
    cout <<"Bjorne crumbled into dust..."<<endl;
    cout <<"Jun: I did it.... "<<endl;
    cout <<"???: Well done, Kid"<<endl;
    cout <<"Jun: Byakuya-Sama...."<<endl;
    cout <<"Byakuya(Captain of 6th Division): Come with me, I see a potential within you."<<endl<<endl;
    cout <<"VICTORY: Jun is recruited into the academy."<<endl;
    cout<<"========================================================================================="<<endl<<endl;
    return 0;
}

if (hasAmulet == true && main_HP <= 0) {
        main_HP = 1; 
        hasAmulet = false; 
        cout <<"The amulet crumbles as it lends you its last burst of energy."<<endl;
    }

if (main_HP <= 0) {
        cout << "Jun: This is the end...." << endl;
        cout << "Jun bled out as soon as the reinforcements arrived.."<<endl<<endl;
        cout << "DEFEAT: You lost. Try AGAIN" << endl;
        cout<<"========================================================================================="<<endl<<endl;
        return 0;
    }

cout << "Press ENTER to continue..." << endl;
cin.ignore();
cin.get();
cout<<"========================================================================================="<<endl<<endl;

//15


cout <<"You encountered a wild hollow."<<endl<<endl;
cout <<" ---------------- B J O R N E ---------------- "<<endl;
cout <<"HP: "<<boss_HP<<" ATK: "<<boss_ATK<<" DEF: "<<boss_DEF<<endl;
cout <<" --------------------------------------------- "<<endl<<endl;
cout <<" ------------ J U N  A R A S H I ------------- "<<endl;
cout <<"HP: "<<main_HP<<" ATK: "<<main_ATK<<" DEF: "<<main_DEF<<endl;
cout <<" --------------------------------------------- "<<endl<<endl;
counter += 1; 
cout <<"Turn: "<<counter<<endl;
cout <<"1.) Attack"<<endl;
cout <<"2.) Use Item "<<endl; 
cout <<"What would you like to do? (1/2): ";
cin >>option;

switch (option) {
        case 1:
            bdamage = main_ATK - boss_DEF; 
            idamage = max(1, bdamage);
            boss_HP -= idamage; 
            cout << "You did " << idamage << " damage." << endl << endl;
            main_HP -= boss_DMG; 
            cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
            cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
            cout<<"========================================================================================="<<endl<<endl;
            break;
        case 2: 
            cout << "Choose an Item (Note 1 Time Use Only)" <<endl<<endl;
            if (hasAmulet == true) {
                cout << "Schala's Amulet - Active " << endl;
            }
            if (hasNet == true){
                cout << "90- Caliber Net (Skips Boss Attack) = N " << endl;
            }
            if (hasRapier == true){
                cout << "Divine Rapier (Deals 275 True Damage) = D" << endl;
            }
            if (hasRustbite == true){
                cout << "Rustbite Charge (-6 Boss DEF) = R" << endl;
            }
            if (hasSunglasses == true){
                cout << "Sunglasses (Skips Boss Attack) = S " << endl;
            }
            cout <<"Which item would you like to use? (Enter the corresponding letter): ";
            cin >> item_option;
            break;
        default:
            cout<<"Invalid Option... Proceed to attack..."<<endl<<endl;
            bdamage = main_ATK - boss_DEF; 
            idamage = max(1, bdamage);
            boss_HP -= idamage; 
            cout << "You did " << idamage << " damage." << endl << endl;
            main_HP -= boss_DMG; 
            cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
            cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl; 
            cout<<"========================================================================================="<<endl<<endl;
            break;
    }


switch (item_option) {
    case 'N':
    case 'n':
        if (hasNet == true){
        hasNet = false;
        cout<<"You used 90 - Caliber Net.. Proceed to Attack "<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        cout<<"You dodged the hollow's attack."<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
    case 'D':
    case 'd':
        if (hasRapier == true){
        boss_HP -= 275;
        hasRapier = false;
        cout<<"You unleashed the Divine Rapier..  "<<endl<<endl;
        cout<<"You pierced the hollow's head.. dealing 275 damage."<<endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        } else {
            break;
        }
    case 'R':
    case 'r':
        if (hasRustbite == true){
        boss_DEF -= 6;
        hasRustbite = false;
        cout<<"You used Rustbite (-6 Boss DEF)"<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage" <<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
        else {
            break;
        }
    case 'S':
    case 's':
        if (hasSunglasses == true){
        hasSunglasses= false;
        cout<<"You wore the sunglasses.. Proceed to Attack "<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        cout <<"You dodged the hollow's attack."<<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
        }
        else {
            break;
        }
    default: 
        cout<<"Invalid Item... Proceed To Attack"<<endl<<endl;
        bdamage = main_ATK - boss_DEF; 
        idamage = max(1, bdamage);
        boss_HP -= idamage; 
        cout << "You did " << idamage << " damage." << endl << endl;
        main_HP -= boss_DMG; 
        cout << "The hollow lunges forward and ran its claw through your body. " <<endl;
        cout << "Jun took "<<boss_DMG<<" damage." <<endl<<endl;
        cout<<"========================================================================================="<<endl<<endl;
        break;
    }
        
if (boss_HP > 300) {
    cout <<"Bjorne: Tiny spark. I will crush you slowly.."<<endl<<endl;
}
if (boss_HP >= 200 && boss_HP < 301) {
    cout <<"Bjorne: You sting... nothing more."<<endl<<endl;
}
if (boss_HP >= 100 && boss_HP < 201) {
    cout <<"Bjorne: Impossible.. you persist?!!"<<endl<<endl;
}
if (boss_HP < 100) {
    cout <<"Bjorne: I will DEVOUR YOU! "<<endl<<endl;
}

if (boss_HP <= 0) {
    cout <<"Bjorne crumbled into dust..."<<endl;
    cout <<"Jun: I did it.... "<<endl;
    cout <<"???: Well done, Kid"<<endl;
    cout <<"Jun: Byakuya-Sama...."<<endl;
    cout <<"Byakuya(Captain of 6th Division): Come with me, I see a potential within you."<<endl<<endl;
    cout <<"VICTORY: Jun is recruited into the academy."<<endl;
    cout<<"========================================================================================="<<endl<<endl;
    return 0;
}

if (hasAmulet == true && main_HP <= 0) {
        main_HP = 1; 
        hasAmulet = false; 
        cout <<"The amulet crumbles as it lends you its last burst of energy."<<endl;
    }

if (main_HP <= 0) {
        cout << "Jun: This is the end...." << endl;
        cout << "Jun bled out as soon as the reinforcements arrived.."<<endl<<endl;
        cout << "DEFEAT: You lost. Try AGAIN" << endl;
        cout<<"========================================================================================="<<endl<<endl;
        return 0;
    }
cout<<"========================================================================================="<<endl<<endl;
cout << "......................" << endl<<endl;
cout <<"Jun collapses from exhaustion...."<<endl;
cout <<"The reinforcement arrived too late"<<endl;
cout <<"DEFEAT: Fatigue Ending."<<endl;
return 0;

}