#pragma once
#include <iostream>
#include "Figure.h"
class Horse : Figure {
public:

	Horse(int xPos, int yPos);
	bool CanMoveToPosition(int xPos, int yPos);

private:
	const int m_fieldLastPos = 8;

};