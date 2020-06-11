#include <iostream>
#include <iomanip>
#include <string>
//Sounds
#include <Windows.h>
#include <MMSystem.h>
//Randoms 
#include <random>
#include <cstdlib>
#include <ctime>
//Dynamic Arrays
#include <vector>
// Sleep Function
#include <time.h>

using namespace std;
int bytes(string);
int Search(string, char);

int main() {
	string word;
	cout << "Type in a string!" << endl;
	cin >> word;
	cout << "There are " << bytes(word) << " characters in the string." << endl;
	char letter;
	cout << "What letter are you looking for?" << endl;
	cin >> letter;
	cout << letter << " is in the string " << word << " " << Search(word, letter) << " times." << endl;

	system("PAUSE");
	return 0;
}
int bytes(string word) {
	word = word.substr(1);
	if (word != "")
		return bytes(word) + 1;
	else
		return 1;
}
int Search(string word, char letter) {
	if (word == "")
		return 0;
	else 
	{
		if (letter == word[0])
			return 1 + Search(word.substr(1), letter);
		else
			return Search(word.substr(1), letter);
	}
}