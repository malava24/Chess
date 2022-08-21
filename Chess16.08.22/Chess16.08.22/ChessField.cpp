
#include "ChessField.h"

#include <iostream>

ChessField::ChessField() {

	m_horseWhite->GetColor();
	m_horseWhite->GetFigureld();


	m_kingWhite->GetColor();
	m_kingWhite->GetFigureld();


	m_horseBlack->GetColor();
	m_horseBlack->GetFigureld();


	m_kingBlack->GetColor();
	m_kingBlack->GetFigureld();


}

ChessField::~ChessField() {
	delete m_horseWhite;
	delete m_horseBlack;
	delete m_kingWhite;
	delete m_kingBlack;
}

bool ChessField::Step(Figure* figurled, int xPos, int yPos) {

	if (figurled == m_horseWhite) {
		if (m_horseWhite->GetX() == xPos && m_horseWhite->GetY() == yPos) {
			std::cout << "White horse can't move. Try again" << std::endl;
			return false;
		}
		
			Horse horse(m_horseWhite->GetX(), m_horseWhite->GetY());
		bool canMove = horse.CanMoveToPosition(xPos, yPos);
		if (canMove) {
			m_horseWhite->SetCurrentCoordinates(xPos, yPos);
			std::cout << "White horse can move" << std::endl;
			return true;
		}
		else {
			std::cout << "White horse can't move. Try again" << std::endl;
			return false;
		}
	

	}
	if (figurled == m_horseBlack) {
		if (m_horseBlack->GetX() == xPos && m_horseBlack ->GetY() == yPos) {
			std::cout << "Black horse can't move. Try again" << std::endl;
			return false;
		}
		Horse horse(m_horseBlack->GetX(), m_horseBlack->GetY());
		bool canMove = horse.CanMoveToPosition(xPos, yPos);
		if (canMove) {
			m_horseBlack->SetCurrentCoordinates(xPos, yPos);
			std::cout << "Black horse can move" << std::endl;
			return true;
		}
		else {
			std::cout << "Black horse can't move. Try again" << std::endl;
			return false;
		}
	}
	if (figurled == m_kingWhite) {
		if (m_kingWhite->GetX() == xPos && m_kingWhite->GetY() == yPos) {
			std::cout << "White King can't move. Try again" << std::endl;
			return false;
		}
		King king(m_kingWhite->GetX(), m_kingWhite->GetY());
		bool canMove = king.CanMoveToPosition(xPos, yPos);
		if (canMove) {
			m_kingWhite->SetCurrentCoordinates(xPos, yPos);
			std::cout << "White king can move" << std::endl;
			return true;
		}
		else {
			std::cout << "White king can't move. Try again" << std::endl;
			return false;
		}
	}
	if (figurled == m_kingBlack) {
		if (m_kingBlack->GetX() == xPos && m_kingBlack->GetY() == yPos) {
			std::cout << "Black King can't move. Try again" << std::endl;
			return false;
		}
		King king(m_kingBlack->GetX(), m_kingBlack->GetY());
		bool canMove = king.CanMoveToPosition(xPos, yPos);
		if (canMove) {
			m_kingBlack->SetCurrentCoordinates(xPos, yPos);
			std::cout << "Black king can move" << std::endl;;
			return true;
		}
		else {
			std::cout << "Black king can't move. Try again" << std::endl;;
			return false;
		}
	}

}

Figure* ChessField::GetFigureHorseWhite() {
	return m_horseWhite;
}

Figure* ChessField::GetFigureHorseBlack() {
	return m_horseBlack;

}

Figure* ChessField::GetFigureKingWhite() {
	return m_kingWhite;
}

Figure* ChessField::GetFigureKingBlack() {
	return m_kingBlack;
}

void ChessField::ShowBoard() {
	
    for (int x = 9; x > 0; --x) {
      std::cout << std::endl;
      for (int y = 0; y < 9; ++y) {

        std::cout << "      |";
      }
      std::cout << std::endl;
      for (int y = 0; y < 9; ++y) {
        if (y == 1 && x == 9) {
          std::cout << "    1 |";
        }
        else
          if (y == 2 && x == 9) {
            std::cout << "   2  |";
          }
          else
            if (y == 3 && x == 9) {
              std::cout << "   3  |";
            }
            else
              if (y == 4 && x == 9) {
                std::cout << "   4  |";
              }
              else
                if (y == 5 && x == 9) {
                  std::cout << "   5  |";
                }
                else
                  if (y == 6 && x == 9) {
                    std::cout << "   6  |";
                  }
                  else
                    if (y == 7 && x == 9) {
                      std::cout << "   7  |";
                    }
                    else
                      if (y == 8 && x == 9) {
                        std::cout << "   8  |";
                      }
                      else
                            if (x == GetFigureKingWhite()->GetY() && y == GetFigureKingWhite()->GetX()) {
                              std::cout << "  KW  |";
                            }
                            else
                        if (x == GetFigureHorseWhite()->GetY()  && y == GetFigureHorseWhite()->GetX()) {
                          std::cout << "  HW  |";
                        }
                        else
                          if (x == GetFigureHorseBlack()->GetY() && y == GetFigureHorseBlack()->GetX()) {
                            std::cout << "  HB  |";
                          }
                          else
							
                              if (x == GetFigureKingBlack()->GetY() && y == GetFigureKingBlack()->GetX()) {
                                std::cout << "  KB  |";
                              }
                              else

                                if (y == 0) {
                                  if (x == 9) {
                                    std::cout << "  Pos |";
                                  }
                                  else {
                                    std::cout << "   " << x << "  |";
                                  }
                                }
                                else
                                  std::cout << "      |";
      }
      std::cout << std::endl;
	  for (int y = 0; y < 9; ++y) {
		  std::cout << "______|";

	  }

      }
}
