
//Daniel Van Sciver

#include <iostream>
#include <string>
#include "windows.h" 
#include <ctype.h>
#define _WIN32_WINNT 0x0500

using namespace std;

void IGNLogo();
void NoireLogo();
void TruthDoubtLie(string Truth, string Doubt, string Lie);


string name;
bool playagain;
string x;
string response;
int truth = 0;
int doubt = 0;
int lie = 0;
int count = 0;
HANDLE hConsole;
HWND console;
RECT r;
int main()
{
	while (playagain = true)
	{
		console = GetConsoleWindow();
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		GetWindowRect(console, & r);
		MoveWindow(console, r.left, r.top, 800, 600, TRUE);

		system("cls");
		cout <<"Daniel Van Sciver presents...\n" << endl;
		Sleep(1000);
		system("cls");
		Sleep(1000);
		IGNLogo();
		Sleep(1000);
		NoireLogo();
		Sleep(2500);
		system("cls");

		cout << "\n Conners: Welcome to the IGNPD. What's your name, kid?\n" << endl;
		cin >> name;
		cout << "\n Conners: It's nice to meet you Detective " << name << ". Please, follow me.\n \n" << endl;

		while(response != "2" && response != "1")
		{
			cout << "Type 1 to follow.\n" << endl;
			cout << "Type 2 to ignore.\n" << endl;
			cin >> response;
			if (response == "1")
			{
				cout << "\n Conners: Here's your office.\n We have a suspect about to come in and we need you to see what this knucklehead knows about the crimes against the game industry. \n" << endl;
			}
			else if (response == "2")
			{
				cout << "\n Conners: Hello? You deaf or somethin, " << name << "?\n Get over here or we'll find someone who can follow orders.\n Our suspect is here and we don't have all day.\n" << endl;
			}
			else
			{
				cout << "Not a valid response.\n" << endl;
			}
		}

		response = "-1";
		while(response != "3" && response != "2" && response != "1")
		{
			cout << "Choose dialogue: \n 1. So who's the punk? \n 2. What's the crimes? \n 3. Be a jerk. \n" << endl;
			cin >> response;
			if (response == "1")
			{
				cout << "\n Conners: His name is Elbert Ainstein.\n He's definitely got some screws loose. \n Be careful with how you respond to him. \n" << endl;
			}
			else if (response == "2")
			{
				cout << "\n Conners: There are a handful.\n When something went wrong in the game industry, \n his fingers were somewhere on it.  \n He's got quite the reputation, \n but this if the first time anyone's gotten their hands on him. \n" << endl;
			}
			else if (response == "3")
			{
				cout << "\n Conners: Grow up, kid.\n We've got a city to clean \n and I'll be damned if you come in here and stink up the place. \n" << endl;
			}
			else
			{
				cout << "Not a valid response.\n" << endl;
			}
		}

		cout << " Here he comes. Take a seat. I'll be right outside if things get sketchy. \n" << endl;

		Sleep(5000);
		cout << "....." << endl; 
		Sleep(3000);
		cout << "....." << endl;
		Sleep(1000); 
		cout << "....!\n" << endl;
		Sleep(1000);

			cout << "Elbert: Hello Detective " << name << ". You gonna shake me down?\n" << endl;

			cout << name << ": Ok Elbert. \n Lets get down to it. \n What do you know about the PSN outage?\n" << endl;
	
			cout << "Elbert: I read something about it on IGN, but I'm more of an Xbox kind of guy.\n I didn't pay much attention to it.\n\n" << endl;

				TruthDoubtLie("Quit wasting my time with these stupid questions, Detective.\n\n", 
							  "Why would I lie to you?\n It's not my fault Sony has been having...security issues.\n\n", 
							  "Ok, ok. I did it. I stole those identities.\n It wasn't really hard.\n I just emailed them and they sent me copy of their database.\n\n");

			cout << name << ": So, you say you're an Xbox guy.\n There wouldn't happen to be a connection between you\n and the Red Ring of death cases would there?\n" << endl;

			cout << "Elbert: Of course not!\n You know how Microsoft can be with their products.\n They don't need me around for something to mess up.\n\n" << endl;

				TruthDoubtLie("It only makes sense with Microsoft's track record.\n I'm glad you're sensible enough.\n\n",
							  "You have doubts? Look at Vista.\n\n",
							  "I didn't do it I swear!\n Microsoft is just incompetent!\n...although they have never lost all their users data\n...yet.\n\n");

			cout << name << ": We have a witness that claims they saw you at Nintendo\n just before they announced the disastrous Wii system.\n" << endl;
			cout << "Elbert: They got it all wrong.\n I was just trying to get them to scrap the project\n and keep up with the new gen.\n Instead, my Granny has a shiny new paper weight.\n\n" << endl;
			
				TruthDoubtLie("Obviously they didn't listen to me.\n How they sold so many systems is a crime in itself.\n Project Cafe sounds like a few notes I left them.\n\n",
							  "It's all a gimmick!\n That's small time.\n I wouldn't want my name on that.\n\n",
							  "I'm not lying.\n You and I both know they don't listen.\n They are unstoppable!\n\n");

			cout << name << ": Activision's actions in the past years have your name written all over it.\n What do you have to say for yourself?\n" << endl;
		
			cout << "Elbert: I think you have me confused with someone else.\n Kotick, perhaps?\n\n" << endl;
			
				TruthDoubtLie("He's as corrupt as it gets.\n His boys run a several joints down the alley.\n You've seen one of his places, you've seen em all.\n\n",
							  "Activision doesn't need me.\n Get Blizzard and their boys in here.\n They'll tell you.\n\n",
							  "You caught me, Detective.\n But you'll never be able to stop Activision.\n Their brainwashing and carbon copy games will prevail!\n\n");

			cout << name << ": It has been over ten years since the beginning of the development\n of Duke Nukem Forever. There is evidence that someone has repeatedly tampered\n with the source over the years. We have reason to suspect it was you.\n" << endl;

			cout << "Elbert: I'm here to kick ass and chew bubble gum and I'm all out of gum.\n\n" << endl;

			response = "-1";
		while(response != "3" && response != "2" && response != "1")
		{
			cout << "Choose: \n 1.Always bet on the Duke!  \n 2.Uhm...  \n 3.What?!? \n" << endl;
			cin >> response;

			if (response == "1")
			{
				cout << "\n Elbert: Shake it, Baby.\n\n" << endl;
				truth++;
			}

			if (response == "2")
			{
				cout << "\n Elbert: There's only two ways this can end, and in both of them you die.\n\n" << endl;
				doubt++;
			}

			if (response == "3")
			{
				cout << "\n Elbert: Hail to the king, Baby.\n\n" << endl;
				lie++;
			}
			if (response != "1" && response !="2" && response != "3")
			{
				cout << "Not a valid response. The Duke demands valid input!\n" << endl;
			}

		}

		cout << name << ": Anyways...Do you remember Sega?\n Back when they were on top of the world?\n What happened?\n\n" << endl;

		cout << "Elbert: You're trying to pin the murder of Sega on me?\n I can only dream that I had that kind of skill.\n\n" << endl;

			TruthDoubtLie("How can Sonic continually be ruined?\n It's still a mystery to me.\n\n",
						  "Dreamcast 2. Keep your fingers crossed.\n\n",
						  "Well i'm flattered you think I'm so capable.\n But I can't take the blame for this one.\n\n");

			cout << name << ": The Nintendo 3DS seemed like a great handheld at first,\n yet it's just another unnecessary gimmick without release titles.\n\n" << endl;

			cout << "Elbert: You don't like Nintendogs PLUS cats!? But they are so adorable!\n\n" << endl;

			TruthDoubtLie("Do your eyes hurt?\n\n",
						  "Just wait for the 3DS lite.\n\n",
						  "Nintendo deserved to be punished after the reign of Wii.\n Remember an E3 window worth of games?\n You'll get your ports soon. Muwhahaha!\n\n");

			cout << name << ": That's all for now, Elbert.\n Conners will be in here shortly to figure what we're going to do with you.\n\n" << endl;
			Sleep(6000);
			cout << "Elbert: If we done here, Detective, I think I'll make my way back home.\n\n" << endl;

			Sleep(9000);
			system("cls");

			if (truth >= 5)
			{
				cout << "Ending 1: Elbert walks out of Detective " << name << "'s office\n and smiles slyly at Conners. Conners takes out his pistol and orders Elbert to get back into the office.\n\n" << endl;
			    cout << "Conners: Where do you think you're going, boy?\n\n" << endl;
				cout << "He puts his gun to the back of Elbert's head.\n Conners looks at " << name << " with disappointment.\n\n" << endl;
				cout << "Conners: You really think this bum is innocent?\n Maybe you weren't cut out for this job after all.\n\n" << endl;
				cout << "Elbert makes an attempt to disarm him by grabbing his gun.\n The struggle lasts only a few seconds before a shot is fired.\n " << name << " is shot in the heart and falls to the ground\n taking one last blood filled breath.\n Conners recovers his grip on his gun and pistol whips Elbert, knocking him out.\n Conners calls out the office for backup as " << name << "'s blood soaks into the carpet.\n\n"  << endl;

			}

			else if (doubt >= 4)
			{
				cout << "Ending 2: Elbert starts to walk out of Detective " << name << "'s office\n but Conners opens the door just as he reaches for the door knob.\n\n" << endl;
				cout << "Conners: All done answering questions, Elbert?\n" << endl;
				cout << "Elbert: You boys don't have enough on me, Conners.\n Quit wasting my time and come back when you have real evidence and lots of it.\n\n" <<endl;
				cout << "Conners takes a picture out from his jacket pocket and throws it on the table.\n\n" << endl;
				cout << "Conners: Virtual Boy. We got ya, punk.\n\n" << endl;
			}

			else if (lie >=3 )
			{
				cout << "Ending 3: Elbert starts to walk out but you stand up to stop him.\n\n" << endl;
				cout << name << ": Listen, twerp, you aren't goin anywhere but behind bars!\n\n" << endl;
				cout << name << " pulls out a gun.\n Elbert puts his hands in the air.\n\n" << endl;
				cout << "Elbert: You can't kill me. If you do, the news will be bland.\n I generate the contraversy. I keep the headlines interesting.\n IGN needs me!\n\n" << endl;
				cout << name << " puts the gun back into the holster and approaches Elbert.\n\n" << endl;
				cout << name << ": IGN doesn't need you. Gamers don't need you.\n What we need is good games. You forgot the reason we are here, Elbert.\n Because games bring us together with fun,\n not how much frustration or bad news can be made out of them.\n\n" << endl;
				cout << "Elbert raises his fist, but before he can throw a punch,\n " << name << " slams a knee into his gut and throws him into the wall.\n Conners busts into the room as Elbert begins shouting random gibberish.\n\n" << endl;
				cout << name << ": Book him. I don't want this scum anywhere around E3.\n\n" << endl;
			}

			else
			{
			   
			}

			Sleep(9000);

			cout << "    _/_/_/_/  _/_/_/  _/      _/   " << endl;
			cout << "   _/          _/    _/_/    _/    " << endl;
			cout << "  _/_/_/      _/    _/  _/  _/     " << endl;
			cout << " _/          _/    _/    _/_/      " << endl;
			cout << "_/        _/_/_/  _/      _/      \n\n" << endl;


			cout << "Would you like to play again? Y/N?" << endl;
			cin >> x;

			if ( x == "yes" || x == "Yes" || x == "Y" || x =="y")
			{
				playagain = true;
			}

			else
			{
				return 0;
			}
	}

}


void IGNLogo()
{
	SetConsoleTextAttribute(hConsole,12);

	cout << "        :;;;                                               " << endl;
	cout << "      ,`;;;; ;       ";
	SetConsoleTextAttribute(hConsole, 8);
	cout << "+++:    `++++++++++:  :+++;      +++  " << endl;
	SetConsoleTextAttribute(hConsole, 12);
	cout << "     ;; ;;;; ;;      ";
	SetConsoleTextAttribute(hConsole, 8);
	cout << "'++:   ++++++++++++: .+++++:     +++  " << endl;
	SetConsoleTextAttribute(hConsole, 12);
	cout << "    ;;: ;;;;..;;     ";
	SetConsoleTextAttribute(hConsole, 8);
	cout << "'++:  +++++++++++++: +++++++     +++  " << endl;
	SetConsoleTextAttribute(hConsole, 12);
	cout << "   `;;  `;;:  .;;    ";
	SetConsoleTextAttribute(hConsole, 8);
	cout << "'++: ;+++'           +++ +++'    +++  " << endl;
	SetConsoleTextAttribute(hConsole, 12);
	cout << "     .    ,   .`     ";
	SetConsoleTextAttribute(hConsole, 8);
	cout << "'++: +++:            +++`.+++    +++  " << endl;
	SetConsoleTextAttribute(hConsole, 12);
	cout << "  ;;;;;      :;;;;,  ";
	SetConsoleTextAttribute(hConsole, 8);
	cout << "'++:`+++  ;++++++++` +++` ++++   +++  " << endl;
	SetConsoleTextAttribute(hConsole, 12);
	cout << "  ;;;;;;    :;;;;;,  ";
	SetConsoleTextAttribute(hConsole, 8);
	cout << "+++:,+++  ;+++++++++ +++`  +++.  +++  " << endl;
	SetConsoleTextAttribute(hConsole, 12);
	cout << "  ''''',     ''''':  ";
	SetConsoleTextAttribute(hConsole, 8);
	cout << "###:.###  '######### ###`  +###  ###  " << endl;
	SetConsoleTextAttribute(hConsole, 12);
	cout << "  .;'':       ''',   ";
	SetConsoleTextAttribute(hConsole, 8);
	cout << "+##: ###         ### ###`   ###; ###  " << endl;
	SetConsoleTextAttribute(hConsole, 12);
	cout << "   ,`    :'     .    ";
	SetConsoleTextAttribute(hConsole, 8);
	cout << "+##: ####        ### ###`   ;### ###  " << endl;
	SetConsoleTextAttribute(hConsole, 12);
	cout << "    ''  ''''  ;',    ";
	SetConsoleTextAttribute(hConsole, 8);
	cout << "+##: `####+;;;;;;### ###`    #######  " << endl;
	SetConsoleTextAttribute(hConsole, 12);
	cout << "    .'' ''''`'''     ";
	SetConsoleTextAttribute(hConsole, 8);
	cout << "+##:  ;############# ###`    `######  " << endl;
	SetConsoleTextAttribute(hConsole, 12);
	cout << "     .' '''' ';      ";
	SetConsoleTextAttribute(hConsole, 8);
	cout << "'##:   .##########@  ###`     #####'  " << endl;
	SetConsoleTextAttribute(hConsole, 12);
	cout << "       `'''' `       ";
	SetConsoleTextAttribute(hConsole, 8);
	cout << " '+,     `'++++++;    ++`      :##.   " << endl;
}

void NoireLogo()
{
	SetConsoleTextAttribute(hConsole,12);
	cout << " __      ___   _ _ _ _ _ _ _________ _________   __________ " << endl;
	cout << "|  \\    |   | /           \\_     __|          \\ |         | " << endl; 
	cout << "|   \\   |   | |   ____    | |   |  |   __       |    _____| " << endl;
	cout << "|    \\  |   | |  |    |   | |   |  |  |  \\    / |   |       " << endl;
	cout << "|     \\ |   | |  |    |   | |   |  |  |__/   /  |   |       " << endl;
	cout << "|           | |  |    |   | |   |  |        /   |   |___    " << endl; 
	cout << "|           | |  |    |   | |   |  |       /    |       |   " << endl;
	cout << "|   .       | |  |    |   | |   |  |       \\    |    ___|   " << endl;
	cout << "|   |\\      | |  |    |   | |   |  |    _   \\   |   |       " << endl;
	cout << "|   | \\     | |  |    |   | |   |  |   | \\   \\  |   |       " << endl;
	cout << "|   |  \\    | |  |____|   | |   |  |   |  \\   \\ |   |_____  " << endl;
	cout << "|   |   \\   | |           | |   |__|   |   \\   \\|         | " << endl;
	cout << "|___|    \\__| \\___________/ _______|___|    \\___\\_________| \n" << endl;
}


void TruthDoubtLie(string Truth, string Doubt, string Lie)
{
	response = "-1";
	while(response != "3" && response != "2" && response != "1"){
		cout << "Choose: \n 1.Truth.  \n 2.Doubt.  \n 3.Lie \n" << endl;
		cin >> response;

		if (response == "1")
		{
			cout << "\n Elbert: " << Truth << endl;
			truth++;
		}

		if (response == "2")
		{
			cout << "\n Elbert: " << Doubt << endl;
			doubt++;
		}

		if (response == "3")
		{
			cout << "\n Elbert: " << Lie << endl;
			lie++;
		}
		if (response != "1" && response !="2" && response != "3")
		{
			cout << "Not a valid response.\n" << endl;
		}

	}
}