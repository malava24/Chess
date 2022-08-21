#include "Figure.h"

Figure::Figure() {}

Figure::Figure(int xPos, int yPos) :
	m_xPosFigure(xPos),
	m_yPosFigure(yPos)
{
}

std::string Figure::GetColor() {
	if (m_yPosFigure == 1) {
		m_color = "white";
	}
	else if (m_yPosFigure == 8) {
		m_color = "black";
	}
	else {
		std::cerr << "Wrong figure pos! Doesn't get color." << std::endl;
	}
	return m_color;
}

std::string Figure::GetFigureld() {
	if ((m_xPosFigure == 2 || m_xPosFigure == 7) && m_yPosFigure == 1 ||
		(m_xPosFigure == 2 || m_xPosFigure == 7) && m_yPosFigure == 8) {
		return m_figurled = "horse";
	}
	else if (m_xPosFigure == 5 && (m_yPosFigure == 1 || m_yPosFigure == 8)) {
		return	m_figurled = "king";
	}

}

bool Figure::SetCurrentCoordinates(int xPos, int yPos) {
	m_xPosFigure = xPos;
	m_yPosFigure = yPos;

	return true;
}

int Figure::GetX() {
	return m_xPosFigure;
}

int Figure::GetY() {
	return m_yPosFigure;
}
