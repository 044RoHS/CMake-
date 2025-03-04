#ifndef SQUARE_H
#define SQUARE_H

#include "Quadrilateral.h"

class Kvadrat : public Chetriohugolnik {
    public:
        Kvadrat(int ASide, double AAngle)
        {
            this->ASide = ASide;
            this->BSide = ASide;
            this->CSide = ASide;
            this->DSide = ASide;
            this->AAngle = AAngle;
            this->BAngle = AAngle;
            this->CAngle = AAngle;
            this->DAngle = AAngle;
        }
    
        void get_Phigure() override {
            cout << "Квадрат:" << endl;
            cout << "Стороны: a=" << ASide << " b=" << BSide << " c=" << CSide << " d=" << DSide << endl;
            cout << "Углы: A=" << AAngle << " B=" << BAngle << " C=" << CAngle << " D=" << DAngle << endl;
            cout << endl;
        }
    };

#endif