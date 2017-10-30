#include<iostream>
#include"Octogon.h"
using namespace std;

void getUserNum(int &userNumPar);
void drawAnOctogon(char &userChoice);

int main() {
	//declarations
	char userChoice = ' ';

	//get user input
	drawAnOctogon(userChoice);

	return 0;	
}

void getUserNum(int &userNumPar) {
	cout << "Enter the octogon side value: ";
	cin >> userNumPar;
	if (userNumPar < 3 || userNumPar > 8) {
		cout << "The side value must be no less than 3 and no greater than 8." << endl << endl;
		getUserNum(userNumPar);
	}
}

void drawAnOctogon(char &userChoice) {
	int userNum = 0;
	cout << "Would you like to draw an Octagon? (Y / N) ";
	cin >> userChoice;
	if (userChoice == 'n' || userChoice == 'N') {
		return;
	}
	else {
		Octogon octogon;
		getUserNum(userNum);
		octogon.setSide(userNum);
		octogon.display(userNum);
		cout << endl;
		drawAnOctogon(userChoice);
	}
}
