#include <iostream>
using namespace std;

int main() {
int main_ATK, main_DEF, main_HP, option;
int boss_ATK, boss_DEF;
bool hasRustbite = false; 
bool hasRapier = false; 
bool hasNet = false; 
bool hasSunglasses = false; 
bool hasAmulet = false; 
int boss_DMG;
char item_option;
int bdamage, idamage;



main_ATK = 12;
main_HP = 40; 
main_DEF = 5; 

boss_ATK = 21;
boss_DEF = 20;
int bjorneHP = 400;

cout<<"Press ENTER to Continue..."<<endl;
cin.ignore();
cin.get();

cout<<"The ground splits. Bjorne, a towering Hollow, rises from the shadows."<<endl<<endl;
cout<<"Bjorne: Foolish soul... your resistance amuses me."<<endl<<endl;
cout<<"		   _________________________________________________			"<<endl;
cout<<"		  |	     					  						|			"<<endl;
cout<<"	 _____|						  						    |______		"<<endl;
cout<<"	|	 		 =========		  			  =========		  	   |	"<<endl;
cout<<" |			|	      |			 		 |		   |     	   |	"<<endl;
cout<<" |			|	      |				  	 |		   |	 	   |	"<<endl;
cout<<" |			|  (=O=)  |				  	 |	(=O=)  |	 	   |	"<<endl;
cout<<" |_______    |	      |				  	 |		   |	 ______|	"<<endl;
cout<<"			|	|_________|				  	 |_________|	|			"<<endl;
cout<<"			|		     	   _________ 	   		  		|			"<<endl;
cout<<"			|________		   |  	   |		  __________|			"<<endl;
cout<<"					|		    | 	  |			 |        				"<<endl;
cout<<"	  	 		  	|		    | ___ |			 |      			    "<<endl;
cout<<" 	 		  __|							 |__ 				    "<<endl;
cout<<" 	  		 |  							  	|	 				"<<endl;
cout<<" 	  		 | ________________________________ |	 				"<<endl;
cout<<" 	  		 |  ______________________________  |	 				"<<endl;
cout<<" 	  		 |__________________________________|     				"<<endl;


cout<<"Your Turn: "<<endl;
cout<<"Choose Options: (1/2/3)  "<<endl;
cout<<"1.) ATK"<<endl;
cout<<"2.) ITEMS"<<endl;
cin>>option;

switch (option) {
    case 1:
        bdamage = main_ATK - boss_DEF; 
        idamage = fmax(1, bdamage);
        bjorneHP -= idamage; 
        cout<<"You did "<<idamage<<endl;
        break;
    case 2: 
        cout<<"Choose an Item (Note 1 Time Use Only)"<<endl;
        if (hasAmulet == true) {
            cout<< "Amulet (activated) "<<endl;
        }
        else if (hasNet == true){
            cout<<"Net = N"<<endl;
        }
        else if (hasRapier == true){
            cout<<"Divine Rapier = D"<<endl;
        }
        else if (hasRustbite == true){
            cout<<"Rustbite = R"<<endl;
        }
        else if (hasSunglasses == true){
            cout<<"Sunglasses = S"<<endl;
        }
        cin>>item_option;
        break; 

}

boss_DMG = max(1, boss_ATK - main_DEF);
main_HP -= boss_DMG; 
cout<<"The hollow rans its claws in your chest. "<<endl;
cout<<"Jun took damage. "<<endl;
cout<<"Jun: This nothing but a scratch "<<endl; 
 
if (hasAmulet == true) {
    if (main_HP <= 0) {
    main_HP += 1;
    hasAmulet = false;
}  
    }
if (main_HP <= 0){
    cout<<"Jun: This is the end...."<<endl;
    cout<<"You lost. Try AGAIN"<<endl;
    return 0;
} 

        
        


    
return 0;

}
