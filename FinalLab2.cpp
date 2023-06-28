FinalLab2.cpp
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Axel.h"
#include "Armor.h"
#include "Armor2.h"

using namespace std;

//enemies structs
struct Enemy
{
	string Name;
	string desaName;
	string schoolName;
	int health;
	int power;
};

//player structs and stats
struct player
{
	string name;
	string desaName;
	string schoolName;
};

struct playerstats
{
	int health;
	int strength;
	int attackpower;
};

int randomz(int upperlevel, int lowerlevel)
{
	int value;
	value = (rand() % upperlevel) + lowerlevel;
	return value;
}

//beginining of main statement
int main()
{
string travel1;
string travel2;
string engagerun;
string attackrun;
string powerup;
string engage;




cout << "		    ARDY HAKIM \n";
cout << "		      Presents \n";
cout << "									\n";
cout << "		  THE MYSTERY WOODS\n";
cout<<"	              * *    \n";
cout<<"	           *    *  *		\n";
cout<<"	      *  *    *     *  *		\n";
cout<<"	     *     *    *  *    *		\n";
cout<<"	 * *   *    *    *    *   *		\n";
cout<<"	 *     *  *    * * .#  *   *	\n";
cout<<"	 *   *     * #.  .# *   *		\n";
cout<<"	  *     '#.  #: #' * *    *		\n";
cout<<"	 *   * * '#. ##'       *		\n";
cout<<"	   *       '###		\n";
cout<<"	             '##		\n";
cout<<"	              ##.		\n";
cout<<"	              .##:		\n";
cout<<"	              :###		\n";
cout<<"	              ;###		\n";
cout<<"	            ,####.			\n";
cout<<"	/\\/\\/\\/\\/\\/.######.\\/\\/\\/\\/\\		\n";
cout << "	 Press enter to begin your adventure...\n";

cin.ignore();
cout << string(15, '\n');

player player1;

cout << "Enter your name: \n";
getline(cin, player1.name);
cout << "Welcome to THE MYSTERY WOODS: " << player1.name << "!\n";

cout << string(15, '\n');
cout << "Please enter your desasiswa: \n";
getline(cin, player1.desaName);

cout << string(15, '\n');
cout << "Please enter your school: \n";
getline(cin, player1.schoolName);


cout << "Here is a quick look at your player profile\n";
cout << player1.name << endl;
cout << player1.desaName<< endl;
cout << player1.schoolName << endl;
cout << "Press enter to continue...\n";
cin.ignore();
cout << string(15, '\n');

playerstats player2;
player2.health = 250;
cout << "Before start, fill in this information first:\n";
cout << player1.name << " please enter the strength of your character, 1-100: \n";
cin >> player2.strength;
while(player2.strength>100){
	cout<<"Invalid command. Enter again:";
	cin >> player2.strength;
}

// weapon
	int weap1;
	int weap2;
	int weapon;


	cout<<"\nCHOOSE YOUR WEAPON!!!\n";
	cout<<"\n";
	cout<<"   BOWW!!\n";
	cout<<  "       )    \n";
	cout<< "        ) \n";
	cout<< "        |) \n";
    cout<< "        | ]" << std::endl;
    cout<< "        |  ]    " << std::endl;
    cout<< "        |   ]    " << std::endl;
    cout<< " >>-----|---]-->   " << std::endl;
    cout<< "        |   ]" << std::endl;
    cout<< "        |  ]    " << std::endl;
    cout<< "        | ]    " << std::endl;
    cout<< "        |) \n" ;
    cout<< "        ) \n" ;
    cout<< "       )   \n";

    cout<<"\n";
	cout<<"   SWORD!!";
	cout<<"\n";
	cout<<"\n";
	cout<<"	             /> \n";
	cout<<"	            /<  \n";
	cout<<"	           /<  \n";
	cout<<"	 |\\_______{o}----------------------------------------------------------_  \n";
	cout<<"	[\\\\\\\\\\\{*}:::<=============================================-             >   \n";
	cout<<"	 |/~~~~~~~{o}----------------------------------------------------------~    \n";
	cout<<"	           \\<   \n";
	cout<<"	            \\<   \n";
	cout<<"	             \\>   \n";

	cout<<"\n";
	cout<<"   GUNN!!\n";
	cout << "           ___________    " << endl;
    cout << "          /           \\ " << endl;
    cout << "         /             \\ " << endl;
    cout << "        |   BANG! BANG! |" << endl;
    cout << "         \\             /" << endl;
    cout << "          \\___________/" << endl;
    cout<<"\n";
	cout<<" +--^----------,--------,-----,--------^-, \n";
	cout<<" | |||||||||   `--------'     |          O  \n";
	cout<<" `+---------------------------^----------|  \n";
	cout<<"   `\\_,---------,---------,--------------'  \n";
	cout<<"     / XXXXXX /'|       /'   \n";
	cout<<"    / XXXXXX /  `\\    /'   \n";
	cout<<"   / XXXXXX /`-------'   \n";
	cout<<"  / XXXXXX /        \n";
	cout<<" / XXXXXX /      \n";
	cout<<"(________(      \n";
	cout<<" `------'   \n";

	cout<<"\n";
	cout<<"   AXE!!";
	cout<<"\n";
	cout<<"	  ,  /\\  .  \n";
	cout<<"	  /`-||-'\\ \n";
	cout<<"	(| -=||=- |)\n";
	cout<<"	  \\,-||-./ \n";
	cout<<"	  `  ||  '  \n";
	cout<<"	     ||     \n";
	cout<<"	     ||     \n";
	cout<<"	     ||     \n";
	cout<<"	     ||     \n";
	cout<<"	     ||     \n";
	cout<<"	     ()\n";
	cout<<"\n";
	cout<<"(1) BOW and SWORD \n";
	cout<<"(2) GUN and AXE \n";
	cout<<"(3) BOW and AXE \n";
	cout<<"(4) GUN and SWORD \n";
	cout<<"(5) BOW and GUN \n";
	cout<<"(6) SWORD and AXE \n";

	cout<<"Pick your number \n ";
	cin >> weapon;

	if(weapon == 1)
	{
	cout << "How many arrow do you want for your bow? (Limit 8): "<<endl;
	cin >> weap1;
	while(weap1>8)
	{
		cout<<"You exceed limit of the arrow !!!"<<endl;
		cin >> weap1;
	}
	cout << "How sharp do you want for your sword? (Limit 6): "<<endl;
	cin >> weap2;
	while(weap2>6)
	{
		cout<<"You exceed limit of the sharpness !!!"<<endl;
		cin >> weap2;
	}
	Axel Axel2(weap1, weap2);
	cout << "Damage Per Arrow: "<< Axel2.getDamagePerWeap1() << endl;
	cout << "Damage Per Sharpness: "<< Axel2.getDamagePerWeap2() << endl;
	cout << "Your armor power: "<<Axel2.getPower() << endl;

}

else if(weapon == 2)
	{
	cout << "How many bullet do you want for your gun? (Limit 10): "<<endl;
	cin >> weap1;
	while(weap1>10)
	{
		cout<<"You exceed limit of the gun !!!"<<endl;
		cin >> weap1;
	}
	cout << "How many weigth do you want for your axe? (Limit 5): "<<endl;
	cin >> weap2;
	while(weap2>5)
	{
		cout<<"You exceed limit of the weigth !!!"<<endl;
		cin >> weap2;
	}
	Axel Axel2(weap1, weap2);
	cout << "Damage Per bullet: "<< Axel2.getDamagePerWeap1() << endl;
	cout << "Damage Per weigth: "<< Axel2.getDamagePerWeap2() << endl;
	cout << "Your armor power: "<<Axel2.getPower() << endl;

}

else if(weapon == 3)
	{
	cout<<"How many arrow do you want for your bow? (Limit 8):"<<endl;
	cin >> weap1;
	while(weap1>8)
	{
		cout<<"You exceed limit of the arrow !!!"<<endl;
		cin >> weap1;
	}
	cout << "How many weigth do you want for your axe? (Limit 5): "<<endl;
	cin >> weap2;
	while(weap2>5)
	{
		cout<<"You exceed limit of the weigth !!!"<<endl;
		cin >> weap2;
	}
	Axel Axel2(weap1, weap2);
	cout << "Damage Per arrow: "<< Axel2.getDamagePerWeap1() << endl;
	cout << "Damage Per weigth: "<< Axel2.getDamagePerWeap2() << endl;
	cout << "Your armor power: "<<Axel2.getPower() << endl;

}

else if(weapon == 4)
	{
	cout << "How many bullet do you want for your gun? (Limit 10): "<<endl;
	cin >> weap1;
	while(weap1>10)
	{
		cout<<"You exceed limit of the gun !!!"<<endl;
		cin >> weap1;
	}
	cout << "How sharp do you want for your sword? (Limit 6): "<<endl;
	cin >> weap2;
	while(weap2>6)
	{
		cout<<"You exceed limit of the sharpnes !!!"<<endl;
		cin >> weap2;
	}
	Axel Axel2(weap1, weap2);
	cout << "Damage Per bullet: "<< Axel2.getDamagePerWeap1() << endl;
	cout << "Damage Per sharpness: "<< Axel2.getDamagePerWeap2() << endl;
	cout << "Your armor power: "<<Axel2.getPower() << endl;

}

else if(weapon == 5)
	{
	cout<<"How many arrow do you want for your bow? (Limit 8):"<<endl;
	cin >> weap1;
	while(weap1>8)
	{
		cout<<"You exceed limit of the arrow !!!"<<endl;
		cin >> weap1;
	}
	cout << "How many bullet do you want for your gun? (Limit 10): "<<endl;
	cin >> weap2;
	while(weap2>10)
	{
		cout<<"You exceed limit of the gun !!!"<<endl;
		cin >> weap2;
	}
	Axel Axel2(weap1, weap2);
	cout << "Damage Per arrow: "<< Axel2.getDamagePerWeap1() << endl;
	cout << "Damage Per bullet: "<< Axel2.getDamagePerWeap2() << endl;
	cout << "Your armor power: "<<Axel2.getPower() << endl;

}

else if(weapon == 6)
	{
	cout << "How sharp do you want for your sword? (Limit 6): ";
	cin >> weap1;
	while(weap1>6)
	{
		cout<<"You exceed limit of the sharpnes !!!"<<endl;
		cin >> weap1;
	}
	cout << "How many weigth do you want for your axe? (Limit 5): "<<endl;
	cin >> weap2;
	while(weap2>5)
	{
		cout<<"You exceed limit of the weigth !!!"<<endl;
		cin >> weap2;
	}
	Axel Axel2(weap1, weap2);
	cout << "Damage Per sharpness: "<< Axel2.getDamagePerWeap1() << endl;
	cout << "Damage Per weigth: "<< Axel2.getDamagePerWeap2() << endl;
	cout << "Your armor power: "<<Axel2.getPower() << endl;

}


Axel Axel2(weap1, weap2);

cin.ignore();
cout << string(15, '\n');

cout << "Your journey is into the jungle of Wakanda-619. Along the way, you will encounter various obstacles.\n Many will try to stop you from reaching Wakanda-619. \n";
cout << "Your personal assistant, Bixby, is here to guide you along the way.\n Good luck, and we will see you on Wakanda-619!\n";
cout << "Press enter to begin THE MYSTERY WOODS!\n";

cin.ignore();
cout << string(15, '\n');
cout<<"  .--.            .--.	\n";
cout<<" ( (`\\.'--``--'.//`) )	\n";
cout<<"  '-.   __   __    .-'	\n";
cout<<"   /   /__\\ /__\\   \\		\n";
cout<<"  |    \\ 0/ \\ 0/    |		\n";
cout<<"  \\     `/   \\`     /	\n";
cout<<"   `-.  /-'''-\\  .-`		\n";
cout<<"     /  '.___.'  \\		\n";
cout<<"     \\     I     /		\n";
cout<<"      `;--'`'--;`		\n";
cout<<"        '.___.'			\n";
cout<<"\n";
		cout << "Greatings " <<player1.name<< ". I am your personal assistant, Bixby. Are you ready to leave?\n";
		cin >> travel1;
		if (travel1 == "Yes" || travel1 == "yes")
		{
			cout<< "Good, lets get going then.\n";
		}
		else
		{
			cout << "Alright, just type 'Ready' when you are finished.\n";
			cin >>travel2;
			if (travel2 == "Ready" || travel2 == "ready")
				cout << "Ok, lets gooo!!!\n";

		}

cout<<"\n";
cout<<"\n";
cout<<"\n";
cout<<"                                                        .	\n";
cout<<"                                              .         ;  \n";
cout<<"                 .              .              ;%     ;;   	\n";
cout<<"                   ,           ,                :;%  %;   	\n";
cout<<"                    :         ;                   :;%;'     .,   	\n";
cout<<"           ,.        %;     %;            ;        %;'    ,;		\n";
cout<<"             ;       ;%;  %%;        ,     %;    ;%;    ,%'		\n";
cout<<"              %;       %;%;      ,  ;       %;  ;%;   ,%;' 		\n";
cout<<"               ;%;      %;        ;%;        % ;%;  ,%;'		\n";
cout<<"                `%;.     ;%;     %;'         `;%%;.%;'		\n";
cout<<"                 `:;%.    ;%%. %@;        %; ;@%;%'		\n";
cout<<"                    `:%;.  :;bd%;          %;@%;'		\n";
cout<<"                      `@%:.  :;%.         ;@@%;'   		\n";
cout<<"                        `@%.  `;@%.      ;@@%;         \n";
cout<<"                          `@%%. `@%%    ;@@%;        \n";
cout<<"                            ;@%. :@%%  %@@%;       \n";
cout<<"                              %@bd%%%bd%%:;     \n";
cout<<"                                #@%%%%%:;;			\n";
cout<<"                                %@@%%%::;			\n";
cout<<"                                %@@@%(o);  . '         \n";
cout<<"                                %@@@o%;:(.,'         \n";
cout<<"                            `.. %@@@o%::;         \n";
cout<<"                               `)@@@o%::;         \n";
cout<<"                                %@@(o)::;        \n";
cout<<"                               .%@@@@%::;         \n";
cout<<"                               ;%@@@@%::;.          \n";
cout<<"                              ;%@@@@%%:;;;. 			\n";
cout<<"                          ...;%@@@@@%%:;;;;,..    	\n";
cout<<"\n";
cout<<"Press ENTER to continue";
cin.ignore();
cin.ignore();
cout << string(15, '\n');


weap1 = weap1 + 1;
Axel Level2(weap2, weap1);
player2.health = 350;

cout << "Your updated stats are:\n";
cout << "Damage 1ST weapon: "<< Level2.getDamagePerWeap1() << endl;
cout << "Damage 2ND weapon: "<< Level2.getDamagePerWeap2() << endl;
cout << "Your body power: "<<Level2.getPower() << endl;
cout << "Your health is: " << player2.health << endl;
cout << "Press enter to continue your adventure!\n";
cin.ignore();
cout << string(15, '\n');

// first enemy here
cout << "You travel farther and farther into the unknown, Bixby tells you you are\n";
cout << "700K KM away from Wakanda-619, so very close and yet so far.\n";
cout << "When suddenly you hear a rambling sound from the bushes, then...";
cin.ignore();
cout << string(15, '\n');

cout << "Sir, a huge monster is coming out!!\n";
cin.ignore();
cout << string(15, '\n');

Enemy ForestEater;
ForestEater.Name = "FOREST EATER";
ForestEater.desaName = "WEST JUNGLE";
ForestEater.power = Axel2.getPower() * .7;
ForestEater.health = ForestEater.power + 100;
cout<<"\n";
cout <<"====================================================================== \n";
cout <<"					 \\|\\||	\n";
cout <<"					  -' ||||/		\n";
cout <<"					 /7   |||||/		\n";
cout <<"					/    |||||||/`-.____________		\n";
cout <<"					\\-' |||||||||               `-._		\n";
cout <<"					 -|||||||||||               |` -`.		\n";
cout <<"					   ||||||               \\   |   `\\		\n";
cout <<"					    |||||\\  \\______...---\\_  \\    \\			\n";
cout <<"					       |  \\  \\           | \\  |    ``-.__--.		\n";
cout <<"					       |  |\\  \\         / / | |       ``---'	\n";
cout <<"					     _/  /_/  /      __/ / _| |			\n";
cout <<"					    (,__/(,__/      (,__/ (,__/		\n";
cout <<"======================================================================\n";
cout<<"\n";
cout << "Name of Enemy: "<< ForestEater.Name << endl;
cout << "Origin: " <<ForestEater.desaName << endl;
cout << "Enemy strength: " << ForestEater.power << endl;
cout << "Enemy health: " << ForestEater.health << endl;
cin.ignore();
cout << string(15, '\n');


cout << "Engage?								Run?\n";
cin >> engagerun;
if(engagerun == "Run" || engagerun == "run"){
		cout<< "\nIf you say so sir, we managed to escape from the monster"<<endl;
		cout<< "It was unfortnate that we runaway, this must not happen again sir!..."<<endl;
		cout<< "We must be brave and faced the challenge not run from it"<<endl;
		cin.ignore();
		cout << string(15, '\n');
	}
else{

	while(engagerun == "Engage" || engagerun == "engage" && ForestEater.health > 0)
	{
		cout << "Direct Hit!\n";
		ForestEater.health = ForestEater.health - Axel2.getPower() * .15;
		cout << "Current health of Forest Eater: "<< ForestEater.health << endl;
		if(ForestEater.health > 0)
			{
				cout << "We are preparing to engage again, would you like to take evasive maneuvers?\n";
				cout << "Attack?								Run?\n";
				cin >> attackrun;
				while(attackrun=="Attack" || attackrun=="attack" && ForestEater.health > 0){
					cout << "Direct Hit!\n";
					cout<<"second"<<endl;
					ForestEater.health = ForestEater.health - Axel2.getPower() * .15;
					cout << "Current health of Forest Eater: "<< ForestEater.health << endl;
					cin>> attackrun;
				}
			}
				cout << "Sir, you really are something else...\n";
			player2.health = player2.health - (ForestEater.power * .5);
			cout << "Current Health: " << player2.health << endl;
			if(attackrun == "Run" ||attackrun == "run" ){
				cout<< "\nIf you say so sir, we managed to escape from the monster"<<endl;
				cout<< "It was unfortnate that we runaway, this must not happen again sir!..."<<endl;
				cout<< "We must be brave and faced the challenge not run from it"<<endl;
				attackrun = "adeh";
			}
		engagerun = "adui";

	}
}
if(player2.health >= 0 && ForestEater.health <= 0)
{
	cin.ignore();
	cout << string(15, '\n');
	cout << "Great shot! The enemy has been defeated!\n";
	cout << "You have defeated: FOREST EATER!\n";
	cout << "The armor is currently being repaired, and you have gained 50 extra health points!";
	cout << "You also gained 2 extra weapon!\n";
	cin.ignore();
	cout << string(15, '\n');
	weap2 = weap2 + 2;
	Axel Level2(weap2, weap1);
	player2.health = 450;

	cout << "Your updated stats are:\n";
	cout << "Damage 1ST weapon: "<< Level2.getDamagePerWeap1() << endl;
	cout << "Damage 2ND weapon: "<< Level2.getDamagePerWeap2() << endl;
	cout << "Your armor power: "<<Level2.getPower() << endl;
	cout << "Your health is: " << player2.health << endl;
	cout << "Press enter to continue your adventure!\n";
	cin.ignore();
	cout << string(15, '\n');
}
else if(player2.health <= 0 && ForestEater.health >= 0){
	cout << "You have been killed by: Forest Eater!\n";
cout <<"====================================================================== \n";
cout <<"					 \\|\\||	\n";
cout <<"					  -' ||||/		\n";
cout <<"					 /7   |||||/		\n";
cout <<"					/    |||||||/`-.____________		\n";
cout <<"					\\-' |||||||||               `-._		\n";
cout <<"					 -|||||||||||               |` -`.		\n";
cout <<"					   ||||||               \\   |   `\\		\n";
cout <<"					    |||||\\  \\______...---\\_  \\    \\			\n";
cout <<"					       |  \\  \\           | \\  |    ``-.__--.		\n";
cout <<"					       |  |\\  \\         / / | |       ``---'	\n";
cout <<"					     _/  /_/  /      __/ / _| |			\n";
cout <<"					    (,__/(,__/      (,__/ (,__/		\n";
cout <<"======================================================================\n";
cout<<"\n";
}

cin.ignore();
cout << string(15, '\n');
// second enemy encounter
cout << "You continue your journey deeper in the woods and realized the change of air between it...\n";
cout << "Sir! There's a creature heading towards us and it is huge!!!'\n";
cout << "Here is the information on the attacking creature ahead: \n";
cin.ignore();
cout << string(15, '\n');


Enemy ForestDestroyer;
ForestDestroyer.Name = "SPIDENOM";
ForestDestroyer.desaName = "EAST OF ANTARTICA";
ForestDestroyer.power = Axel2.getPower() * .5;
ForestDestroyer.health = ForestDestroyer.power + randomz(200, 100);
if(player2.strength > 100)
	{
		ForestDestroyer.power = Axel2.getPower() * randomz(5, 1) * .1;
	}
cout<<"\n";
cout <<"================================ \n";
cout <<"        /\\  .-'''-. /\\	  \n";
cout <<"       //\\/  '''  \\//\\   \n";
cout <<"       |/\\| ,;;;;;, |/\\|   \n";
cout <<"       //\\;-'''-;///\\   \n";
cout <<"      //  \\/   .   \\/  \\  \n";
cout <<"     (| ,-_| \\ | / |_-, |)  \n";
cout <<"       //`__\\.-.-./__`\\   \n";
cout <<"      // /.-(() ())-.\\ \\  \n";
cout <<"     (\\ |)   '---'   (| /)  \n";
cout <<"      ` (|           |) `   \n";
cout <<"        \\)           (/   \n";
cout <<"================================\n";
cout << "Name of Enemy: "<< ForestDestroyer.Name << endl;
cout << "Origin : " <<ForestDestroyer.schoolName << endl;
cout << "Enemy strength: " << ForestDestroyer.power << endl;
cout << "Enemy health: " << ForestDestroyer.health << endl;

cout << "Engage?								Run?\n";
cin >> engagerun;
if(engagerun == "Run" || engagerun == "run"){
		cout<< "\nIf you say so sir, we managed to escape from the monster"<<endl;
		cout<< "It was unfortnate that we runaway, this must not happen again sir!..."<<endl;
		cout<< "We must be brave and faced the challenge not run from it"<<endl;
		cin.ignore();
		cout << string(15, '\n');
	}
else{

	while(engagerun == "Engage" || engagerun == "engage" && ForestDestroyer.health > 0)
	{
		cout << "Direct Hit!\n";
		ForestDestroyer.health = ForestDestroyer.health - Axel2.getPower() * .15;
		cout << "Current health of Forest Destroyer: "<< ForestDestroyer.health << endl;
		if(ForestDestroyer.health > 0)
			{
				cout << "We are preparing to engage again, would you like to take evasive maneuvers?\n";
				cout << "Attack?								Run?\n";
				cin >> attackrun;
				while(attackrun=="Attack" || attackrun=="attack" && ForestDestroyer.health > 0){
					cout << "Direct Hit!\n";
					cout<<"second"<<endl;
					ForestDestroyer.health = ForestDestroyer.health - Axel2.getPower() * .15;
					cout << "Current health of Forest Destroyer: "<< ForestDestroyer.health << endl;
					cin>> attackrun;
				}
			}
				cout << "Sir, you really are something else...\n";
			player2.health = player2.health - (ForestDestroyer.power * .5);
			cout << "Current Health: " << player2.health << endl;
			if(attackrun == "Run" || attackrun=="run"){
				cout<< "\nIf you say so sir, we managed to escape from the monster"<<endl;
				cout<< "It was unfortnate that we runaway, this must not happen again sir!..."<<endl;
				cout<< "We must be brave and faced the challenge not run from it"<<endl;
				attackrun = "adeh";
			}
		engagerun = "adui";

	}
}
if(player2.health >= 0 && ForestDestroyer.health <= 0)
{
	cin.ignore();
	cout << string(15, '\n');
	cout << "Great shot! The enemy has been defeated!\n";
	cout << "You have defeated: SPIDENOM!\n";
	cout << "The armor is currently being repaired, and you have gained 50 extra health points!";
	cout << "You also gained 2 extra weapon!\n";
	cin.ignore();
	cout << string(15, '\n');
	weap1 = weap1 + 1;
	Axel Level2(weap2, weap1);
	player2.health = 350;
	if(player2.strength > 100)
		{
			player2.health = 100;
		}
	cout << "Your updated stats are:\n";
	cout << "Damage Per Spear: "<< Level2.getDamagePerWeap1() << endl;
  cout << "Damage Per Spear: "<< Level2.getDamagePerWeap2() << endl;
	cout << "Your armor power: "<<Level2.getPower() << endl;
	cout << "Your health is: " << player2.health << endl;
	cout << "Press enter to continue your adventure!\n";
	cin.ignore();
	cout << string(15, '\n');
}
else if(player2.health <= 0 && ForestDestroyer.health >= 0){
cout << "You have been killed by: Forest Destroyer!\n";
cout <<"================================ \n";
cout <<"        /\\  .-'''-. /\\	  \n";
cout <<"       //\\/  '''  \\//\\   \n";
cout <<"       |/\\| ,;;;;;, |/\\|   \n";
cout <<"       //\\;-'''-;///\\   \n";
cout <<"      //  \\/   .   \\/  \\  \n";
cout <<"     (| ,-_| \\ | / |_-, |)  \n";
cout <<"       //`__\\.-.-./__`\\   \n";
cout <<"      // /.-(() ())-.\\ \\  \n";
cout <<"     (\\ |)   '---'   (| /)  \n";
cout <<"      ` (|           |) `   \n";
cout <<"        \\/           (/   \n";
cout <<"================================\n";
}

cin.ignore();
cout << string(15, '\n');


// third enemy here
cout << "You travel farther and farther into the unknown, Bixby tells you you are\n";
cout << "200K KM away from Wakanda-619, so very close and yet so far.\n";
cout << "When suddenly...";
cin.ignore();
cout << string(15, '\n');

cout << "Sir, an even larger attacking monster is coming right for us!\n";
cin.ignore();
cout << string(15, '\n');

Enemy GreedyMonster;
GreedyMonster.Name = "GIANT COMMANDER";
GreedyMonster.desaName = "DEEP HOLE";
GreedyMonster.power = Axel2.getPower() * .7;
GreedyMonster.health = GreedyMonster.power + 100;
	if(player2.strength > 100)
		{
			GreedyMonster.power = Axel2.getPower() * randomz(7, 3) * .1;
		}
cout<<"\n";
cout <<"=====================================================\n";
cout <<"              ___.-~'~-._   __....__ \n";
cout <<"            .'    `    \\ ~'~        ``-. \n";
cout <<"           /` _      )  `\\              `\\ \n";
cout <<"          /`  a)    /     |               `\\ \n";
cout <<"         :`        /      |                 \\ \n";
cout <<"    <`-._|`  .-.  (      /   .            `;\\ \n";
cout <<"     `-. `--'_.'-.;\\___/'   .      .       | \\ \n";
cout <<"  _     /:--`     |        /     /        .'  \\ \n";
cout <<" ('\\   /`/        |       '     '         /    :`; \n";
cout <<" `\'\\_/`/         .\\     /`~`=-.:        /     ``\n";
cout <<"   `._.'          /`\\    |      `\\      /(\n";
cout <<"                 /  /\\   |        `Y   /  \\ \n";
cout <<"=====================================================\n";
cout<<"\n";
cout << "Name of Enemy: "<< GreedyMonster.Name << endl;
cout << "Origin: " << GreedyMonster.desaName << endl;
cout << "Enemy armor strength: " << GreedyMonster.power << endl;
cout << "Enemy health: " << GreedyMonster.health << endl;

cin.ignore();
cout << "Engage?								Run?\n";
cin >> engagerun;
if(engagerun == "Run" || engagerun == "run"){
		cout<< "\nIf you say so sir, we managed to escape from the monster"<<endl;
		cout<< "It was unfortnate that we runaway, this must not happen again sir!..."<<endl;
		cout<< "We must be brave and faced the challenge not run from it"<<endl;
		cin.ignore();
		cout << string(15, '\n');
	}
else{

	while(engagerun == "Engage" || engagerun == "engage"&& GreedyMonster.health > 0)
	{
		cout << "Direct Hit!\n";
		GreedyMonster.health = GreedyMonster.health - Axel2.getPower() * .15;
		cout << "Current health of Greedy Monster: "<< GreedyMonster.health << endl;
		if(GreedyMonster.health > 0)
			{
				cout << "We are preparing to engage again, would you like to take evasive maneuvers?\n";
				cout << "Attack?								Run?\n";
				cin >> attackrun;
				while(attackrun=="Attack" || attackrun=="attack" && GreedyMonster.health > 0){
					cout << "Direct Hit!\n";
					cout<<"second"<<endl;
					GreedyMonster.health = GreedyMonster.health - Axel2.getPower() * .15;
					cout << "Current health of Greedy Monster: "<< GreedyMonster.health << endl;
					cin>> attackrun;
				}
			}
				cout << "Sir, you really are something else...\n";
			player2.health = player2.health - (GreedyMonster.power * .5);
			cout << "Current Health: " << player2.health << endl;
			if(attackrun == "Run" || attackrun=="attack"){
				cout<< "\nIf you say so sir, we managed to escape from the monster"<<endl;
				cout<< "It was unfortnate that we runaway, this must not happen again sir!..."<<endl;
				cout<< "We must be brave and faced the challenge not run from it"<<endl;
				attackrun = "adeh";
			}
		engagerun = "adui";

	}
}
if(player2.health >= 0 && GreedyMonster.health <= 0)
{
	cin.ignore();
	cout << string(15, '\n');
	cout << "Great fight! The enemy has been defeated!\n";
	cout << "You have defeated: GIANT COMMANDER!\n";
	cout << "The armor is currently being repaired, and you have gained 50 extra health points!\n";
	cout << "You also gained 2 extra weapon!\n";
	cin.ignore();
	cout << string(15, '\n');
	weap2 = weap2 + 1;
	Axel Level2(weap2, weap1);
	player2.health = 450;
	if(player2.strength > 100)
		{
			player2.health = 100;
		}
	cout << "Your updated stats are:\n";
	cout << "Damage 1ST weapon: "<< Level2.getDamagePerWeap1() << endl;
	cout << "Damage 2ND weapon: "<< Level2.getDamagePerWeap2() << endl;
	cout << "Your health is: " << player2.health << endl;
	cout << "Press enter to continue your adventure!\n";
	cin.ignore();
	cout << string(15, '\n');
}
else if(player2.health <= 0 && GreedyMonster.health >= 0)
{
cout << "You have been killed by: Forest Eater!\n";
cout <<"=====================================================\n";
cout <<"              ___.-~'~-._   __....__ \n";
cout <<"            .'    `    \\ ~'~        ``-. \n";
cout <<"           /` _      /  `\\              `\\ \n";
cout <<"          /`  a/    /     |               `\\ \n";
cout <<"         :`        /      |                 \\ \n";
cout <<"    <`-._|`  .-.  (      /   .            `;\\ \n";
cout <<"     `-. `--'_.'-.;\\___/'   .      .       | \\ \n";
cout <<"  _     /:--`     |        /     /        .'  \\ \n";
cout <<" ('\\   /`/        |       '     '         /    :`; \n";
cout <<" `\'\\_/`/         .\\     /`~`=-.:        /     ``\n";
cout <<"   `._.'          /`\\    |      `\\      /(\n";
cout <<"                 /  /\\   |        `Y   /  \\ \n";
cout <<"=====================================================\n";
}

cin.ignore();
cout << string(15, '\n');


//Final boss!
if(player2.health > 0)
{

cout << "You have entered Wakanda-619 territory.\n";
cout << "Only a few more minutes until you have completed your quest.\n";
cout << "Presence of victory surround you shoulder";
cout << "When suddenly...";
cin.ignore();
cout << string(15, '\n');

cout << "             .-''''''-.\n";
cout << "          .-'          '-.\n";
cout << "        .'                '.\n";
cout << "       /                    \\\n";
cout << "      |,  .-.  .-.  .-.  .-, |\n";
cout << "      | /(__/  \\__)(  \\__)( |\n";
cout << "      |/     /\\     /\\     \\|\n";
cout << "      (_     ^^     ^^     _)\n";
cout << "       \\__|IIIIIIIIIIII|__/\n";
cout << "        | \\IIIIIIIIIIII/ |\n";
cout << "        \\              /\n";
cout << "         '.__________.'\n";
cout << "          '-.______.-'\n";
cout << "              \\    /\n";
cout << "               \\  /\n";
cout << "Hello " << player1.name << "..." <<endl;
cout << "My name is ?#%$!% \n";
cin.ignore();
cout << string(15, '\n');

int size = player1.name.length();
	while (size >= 0)
	{
		size = size-1;
	}

Enemy AntiPlayer;
AntiPlayer.Name = "??????";
AntiPlayer.schoolName = player1.schoolName;
AntiPlayer.desaName = player1.desaName;
AntiPlayer.power = Axel2.getPower() * 1;
AntiPlayer.health = player2.health + randomz(200, 100);
	if(player2.strength > 100)
		{
			AntiPlayer.power = Axel2.getPower();
			AntiPlayer.health = player2.health + 50;
		}
cout<<"\n";
cout <<"=====================================================\n";
cout << "             .-''''''-.\n";
cout << "          .-'          '-.\n";
cout << "        .'                '.\n";
cout << "       /                    \\\n";
cout << "      |,  .-.  .-.  .-.  .-, |\n";
cout << "      | )(__/  \\__)(  \\__)( |\n";
cout << "      |/     /\\     /\\     \\|\n";
cout << "      (_     ^^     ^^     _)\n";
cout << "       \\__|IIIIIIIIIIII|__/\n";
cout << "        | \\IIIIIIIIIIII/ |\n";
cout << "        \\              /\n";
cout << "         '.__________.'\n";
cout << "          '-.______.-'\n";
cout << "              \\    /\n";
cout << "               \\  /\n";
cout <<"=====================================================\n";
cout<<"\n";
cout << "Name of Enemy: "<< AntiPlayer.Name << endl;
cout << "Origin desasiwa: " <<AntiPlayer.desaName << endl;
cout << "Name of school: " << AntiPlayer.schoolName << endl;
cout << "Enemy armor strength: " << AntiPlayer.power << endl;
cout << "Enemy health: " << AntiPlayer.health << endl;
cout <<"THIS MONSTER COPY ALL YOUR STATUS!!";
cin.ignore();
cout << string(15, '\n');

cin.ignore();
cout << "Sir, there is no turning back now it is now or never\n";
cout << "Engage?\n";

cin >> engagerun;
while(engagerun =="Run" || engagerun =="run"){

	cout<<"\nNo Sir!There's no other option we must engage";
	cin>>engagerun;
	cin.ignore();
	cout << string(15, '\n');
		}

while(engagerun == "Engage" || engagerun == "engage" && AntiPlayer.health > 0)
	{
	cout << "Direct Hit!\n";
	AntiPlayer.health = AntiPlayer.health - Axel2.getPower() * .15;
	cout << "Current health of Anti-Self: "<< AntiPlayer.health << endl;
	if(AntiPlayer.health > 0)
		{
			cout << "We are preparing to engage again, would you like to take evasive maneuvers?\n";
			cout << "Attack?";
			cin >> attackrun;
			while(attackrun=="Attack" || attackrun =="attack" && AntiPlayer.health > 0){
				cout << "Direct Hit!\n";
				AntiPlayer.health = AntiPlayer.health - Axel2.getPower() * .15;
				cout << "Current health of Anti-Self: "<< AntiPlayer.health << endl;
				cin>> attackrun;
			}
		}

	engagerun = "other";
	}

if(player2.health <= 0)
{
	cout << "You have been killed by: Anti "<<player1.name << endl;
}
else if(AntiPlayer.health <= 0)
{
	cout << "\nCONGRATULATIONS! YOU ABLE TO FINISH THE MYSTERY WOODS!\n";
	cout<<"\n";
	cout <<"******************************************************************************* \n";
cout <<"                            .='''_;=.		\n";
cout <<"                       ,-'_,=''     `'=.		\n";
cout <<"                       '=._o`'-._        `'=.		\n";
cout <<"                           `'=._o`'=._      _`'=._ 				\n";
cout <<"                               _:=._o ''=._.'_.-='''=.			\n";
cout <<"                         __.--' , ; `'=._o.' ,-'''-._ '.		\n";
cout <<"                      ._'  ,. .` ` `` ,  `'-._'-._   '. '			\n";
cout <<"                      |o`'=._` , '` `; .'. ,  '-._'-._; ;			\n";
cout <<"                      | ;`-.o`'=._; .' ` '`.'\\` . '-._ /			\n";
cout <<"                      |o;    `'-.o`'=._``  '` '' ,__.--o;			\n";
cout <<"                      | ;     (@) `-.o `'=.`_.--'_o.-; ;			\n";
cout <<"                      |o;._           `'.o|o_.--'    ;o;			\n";
cout <<"                       '=._o--._        ; | ;        ; ;				\n";
cout <<"                            '=._o--._   ;o|o;     _._;o;			\n";
cout <<"                                 '=._o._; | ;_.--'o.--'			\n";
cout <<"                                     '=.o|o_.--''			\n";
cout <<"******************************************************************************* \n";
}
		}



cout << "Thank you for playing THE MYSTERY WOODS!\n";
}
