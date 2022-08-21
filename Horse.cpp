#include "Horse.h"

 Horse::Horse(int xPos, int yPos) :
	Figure(xPos, yPos)
{
}

 bool Horse::CanMoveToPosition(int xPos, int yPos) {

	 int resX = abs(xPos - GetX());
	 int resY = abs(yPos - GetY());
	 if (resX > m_fieldLastPos || resY > m_fieldLastPos) {
		 std::cout << "Worng value" << std::endl;;
		 return false;
	 }
	 else if (resX == 1 && resY == 2 || resX == 2 && resY == 1) {

		 return true;
	 }
	 else {
		 return false;
	 }

 }
