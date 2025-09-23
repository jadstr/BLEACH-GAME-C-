#include <iostream>
using namespace std;

int main() {
int main_ATK, main_DEF, main_HP, option;
int boss_ATK, boss_DEF, boss_HP;
bool hasRustbite, hasRapier, hasNet, hasSunglasses, hasAmulet; 
int main_DMG, boss_DMG;
char item_option;



main_ATK = 12;
main_HP = 40; 
main_DEF = 5; 

boss_ATK = 21;
boss_DEF = 20;
boss_HP = 400;

cout<<"Press ENTER to Continue..."<<endl;
cin.ignore();
cin.get();

cout<<"The ground splits. Bjorne, a towering Hollow, rises from the shadows."<<endl<<endl;
cout<<"Bjorne: Foolish soul... your resistance amuses me."<<endl;
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
cout<<"				\	|		    | 	  |			 |   /     				"<<endl;
cout<<"	  	 		 \	|		    | ___ |			 |  /     			    "<<endl;
cout<<" 	 		 ___|							 |__ 				    "<<endl;
cout<<" 	  		 |  							  	|	 				"<<endl;
cout<<" 	  		 | ________________________________ |	 				"<<endl;
cout<<" 	  		 | \______________________________/ |	 				"<<endl;
cout<<" 	  		 |__________________________________|     				"<<endl;


cout<<"Your Turn: "<<endl;
cout<<"Choose Options: (1/2/3)  "<<endl;
cout<<"1.) ATK"<<endl;
cout<<"2.) ITEMS"<<endl;


cin>>option;

switch (option) {
    case 1:
        main_DMG = max(1, main_ATK - boss_DEF); 
        boss_HP - main_DMG;
        cout<<"You chose to attack"
        break;
    case 2: 
        cout<<"Choose an Item (Note 1 Time Use Only)"<<endl;
        if (hasAmulet == true) {
            cout<< "Amulet = A "<<endl;
        }
        else if (hasNet == true){
            cout<<"Net = N "<<endl;
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
cout<<"The hollow rans its claws in your chest. "<<endl;
cout<<"Jun took damage. "<<endl;
cout<<"Jun: This nothing but a scratch "<<endl; 

switch (item_option) {
    case 'A':
        hasAmulet = false;
        if (main_HP == 0){
            main_HP +=1
        }


        
        


    





} 
















return 0; 
}
