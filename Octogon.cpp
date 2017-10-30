#include"Octogon.h"
#include<iostream>

Octogon::Octogon() {
	sideVal = 0;
}

Octogon::Octogon(const int sidePar) {
	if (sidePar > 2 && sidePar < 9)
		sideVal = sidePar;
	else
		sideVal = 0;
}

void Octogon::setSide(const int sidePar) {
	if (sidePar > 2 && sidePar < 9)
		sideVal = sidePar;
	else
		sideVal = 0;
}

int Octogon::getSide() const {
	return sideVal;
}

void Octogon::display(const int sidePar) {
	for (int row = 0; row < ((3 * sidePar) - 2); row++) {
		if (row == 0 || row == ((3 * sidePar) - 3)) {
			starsToDraw = sidePar;
			spacesToDrawOutside = sidePar - 1;
			spacesToDrawInside = 0;
		}
		else if (row == 1 || row == ((3 * sidePar) - 4)) {
			starsToDraw = 2;
			spacesToDrawInside = sidePar;
		}
		drawRow(sidePar);
		if (row >= ((2 * sidePar) - 2)) {
			spacesToDrawOutside += 1;
			spacesToDrawInside -= 2;
		}
		else if (spacesToDrawOutside > 0 && row < ((2 * sidePar) - 1)) {
			spacesToDrawOutside -= 1;
			spacesToDrawInside += 2;
		}
	}
}

void Octogon::drawRow(const int sidePar) {
	for (int i = 0; i < spacesToDrawOutside; i++) {
		std::cout << "  ";
	}
	drawStars();
}

void Octogon::drawStars() {
	for (int j = 0; j < starsToDraw; j++) {
		std::cout << "* ";
		if (j == 0)
			drawSpacesInside();
	}
	std::cout << std::endl;
}

void Octogon::drawSpacesInside() {
	for (int k = 0; k < spacesToDrawInside; k++) {
		std::cout << "  ";
	}
}