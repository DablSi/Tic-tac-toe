#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <ctime>
using namespace std;

void Players_turn(vector<char>& field, char symbol, string note) {
	int place = -1;
	while (place == -1 || place > 8 || place < 0) {
		cout << note;
		cin >> place;
		if (field[--place] != ' ') {
			cout << "Choose an empty place!" << endl;
			place = -1;
		}
	}
	field[place] = symbol;
}

void Place_generation(vector<char>& field) {
	/*if(на одной линии есть две фишки){поставить свою}
	  else{friends[rand]}*/
	srand(time(0));

	int turn = 0;
	//1 line
	if (field[0] == 'X' && field[1] == 'X' && field[2] == ' ' && turn == 0) {
		++turn;
		field[2] = 'X';
	}
	else if (field[0] == 'X' && field[2] == 'X' && field[1] == ' ' && turn == 0) {
		++turn;
		field[1] = 'X';
	}
	else if (field[1] == 'X' && field[2] == 'X' && field[0] == ' ' && turn == 0) {
		++turn;
		field[0] = 'X';
	}

	else if (field[0] == 'O' && field[1] == 'O' && field[2] == ' ' && turn == 0) {
		++turn;
		field[2] = 'X';
	}
	else if (field[0] == 'O' && field[2] == 'O' && field[1] == ' ' && turn == 0) {
		++turn;
		field[1] = 'X';
	}
	else if (field[1] == 'O' && field[2] == 'O' && field[0] == ' ' && turn == 0) {
		++turn;
		field[0] = 'X';
	}

	//2 line
	else if (field[3] == 'X' && field[4] == 'X' && field[5] == ' ' && turn == 0) {
		++turn;
		field[5] = 'X';
	}
	else if (field[3] == 'X' && field[5] == 'X' && field[4] == ' ' && turn == 0) {
		++turn;
		field[4] = 'X';
	}
	else if (field[4] == 'X' && field[5] == 'X' && field[3] == ' ' && turn == 0) {
		++turn;
		field[3] = 'X';
	}

	else if (field[3] == 'O' && field[4] == 'O' && field[5] == ' ' && turn == 0) {
		++turn;
		field[5] = 'X';
	}
	else if (field[3] == 'O' && field[5] == 'O' && field[4] == ' ' && turn == 0) {
		++turn;
		field[4] = 'X';
	}
	else if (field[4] == 'O' && field[5] == 'O' && field[3] == ' ' && turn == 0) {
		++turn;
		field[3] = 'X';
	}
	
	//3 line
	else if (field[6] == 'X' && field[7] == 'X' && field[8] == ' ' && turn == 0) {
		++turn;
		field[8] = 'X';
	}
	else if (field[6] == 'X' && field[8] == 'X' && field[7] == ' ' && turn == 0) {
		++turn;
		field[7] = 'X';
	}
	else if (field[7] == 'X' && field[8] == 'X' && field[6] == ' ' && turn == 0) {
		++turn;
		field[6] = 'X';
	}

	else if (field[6] == 'O' && field[7] == 'O' && field[8] == ' ' && turn == 0) {
		++turn;
		field[8] = 'X';
	}
	else if (field[6] == 'O' && field[8] == 'O' && field[7] == ' ' && turn == 0) {
		++turn;
		field[7] = 'X';
	}
	else if (field[7] == 'O' && field[8] == 'O' && field[6] == ' ' && turn == 0) {
		++turn;
		field[6] = 'X';
	}

	//4 line
	else if (field[0] == 'X' && field[3] == 'X' && field[6] == ' ' && turn == 0) {
		++turn;
		field[6] = 'X';
	}
	else if (field[0] == 'X' && field[6] == 'X' && field[3] == ' ' && turn == 0) {
		++turn;
		field[3] = 'X';
	}
	else if (field[3] == 'X' && field[6] == 'X' && field[0] == ' ' && turn == 0) {
		++turn;
		field[0] = 'X';
	}

	else if (field[0] == 'O' && field[3] == 'O' && field[6] == ' ' && turn == 0) {
		++turn;
		field[6] = 'X';
	}
	else if (field[0] == 'O' && field[6] == 'O' && field[3] == ' ' && turn == 0) {
		++turn;
		field[3] = 'X';
	}
	else if (field[3] == 'O' && field[6] == 'O' && field[0] == ' ' && turn == 0) {
		++turn;
		field[0] = 'X';
	}

	//5 line
	else if (field[1] == 'X' && field[4] == 'X' && field[7] == ' ' && turn == 0) {
		++turn;
		field[7] = 'X';
	}
	else if (field[1] == 'X' && field[7] == 'X' && field[4] == ' ' && turn == 0) {
		++turn;
		field[4] = 'X';
	}
	else if (field[4] == 'X' && field[7] == 'X' && field[1] == ' ' && turn == 0) {
		++turn;
		field[1] = 'X';
	}
	
	else if (field[1] == 'O' && field[4] == 'O' && field[7] == ' ' && turn == 0) {
		++turn;
		field[7] = 'X';
	}
	else if (field[1] == 'O' && field[7] == 'O' && field[4] == ' ' && turn == 0) {
		++turn;
		field[4] = 'X';
	}
	else if (field[4] == 'O' && field[7] == 'O' && field[1] == ' ' && turn == 0) {
		++turn;
		field[1] = 'X';
	}
	
	//6 line
	else if (field[2] == 'X' && field[5] == 'X' && field[8] == ' ' && turn == 0) {
		++turn;
		field[8] = 'X';
	}
	else if (field[2] == 'X' && field[8] == 'X' && field[5] == ' ' && turn == 0) {
		++turn;
		field[5] = 'X';
	}
	else if (field[5] == 'X' && field[8] == 'X' && field[2] == ' ' && turn == 0) {
		++turn;
		field[2] = 'X';
	}

	else if (field[2] == 'O' && field[5] == 'O' && field[8] == ' ' && turn == 0) {
		++turn;
		field[8] = 'X';
	}
	else if (field[2] == 'O' && field[8] == 'O' && field[5] == ' ' && turn == 0) {
		++turn;
		field[5] = 'X';
	}
	else if (field[5] == 'O' && field[8] == 'O' && field[2] == ' ' && turn == 0) {
		++turn;
		field[2] = 'X';
	}

	//7 line
	else if (field[0] == 'X' && field[4] == 'X' && field[8] == ' ' && turn == 0) {
		++turn;
		field[8] = 'X';
	}
	else if (field[0] == 'X' && field[8] == 'X' && field[4] == ' ' && turn == 0) {
		++turn;
		field[4] = 'X';
	}
	else if (field[4] == 'X' && field[8] == 'X' && field[0] == ' ' && turn == 0) {
		++turn;
		field[0] = 'X';
	}

	else if (field[0] == 'O' && field[4] == 'O' && field[8] == ' ' && turn == 0) {
		++turn;
		field[8] = 'X';
	}
	else if (field[0] == 'O' && field[8] == 'O' && field[4] == ' ' && turn == 0) {
		++turn;
		field[4] = 'X';
	}
	else if (field[4] == 'O' && field[8] == 'O' && field[0] == ' ' && turn == 0) {
		++turn;
		field[0] = 'X';
	}

	//8 line
	else if (field[2] == 'X' && field[4] == 'X' && field[6] == ' ' && turn == 0) {
		++turn;
		field[6] = 'X';
	}
	else if (field[2] == 'X' && field[6] == 'X' && field[4] == ' ' && turn == 0) {
		++turn;
		field[4] = 'X';
	}
	else if (field[4] == 'X' && field[6] == 'X' && field[2] == ' ' && turn == 0) {
		++turn;
		field[2] = 'X';
	}

	else if (field[2] == 'O' && field[4] == 'O' && field[6] == ' ' && turn == 0) {
		++turn;
		field[6] = 'X';
	}
	else if (field[2] == 'O' && field[6] == 'O' && field[4] == ' ' && turn == 0) {
		++turn;
		field[4] = 'X';
	}
	else if (field[4] == 'O' && field[6] == 'O' && field[2] == ' ' && turn == 0) {
		++turn;
		field[2] = 'X';
	}

	else {
		int random = rand() % 8;
		while (field[random] != ' ') {
			random = rand() % 8;
		}
		field[random] = 'X';
	}
}

string If_win(vector<char> field, string x, string o) {
	if (field[0] == 'X' && field[1] == 'X' && field[2] == 'X') {
		return x;
	}

	else if (field[0] == 'O' && field[1] == 'O' && field[2] == 'O') {
		return o;
	}

	//2 line
	else if (field[3] == 'X' && field[4] == 'X' && field[5] == 'X') {
		return x;
	}

	else if (field[3] == 'O' && field[4] == 'O' && field[5] == 'O') {
		return o;
	}

	//3 line
	else if (field[6] == 'X' && field[7] == 'X' && field[8] == 'X') {
		return x;
	}

	else if (field[6] == 'O' && field[7] == 'O' && field[8] == 'O') {
		return o;
	}

	//4 line
	else if (field[0] == 'X' && field[3] == 'X' && field[6] == 'X') {
		return x;
	}

	else if (field[0] == 'O' && field[3] == 'O' && field[6] == 'O') {
		return o;
	}

	//5 line
	else if (field[1] == 'X' && field[4] == 'X' && field[7] == 'X') {
		return x;
	}

	else if (field[1] == 'O' && field[4] == 'O' && field[7] == 'O') {
		return o;
	}

	//6 line
	else if (field[2] == 'X' && field[5] == 'X' && field[8] == 'X') {
		return x;
	}

	else if (field[2] == 'O' && field[5] == 'O' && field[8] == 'O') {
		return o;
	}

	//7 line
	else if (field[0] == 'X' && field[4] == 'X' && field[8] == 'X') {
		return x;
	}

	else if (field[0] == 'O' && field[4] == 'O' && field[8] == 'O') {
		return o;
	}

	//8 line
	else if (field[2] == 'X' && field[4] == 'X' && field[6] == 'X') {
		return x;
	}

	else if (field[4] == 'O' && field[6] == 'O' && field[2] == 'O') {
		return o;
	}
	int space = 0;
	for (auto i : field) {
		if (i == ' ') {
			++space;
		}
	}
	if (space == 0) {
		return "Draw!";
	}
	return "";
	
}

void Print_field(vector<char> field) {
	cout << endl;
	cout << "| ";
	for (int i = 0; i < 9; ++i) {
		cout << field[i] << " | ";
		if (i == 2 || i == 5 || i == 8) {
			cout << endl;
		}
		if (i == 2 || i == 5) {
			cout << "------------" << endl;
			cout << "| ";
		}
	}
	cout << endl;
}

int main()
{
	vector<char> field(9, ' ');
	cout << "Choose game mode:\n1 with computer\n2 with friend\n";
	string game_mode;
	getline(cin, game_mode);

	cout << "Board positions are numbered so: " << endl;
	cout << "| 1 | 2 | 3 |\n------------\n| 4 | 5 | 6 |\n------------\n| 7 | 8 | 9 |\n";

	if (game_mode == "1" || game_mode == "with computer" ||
		game_mode == "computer" || game_mode == "1 with computer") {
		string x = "You lost!";
		string o = "You won!";
		cout << "You are O, Im X" << endl;
		string end;
		while (end.empty()) {
			Players_turn(field, 'O', "Your turn: ");
			Print_field(field);
			end = If_win(field, x, o);
			if (end.empty()) {
				Place_generation(field);
				Print_field(field);
				end = If_win(field, x, o);
			}
		}
		cout << end << endl;
	}
	else if(game_mode == "2" || game_mode == "with friend" ||
		game_mode == "friend" || game_mode == "2 with friend"){
		 string x = "X won!";
		 string o = "O won!";
		 cout << "O is first" << endl;
		 string end;
		 while (end.empty()) {
			Players_turn(field, 'O', "O's turn: ");
			Print_field(field);
			end = If_win(field, x, o);
			if (end.empty()) {
				Players_turn(field, 'X', "X's turn: ");
				Print_field(field);
				end = If_win(field, x, o);
			}
		}
		cout << end << endl;
	}
	else {
		while (game_mode != "1" || game_mode != "2" ||
			game_mode != "with computer" || game_mode != "with friend" ||
			game_mode != "computer" || game_mode != "friend" ||
			game_mode != "1 with computer" || game_mode != "2 with friend") {
			getline(cin, game_mode);
		}
	}

	system("pause");
    return 0;
}