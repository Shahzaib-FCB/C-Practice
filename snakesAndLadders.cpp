#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GAME_LENGTH 100
using namespace std;

void printArray(char charArray[]);

int main(int argc, char const *argv[]){
	char game[100];
	int randomNumber;
	int player1_location = 0, player2_location = 0;
	string player1_name, player2_name;

	srand(time(NULL));

	// INITIALIZING with X
	for (int i = 0; i < 100; ++i)
		game[i] = 'X';
	cout << "INITIALIZING!!!" << endl;
	printArray(game);

	// SNAKES
	cout << "\nIntroducing SNAKES!!!" << endl;
	for (int i = 0; i < 5; ++i){
		// between 5 - 100; Can't be at 0 (initial location)
		randomNumber = rand() % 100 + 5;
		game[randomNumber] = 'S';
		cout << randomNumber << " ";
	}
	printArray(game);

	// LADDERS
	cout << "\nIntroducing LADDERS!!!" << endl;
	for (int i = 0; i < 5; ++i){
		// between 1 - 95; Can't be at 0 (initial location)
		randomNumber = rand() % 95 + 1;
		game[randomNumber] = 'L';
		cout << randomNumber << " ";
	}
	printArray(game);

	cout << endl << "PLAYERS NAME COLLECTION"<< endl;
	cout << "Enter Player 1's Name: ";
	cin >> player1_name;

	cout << "Enter Player 2's Name: ";
	cin >> player2_name;

	cout << "\nPlayers: \t\t" << player1_name << "\t\t" << player2_name << endl;

	while(true){
		// Player 1's Turn
		randomNumber = rand() % 6 + 1;
		cout << "Player 1, "<< player1_name << "\nDie Value : " << randomNumber << endl;
		player1_location += randomNumber;
		// reversing turn
		if (player1_location > 100)
			player1_location -= randomNumber;

		cout << "Location : " << player1_location << endl;
		if (game[player1_location] == 'L'){
			player1_location += 5;
			// reversing turn
			if (player1_location > 100)
				player1_location -= 5;
			cout << "Ladder\nLocation : " << player1_location << endl;
		}

		if (game[player1_location] == 'S'){
			player1_location -= 5;
			cout << "Snake\nLocation : " << player1_location << endl;
		}
		cin.get();

		if (player1_location == 100){
			cout << "Player 1, " << player1_name << " is the Winner!!!" << endl;
			break;
		}

		// Player 2's Turn
		randomNumber = rand() % 6 + 1;
		cout << "Player 2, " << player2_name << "\nDie Value : " << randomNumber << endl;
		player2_location += randomNumber;
		// reversing turn
		if (player2_location > 100)
			player2_location -= randomNumber;

		cout << "Location : " << player2_location << endl;
		if (game[player2_location] == 'L'){
			player2_location += 5;
			// reversing turn
			if (player2_location > 100)
				player2_location -= 5;
			cout << "Ladder\nLocation : " << player2_location << endl;
		}

		if (game[player2_location] == 'S'){
			player2_location -= 5;
			cout << "Snake\nLocation : " << player2_location << endl;
		}

		if (player2_location == 100){
			cout << "Player 2, " << player2_name << " is the Winner!!!" << endl;
			break;
		}

		cin.get();
	}

	return 0;
}

// This variable is needed because '\0' is not rendered correctly
// if printed by using 'cout << game << endl;'
void printArray(char charArray[]){
	for (int i = 0; i < GAME_LENGTH; ++i)
		cout << charArray[i];
	cout<<endl;
}