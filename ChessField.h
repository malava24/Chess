#pragma once
#include <iostream> 
#include "Figure.h"
#include "Horse.h"
#include "King.h"
class ChessField {
public:

	ChessField();
	~ChessField();
	bool Step(Figure* figurled, int xPos, int yPos);
	Figure* GetFigureHorseWhite();
	Figure* GetFigureHorseBlack();
	Figure* GetFigureKingWhite();
	Figure* GetFigureKingBlack();
	void ShowBoard();
private:
	Figure* m_horseWhite = new Figure{ 2, 1 };
	Figure* m_kingWhite = new Figure{ 5, 1 };
	Figure* m_horseBlack = new Figure{ 7, 8 };
	Figure* m_kingBlack = new Figure{ 5, 8 };

private:
	int m_startPosX = 0;
	int m_startPosY = 0;
	std::string m_color = "";
	std::string m_figurled = "";


};