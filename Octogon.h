#ifndef _OCTOGON
#define _OCTOGON

class Octogon {
public:
	Octogon();
	Octogon(const int sidePar);
	void setSide(const int sidePar);
	int getSide() const;
	void display(const int sidePar);

private:
	int sideVal = 0;
	int starsToDraw;
	int spacesToDrawOutside;
	int spacesToDrawInside;
	void drawRow(const int sidePar);
	void drawStars();
	void drawSpacesInside();
};

#endif
