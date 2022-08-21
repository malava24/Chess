#include "King.h"

 King::King(int xPos, int yPos) :
	Figure(xPos, yPos)

{
}

 bool King::CanMoveToPosition(int xPos, int yPos) {
	 int resX = abs(xPos - GetX());
	 int resY = abs(yPos - GetY());
	 if (resX > m_fieldLastPos || resY > m_fieldLastPos) {
		 std::cout << "Worng value" << std::endl;;
		 return false;
	 }
	 else if (resX == 1 && resY == 0 || resX == 0 && resY == 1 || resX == 1 && resY == 1) {

		 return true;
	 }
	 else {
		 return false;
	 }
 }
