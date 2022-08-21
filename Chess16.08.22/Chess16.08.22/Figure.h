#pragma once
#include <iostream>

class Figure {
public:
	Figure();;
	Figure(int xPos, int yPos);
	std::string GetColor();
	std::string GetFigureld();
	bool SetCurrentCoordinates(int xPos, int yPos);
	int GetX();
	int GetY();

private:
	int m_xPosFigure = 0;
	int m_yPosFigure = 0;
	std::string m_color = "";
	std::string m_figurled = "";

};
