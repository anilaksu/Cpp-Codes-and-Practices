#include<iostream>
#include"MathClass.h"
using namespace std;

class Game {

public:
	Game(int a) {
		this->a = a;
	}
	void showInfo() const {
		cout << "Game Info: " << endl;
		cout << this->a << endl;
	}

private:
	int a;

	friend void getGameInfo(const Game& game);
};
class Gamer {
public:
	static int gamers;   // Every class will have the same gamers
	static void getID(int ID) {
		cout << "Member ID is " << ID << endl;
	}
	int i;  

	Gamer(int age, int Experience) {
		this->age = age;
		this->Experience = Experience;
		gamers++;
		cout << "New gamer generated" << endl;
	}

private:
	int age;
	int Experience;
	int N_game;
	Game *game1;

	friend void showInfos(Gamer gamer);         // friend function 
	friend class GameProducer;                  // friend class
};

int Gamer::gamers = 0;

void showInfos(Gamer gamer) {

	//static int i = 3;
	//i++;
	cout << " Gamer age: " << gamer.age << endl;
	cout << " Gamer experience: " << gamer.Experience << endl;
}

class GameProducer {
public:
	static void getGamerData(Gamer gamer) {
		cout << " Gamer age: " << gamer.age << endl;
		cout << " Gamer experience: " << gamer.Experience << endl;
	}
};

void getGameInfo(const Game &game) {
	cout << "Game ID: " << endl;
	cout << game.a << endl;
}

int main() {

	//Gamer::getID(27);
	Gamer gamer1(27,5);
	Game game1(10);
	//Gamer gamer2;
	//Gamer gamer3;
	//int a[] = { 10,20,30,40,50 };

	cout << "Number of gamers" << endl;
	cout << Gamer::gamers << endl;

	showInfos(gamer1);
	//cout << game1.a << endl;
	game1.showInfo();
	getGameInfo(game1);
	//for (int i = 0; i < 5; i++)
	//	cout << a[i] << endl;
	//Test();
	//MathClass::cube(3);
	GameProducer::getGamerData(gamer1);
	//Test();
	//Test();

	return 0;
}